#编程基础 #cpp
# C++

目前的核心诉求是尽快入门计算机图形学，C++是一个极度需要经验的编程语言，目前也不可能一口气将全部东西学完，也更不可能将所有东西消化完毕。所以此时的重点，应该是快速入门，达到一个*会用、看懂、能写一点点*的程度就可以。

如果以后还有时间，可以按照后边的[README#深入学习C++](C++/README.md#深入学习C++)去深入。

## 快速入门
- **教程：**
	- [ ] [# C++入门教程，C++基础教程（更新完毕）](https://c.biancheng.net/cplus/)
	- [ ] [# C++11教程：C++11新特性大汇总](https://c.biancheng.net/cplus/11/)
- **笔记：**
	- [01.C到C++](01.C到C++.md)
	- [02.C++类和对象（class和object）](02.C++类和对象（class和object）.md)
	- [03.C++引用](03.C++引用.md)
	- [04.继承与派生](04.继承与派生.md)
	- [05.C++多态与虚函数](05.C++多态与虚函数.md)
	- [06.运算符重载（Operator）](06.运算符重载（Operator）.md)
	- [07.模板](07.模板.md)
	- [08.C++异常](08.C++异常.md)
	- [09.面向对象进阶](09.面向对象进阶.md)
	- [10.输入输出流](10.输入输出流.md)
	- [11.文件操作](11.文件操作.md)
	- [12.C++多文件编程](12.C++多文件编程.md)
- 其他：
	- [ ] [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
	- [ ] [现代 C++ 教程：高速上手 C++ 11/14/17/20](https://changkun.de/modern-cpp/)
	- [ ] [parallel101: 高性能并行编程与优化 -彭于斌](https://link.zhihu.com/?target=https%3A//github.com/parallel101/course)
- 参考：
	- [# 保姆级 C++ 学习路线](https://mp.weixin.qq.com/s/QCtQoIOg6_f1GX9rT8jG4Q)
	- [# C++ 找工作校招需要掌握到什么程度？ - 梓炀的回答 - 知乎](https://www.zhihu.com/question/585465188/answer/2928891679)
	- [# C++ 后端开发如何规划学习路线？ - 终端研发部的回答 - 知乎](https://www.zhihu.com/question/452409630/answer/3167010580)

## C++进阶路线

- [ ] 《C++ Primer 第五版》
	- 需要长期翻看的参考书
	- 一定要完成课后作业题
- [ ] 侯捷老师的视频
	- [ ] STL泛型编程
	- [ ] C++11新特性
	- [ ] 内存管理与分析
- [ ] 《STL源码剖析》
- [ ] 《Effective C++》
- [ ] 《深度探索C++》
	- [ ] 对象模型第三章
	- [ ] 第三章以外的部分
- 实战项目
	- [ ] CMU的15445的lab
	- [ ] 自主开发一个服务器
	- 必看书籍
		- [ ] 《TCP/IP网络编程》
		- [ ] 《Linux高性能服务端编程》
- 保持学习
	- 《C++沉思录》
	- 《C++模板元编程》
	- 《C++并发并发编程实战》
- 参考：
	- **[# 为什么说C++很难？ - 码农出击的回答 - 知乎](https://www.zhihu.com/question/357354437/answer/2617331811)**

# 深入学习C++

## 一、C++基础（3个月）
  
- 1、面向对象的三大特性：封装、继承、多态  
- 2、类的访问权限：private、protected、public  
- 3、类的构造函数、析构函数、赋值函数、拷贝函数  
- 4、[移动构造函数](https://www.zhihu.com/search?q=%E7%A7%BB%E5%8A%A8%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)与拷贝构造函数对比  
- 5、深拷贝与[浅拷贝](https://www.zhihu.com/search?q=%E6%B5%85%E6%8B%B7%E8%B4%9D&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)的区别  
- 6、空类有哪些函数？空类的大小？  
- 7、内存分区：全局区、堆区、栈区、常量区、代码区  
- 8、C++与C的区别  
- 9、struct与class的区别  
- 10、struct内存对齐  
- 11、new/delete与[malloc](https://www.zhihu.com/search?q=malloc&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)/free的区别  
- 12、内存泄露的情况  
- 13、[sizeof](https://www.zhihu.com/search?q=sizeof&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)与strlen对比  
- 14、指针与引用的区别  
- 15、[野指针](https://www.zhihu.com/search?q=%E9%87%8E%E6%8C%87%E9%92%88&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)产生与避免  
- 16、多态：动态多态、静态多态  
- 17、虚函数实现动态多态的原理、虚函数与纯虚函数的区别  
- 18、继承时，父类的析构函数是否为虚函数？构造函数能不能为虚函数？为什么？  
- 19、静态多态：重写、重载、模板  
- 20、static关键字：修饰局部变量、全局变量、类中成员变量、类中成员函数  
- 21、const关键字：修饰变量、指针、类对象、类中成员函数  
- 22、extern关键字：修饰全局变量  
- 23、volatile关键字：避免编译器指令优化  
- 24、四种类型转换：[static_cast](https://www.zhihu.com/search?q=static_cast&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、dynamic_cast、[const_cast](https://www.zhihu.com/search?q=const_cast&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、reinterpret_cast  
- 25、右值引用  
- 26、std::move函数  
- 27、四种[智能指针](https://www.zhihu.com/search?q=%E6%99%BA%E8%83%BD%E6%8C%87%E9%92%88&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)及底层实现：auto_ptr、[unique_ptr](https://www.zhihu.com/search?q=unique_ptr&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、shared_ptr、weak_ptr  
- 28、shared_ptr中的循环引用怎么解决？（weak_ptr）  
- 29、vector与list比较  
- 30、vector迭代器失效的情况  
- 31、map与unordered_map对比  
- 32、set与unordered_set对比  
- 33、STL容器空间配置器

- **参考书籍：**《C++ Primer》（第5版）、《STL源码剖析》、《深度探索C++对象模型》 
  
## 二、计算机网络（1个月）  
  
- 1、OSI7层网络模型：应用层、表示层、会话层、运输层、网络层、链路层、物理层  
- 2、TCP/IP四层网络模型：应用层、运输层、网际层、接口层  
- **综合OSI与TCP/IP模型，学习五层网络模型：**  
	- **从上向下架构：应用层、运输层、网络层、链路层、物理层**  
		- **链路层：**  
			- 3、MTU  
			- 4、MAC地址  
		- **网络层：**  
			- 5、地址解析协议  
			- 6、为啥有IP地址还需要MAC地址？同理，为啥有了MAC地址还需要IP地址？  
			- 7、网络层转发数据报的流程  
			- 8、[子网划分](https://www.zhihu.com/search?q=%E5%AD%90%E7%BD%91%E5%88%92%E5%88%86&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、子网掩码  
			- 9、网络控制报文协议ICMP  
			- 10、ICMP应用举例：PING、traceroute  
		- **运输层：**  
			- 11、TCP与UDP的区别及应用场景  
			- 12、TCP首部报文格式（SYN、ACK、FIN、RST必须知道）  
			- 13、TCP[滑动窗口](https://www.zhihu.com/search?q=%E6%BB%91%E5%8A%A8%E7%AA%97%E5%8F%A3&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)原理  
			- 14、TCP超时重传时间选择  
			- 15、TCP流程控制  
			- 16、TCP拥塞控制（一定要弄清楚与流量控制的区别）  
			- 17、TCP三次握手及状态变化。为啥不是两次握手？  
			- 18、TCP四次挥手及状态变化。为啥不是三次挥手？  
			- 19、TCP连接释放中TIME_WAIT状态的作用  
			- 20、SYN泛洪攻击。如何解决？  
			- 21、TCP粘包  
			- 22、TCP心跳包  
			- 23、路由器与交换机的区别  
			- 24、UDP如何实现可靠传输  
		- **应用层：**  
			- 25、DNS域名系统。采用TCP还是UDP协议？为什么？  
			- 26、FTP协议（了解）  
			- 27、HTTP请求报文与响应报文首部结构  
			- 28、HTTP1.0、HTTP1.1、HTTP2.0对比  
			- 29、HTTP与HTTPS对比  
			- 30、HTTPS加密流程  
			- 31、方法：GET、HEAD、POST、PUT、DELETE  
			- 32、状态码：1**、2**、3**、4**、5**  
			- 33、cookie与session区别  
			- 34、输入一个URL到显示页面的流程（越详细越好，搞明白这个，网络这块就差不多了）

- **参考书籍：**《计算机网络》（第5版）、《TCP/IP详解卷1：协议》、《图解HTTP》

## 三、操作系统（1个月）
  
- 1、进程与线程区别  
- 2、线程同步的方式：[互斥锁](https://www.zhihu.com/search?q=%E4%BA%92%E6%96%A5%E9%94%81&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、自旋锁、[读写锁](https://www.zhihu.com/search?q=%E8%AF%BB%E5%86%99%E9%94%81&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、条件变量  
- 3、互斥锁与自旋锁的底层区别  
- 4、孤儿进程与[僵尸进程](https://www.zhihu.com/search?q=%E5%83%B5%E5%B0%B8%E8%BF%9B%E7%A8%8B&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)  
- 5、死锁及避免  
- 6、多线程与多进程比较  
- 7、进程间通信：PIPE、FIFO、[消息队列](https://www.zhihu.com/search?q=%E6%B6%88%E6%81%AF%E9%98%9F%E5%88%97&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、信号量、共享内存、socket  
- 8、管道与消息队列对比  
- 9、fork进程的底层：读时共享，写时复制  
- 10、线程[上下文切换](https://www.zhihu.com/search?q=%E4%B8%8A%E4%B8%8B%E6%96%87%E5%88%87%E6%8D%A2&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)的流程  
- 11、进程上下文切换的流程  
- 12、进程的调度算法  
- 13、阻塞IO与非阻塞IO  
- 14、同步与异步的概念  
- 15、静态链接与动态链接的过程  
- 16、虚拟内存概念（非常重要）  
- 17、MMU地址翻译的具体流程  
- 18、缺页处理过程  
- 19、缺页置换算法：最久未使用算法、先进先出算法、最佳置换算法   
  
- **参考书籍：《深入理解计算机系统》**
	- ps:操作系统的内容看起来不是很多，实际上每个问题答案的底层原理要弄懂还是很考验基本功的。比如：互斥锁与自旋锁的区别，实际上涉及到阻塞时线程的状态是不一样的。互斥锁阻塞的线程是挂起的，此时系统会优先执行其它可执行的线程，就会将阻塞的线程切换到可执行线程，而当临界区执行的时间非常短时，此时线程切换频繁、开销较大，此时就会采用自旋锁的方式，让阻塞的线程处于忙等状态。

## 四、网络编程（1个月）  
  
- 1、IO多路复用：select、poll、epoll的区别（非常重要，几乎必问，回答得越底层越好，要会使用）  
- 2、手撕一个最简单的server端服务器（socket、bind、listen、accept这四个API一定要非常熟练）  
- 3、[线程池](https://www.zhihu.com/search?q=%E7%BA%BF%E7%A8%8B%E6%B1%A0&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)  
- 4、基于事件驱动的reactor模式  
- 5、边沿触发与水平触发的区别  
- 6、非阻塞IO与阻塞IO区别  

- **参考书籍：**《Unix网络编程》  
	- ps:网络编程掌握以上几点就够了，要搞明白还是要花很久时间的。

## 五、数据结构与算法及刷题（2个月）
  
- 1、数组  
- 2、链表  
- 3、栈  
- 4、队列  
- 5、堆  
- 6、二叉树：[二叉搜索树](https://www.zhihu.com/search?q=%E4%BA%8C%E5%8F%89%E6%90%9C%E7%B4%A2%E6%A0%91&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、平衡树、[红黑树](https://www.zhihu.com/search?q=%E7%BA%A2%E9%BB%91%E6%A0%91&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)  
- 7、B树、B+树  
- 8、[哈希表](https://www.zhihu.com/search?q=%E5%93%88%E5%B8%8C%E8%A1%A8&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)及哈希冲突  
- 9、排序算法：冒泡排序、简单选择排序、插入排序、[希尔排序](https://www.zhihu.com/search?q=%E5%B8%8C%E5%B0%94%E6%8E%92%E5%BA%8F&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、归并排序、[堆排序](https://www.zhihu.com/search?q=%E5%A0%86%E6%8E%92%E5%BA%8F&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)、[快速排序](https://www.zhihu.com/search?q=%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)  
- （要求能够面试时手写出堆排序和快速排序）  
- 10、二分法：旋转数组找target  
- 11、[回溯法](https://www.zhihu.com/search?q=%E5%9B%9E%E6%BA%AF%E6%B3%95&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)：全排列、复原IP地址  
- 12、[动态规划](https://www.zhihu.com/search?q=%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)（掌握基本的动态规划的几个题其实就够了，如：斐波那契数列、接雨水、股票的最佳买入时机） 

- **参考书籍：**《图解算法》《剑指offer》  
	- ps:建议刷题与数据结构算法同时进行，这样理解得更深入。刷题网站leetcode，刷完《剑指offer》其实就能解决大部分面试手撕了。

## 六、mySQL数据库（7天~15天）
  
- 1、数据存储引擎：InnoDB、myISAM、Memory  
- 2、[数据库索引](https://www.zhihu.com/search?q=%E6%95%B0%E6%8D%AE%E5%BA%93%E7%B4%A2%E5%BC%95&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)类型及原理：B+树索引、哈希表索引  
- 3、锁：悲观锁、乐观锁  
- 4、事务：事务的四大特性（ACID）、事务并发的三大问题、[事务隔离级别](https://www.zhihu.com/search?q=%E4%BA%8B%E5%8A%A1%E9%9A%94%E7%A6%BB%E7%BA%A7%E5%88%AB&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A2617331811%7D)及实现原理  
- 5、多版本并发控制实现机制（MCVV）原理  

- **参考书籍：**《高性能MySQL》  
  
## 七、项目（2个月）
  
如果时间够的话就可以写一个项目，当然大部分人写的项目都是一个烂大街的项目，也就是“web高性能服务器”。其实就是

**根据陈硕大神写的《Linux高性能服务器编程：使用muduo C++网络库》进行改编**

当然啦，读懂这本书还是很耗时的，学习其中的思想也会受益匪浅的。

---
# STL

- [ ] [# STL教程：C++ STL快速入门（非常详细）](https://c.biancheng.net/stl/)

---

# QT
- **教程**
	- [x] [# Qt教程，Qt5编程入门教程（非常详细）](https://c.biancheng.net/qt/)
- **笔记**
	- [[8.Qt 安装目录结构]]
	- [[12~15.Qt程序：创建、运行、分析]]
	- [[【项目总结】“学生信息管理系统”的一些notes]]

---

# UE4
- **教程**
	- [ ] [# UE4教程：虚幻4引擎(Unreal Engine 4)学习指南](https://c.biancheng.net/ue4/)


---

