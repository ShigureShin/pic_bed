#computer 

---
## 定义

**栈**：只允许在*一端*进行*插入或删除*操作的**线性表**

- **栈顶**：允许插入和删除的一端（栈顶元素）
- **栈底**：不允许插入和删除的一端（栈底元素）
- **空栈**

- 特点：*后进先出*
	- Last In First Out （LIFO）

## 基本操作

- 创建销毁

![](../img/Pasted%20image%2020231209165615.png)

- 增加删除
	- 出栈的同时会删除栈顶元素

![](../img/Pasted%20image%2020231209165620.png)

- 查找
	- 读取栈顶元素但不删除
![](../img/Pasted%20image%2020231209165659.png)

- 判空

![](../img/Pasted%20image%2020231209165724.png)

## 常考题型

- 合法的出栈顺序
	- 进栈顺序中穿插进行出栈（进出栈元素顺序会不同）
	- ![](../img/Pasted%20image%2020231209165900.png)

## 栈的物理实现
### 顺序栈

#### 定义

- **顺序存储**的方式实现栈
- 即，*静态数组*实现，并*记录栈顶指针*

#### 基本操作

- 创（初始化）

```c
#define MaxSize 10
typedef struct{
	ElemType data[MaxSize]; // 静态数组存放栈中元素
	int top; // 栈顶指针（数组下标）
}SqStack;
void InitStack(SqStack &S)
{
	S.top=-1; // 栈顶指针为-1表示栈空空
}
```

![](../img/Pasted%20image%2020231210163238.png)

- 判空、判满

```c
bool StackEmpty(SqStack S)
{
	// 判空
	if (S.top == -1) 
		return true;
	else 
		return false;
}
```

- 增（进栈）

```c
// 进栈操作
bool Push(SqStack &S, ElemType x)
{
	if(S.top==MaxSize-1) 
		return false; // 判满
	// 不满，新元素入栈
	// 先移动指针即top+1，再入栈
	S.data[++S.top] = x;
	// 指针+1，新元素入栈
	return true;
}
```

- 删（出栈）

```c
// 出栈操作
bool Pop(SqStack &S, ElemType &x)
{
	if (S.top == -1) 
		return false; // 栈空报错
	x = S.data[S.top--]; // 栈顶元素出栈，栈顶指针-1
	return true;
}
```

- 查（获取栈顶元素）

```c
bool GetTop(SqStack S, ElemType &x)
{
	if(S.top == -1) 
		return false; // 栈空
	x = S.data[S.top]; // 栈顶元素
	return true;
}
```

**注意**：如果初始化时为 `S.top=0`，即top指向*下一个可以插入*的位置，此时和上边的情况中更新top的方式有些不同
- 此时进栈为 `S.data[S.top++]=x;`，出栈为：`x=S.data[--S.top];`
- 栈满条件为：`S.top == MaxSize;`
- 要注意top是指向*栈顶元素*还是栈顶元素*之后*的位置

- 上述的栈的操作都为O（1）复杂度

### 共享栈

```c
#define MaxSize 10
typedef struct{
	ElemType data[MaxSize];
	int top0;
	int top1;
}ShStack;
// 初始化
void InitStack(ShStack &S)
{
	S.top0 = -1;
	S.top1 = MaxSize;
}
```

- 栈满：`S.top0 + 1 == S.top1`

![](../img/Pasted%20image%2020231210164606.png)

### 链栈

#### 定义

- 用*链式存储*实现栈

#### 两种实现方式

- 带头节点
- 不带头节点

![](../img/Pasted%20image%2020231211140320.png)

```c
typedef struct Linknode{
	ElemType data;
	struct Linknode *next;
}*LiStack;
```

#### 基本操作

- 创（初始化）：单链表的头插法
- 增（进栈）：单链表的头插法
- 删（出栈）：单链表的删除
- 查（获取栈顶元素）
- 判空？判满？

- **只在链表的头节点后节点进行处理**
- 留意带头结点和不带头结点区别