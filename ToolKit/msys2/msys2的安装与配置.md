#msys2

# 安装 msys2

- [MSYS2](https://www.msys2.org/)

# 安装 mingw-w64-ucrt

- [Get Started with C++ and MinGW-w64 in Visual Studio Code](https://code.visualstudio.com/docs/cpp/config-mingw)

```shell
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

# 安装 git, zsh, vim

```shell
pacman -S git
pacman -S zsh
pacman -S vim
```

# 将 msys2 的 shell 更改为默认使用 zsh

找到 msys 文件安装路径下：`msys2.ini mingw64.ini ucrt64.ini...`

文本打开，在最后添加 `SHELL=/usr/bin/zsh

想更改哪个就只对哪个修改即可

# 安装 oh-my-zsh

[GitHub - ohmyzsh/ohmyzsh](https://github.com/ohmyzsh/ohmyzsh)

```shell
wget https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh
sh install.sh
```

我这一步出现了问题，直接 git clone 是可以 pull 下来，但是使用上边却无法连接。

个人解决：
- 直接访问网址：[install.sh](https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)把内容复制下来保存为对应文件
- 然后在运行`sh install.sh`
- 成功

# 设置右键打开 msys 终端

新建 mingw64.reg 后缀文件：

```shell
Windows Registry Editor Version 5.00 [HKEY_CLASSES_ROOT\Directory\Background\shell\mingw64] @="MinGW64 Here" "icon"="C:\\msys64\\mingw64.exe" [HKEY_CLASSES_ROOT\Directory\Background\shell\mingw64\command] @="C:\\msys64\\msys2_shell.cmd -mingw64 -here"
```

双击导入即可


参考：
[windows 上 msys2 配置及填坑 - 昨夜星辰](https://hustlei.github.io/2018/11/msys2-for-win.html)
[使用 msys2 打造优雅的开发环境 - 飞鸿影 - 博客园](https://www.cnblogs.com/52fhy/p/15158765.html)

