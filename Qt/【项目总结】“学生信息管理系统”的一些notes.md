#编程基础 #QT 

# Headers

- 头文件：一些类、属性、方法函数的声明位置
## MainWidget.h
- 成员和成员函数的public和private分开放，一目了然
- 成员函数的声明：
	- 构造函数`MainWidget();`：主窗口界面
	- 成员函数`void AddStuBox();`：实现主窗口中某些功能
	- 槽函数`void flushTable();`：接收信号后进行某种行为
- 成员`QTableWidget *TableWidget;`：窗口中的Table控件，其他同
```cpp
#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include <QWidget>
#include <QHBoxLayout>
#include "EditStuMessBox.h"
#include "Student.h"
#include "Tool.h"

//自定义主窗口
class MainWidget : public QWidget
{
    Q_OBJECT
public:
    //构造函数，运行主窗口界面
    MainWidget();
    // 方法函数
    void AddStuBox();
public slots:
	// 槽函数
    void flushTable();
private:
    QGroupBox *createStuMess();
	// 这里的声明以后最好使用指针形式
	// connect中就需要传递信号发出与接收的地址
    QTableWidget *TableWidget;
    QListWidget *ListWidget;
    QPushButton *AddStuBtn;
    QLineEdit *FindStuEdit;
    EditStuMessBox *messBox;
};
#endif // MAINWIDGET_H
```

# Sources

## main.cpp
```cpp
#include <QApplication>
#include "MainWidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc,argv); 
    MainWidget mWidget;
    a.exec();
    return 0;
}
```

## MainWidget.cpp
- 这里放成员函数的定义：
	- 构造函数`MainWidget::MainWidget()`：
```cpp
#include "MainWidget.h"
#include<QDebug>
MainWidget::MainWidget()
{
// 主窗口的图标、标题、窗口大小
    setWindowIcon(QIcon(":/logo.ico"));
    setWindowTitle("StudentInfoSystem");
    this->resize(1000,600);
// 主窗口布局设置：H->水平方向，this表明父窗口为mainwidget
    QHBoxLayout *HBoxLayout = new QHBoxLayout(this);
// 组窗口布局的左右两个分组
    QGroupBox *Left_Table_Box = createStuMess();
    QGroupBox *Right_Table_Box = createMenu();
    // 这里的Left/Right_Table_Box会返回对应的groupbox布局实例
// 通过addWidget将二者放到主窗口的横向布局中，横向占比为：4:2
    HBoxLayout->addWidget(Left_Table_Box,4);
    HBoxLayout->addWidget(Right_Table_Box,2);
    // show放到这里
    // 放到main中使用widget.show();总是出现全白的窗口，无法看到控件
    // 不知道是什么原因
    this->show();
}
// 其中左侧布局的内部细节
// 独立出来定义，保证文件内部的可读性
QGroupBox *MainWidget::createStuMess(){
// 左侧布局的标题：StuInfo
    QGroupBox *box = new QGroupBox("StuInfo");
    // 布局内部的表格控件
    // 在头文件中声明，在这里定义
    TableWidget = new QTableWidget;
    // 表格控件的成员函数
    TableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableWidget->setColumnCount(7);
    TableWidget->setHorizontalHeaderLabels(QStringList() <<"id"<< "name"<<"age");
    // 自定义实现的刷新表格函数，在mainwidget.h中声明
    flushTable();
    //为了让表格自适应窗口大小，这里通过声明另一个HBox布局
    // 将表格控件依附从而达到目的
    QHBoxLayout *AutoHBoxLayout = new QHBoxLayout;
    AutoHBoxLayout->addWidget(TableWidget);
    // 将这些控件的布局打包
    box->setLayout(AutoHBoxLayout);
    connect(TableWidget,&QTableWidget::cellClicked,
        this,&MainWidget::flushListWidget);

    return box;
}
```
