#computer 

---
## 定义

- 和栈一样，队列同样为操作受限的线性表

**栈Stack**：只允许在一端进行插入或删除操作的线性表
**队列Queue**：只允许在*一端进行插入*，*另一端删除*的线性表

- 队列将插入和删除操作分别限制在了两端

- 队头（允许删除的一端）
- 队尾（允许插入的一端）
- 空队列

特点：**先进先出/FIFO**

## 基本操作

![](../img/Pasted%20image%2020231211155317.png)

- 判断队列是否为空

## 队列的物理实现

### 顺序实现

```c
#define MaxSize 10
typedef struct{
	ElemType data[MaxSize]; // 静态数组存放，连续的存储空间
	int front, rear; // 对头和队尾指针
	// 队尾指向队尾元素的后一个位置，即下一个应该插入的位置
}SqQueue;
```

#### 初始化

```c
// 初始化
void InitQueue(SqQueue &Q)
{
	// 初始化时队头队尾指向0
	Q.rear = Q.front = 0;
}
```

#### 判空、判满

```c
// 判空
void EmptyQueue(SqQueue Q)
{
	if (Q.rear = Q.front) // 队空条件
		return true;
	else 
		return false;
}
```

#### 入队

```c
bool EnQueue(SqQueue &Q, ElemType x)
{
	if((Q.rear+1)%MaxSize == Q.front) // 队满条件
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear+1)%MaxSize; // 队尾指针+1，队满时rear会从队列头部重新开始
	// 循环队列
	return true;
}
```

队满条件：队尾指针的下一个位置是队头，即 `(Q.rear+1)%MaxSize == Q.front
牺牲掉rear最后指向的存储单元 `

#### 出队

```c
bool DeQueue(SqQueue &Q, ElemType &x){
	if (Q.rear == Q.front) // 队空
		return false
	x = Q.data[Q.front];
	Q.front = (Q.front+1)%MaxSize; // 队头后移
	return true;
}
```

#### 查（一般是查队头）

```c
bool GetHead(SqQueue &Q, ElemType &x)
{
	if(Q.rear==Q.front)
		return false;
	x = Q.data[Q.front];
	return true;
}
```

- 队满条件：`(Q.rear+1)%MaxSize == Q.front`
- 队空条件：`Q.rear == Q.front`

#### 队列长度

`(rear+MaxSize-front)%MaxSize`

方案二：判满判空的方式

```c
#define MaxSize 10
typedef struct{
	ElemType data[MaxSize];
	int front, rear;
	int size; // 存储当前长度
	// 初始化时，front=rear=0,size=0
	// 出队 --size, 入队 ++size
}SqQueue;
```

此时队满：`size == MaxSize`，队空：`size == 0`

方案三：判满判空的方式

```c
#define MaxSize 10
typedef struct{
	ElemType data[MaxSize];
	int front, rear;
	int tag; // 最近进行的是删除0/插入1
	// 删除操作，才可能导致队空 tag = 0
	// 插入操作，才可能导致队满 tag = 1
}SqQueue;
```

- 队满：`front == rear && tag==1`
	- 标识，队头和队尾相等时为*插入导致*
- 队空：`front == rear && tag == 0`
	- 标识，队头和队尾相等时为*删除导致

**以上都是队尾指针rear指向队尾元素的下一个位置的情况下**

如果队尾指针rear*指向队尾元素呢？*
- 初始化时，front=0，rear=-1，从而保证后续入队出队的操作统一性
- 入队操作
	- 此时插入位置为 (rear+1)%MaxSize
- 出队操作

- 队空：`(Q.rear+1)%MaxSize == Q.front`
- 队满：
	- 方案一：牺牲一个存储单元
		- 固定front上一个位置不能存
	- 方案二：增加辅助变量


### 总结
- 几个关注点：
	- 初始化、入队、出队
	- 判空、判满
	- 队列长度
- 确定front、rear的指向
	- 方案一：rear指向队尾元素后一个位置
		- 初始化：front=rear=0
	- *方案二*：rear指向队尾元素
		- 初始化：front=0, rear=-1
- 判空判满的方法：寻找两种状态下front和rear的位置关系
	- A 牺牲一个存储单元
	- B *增加size变量记录队列长度*
	- C 增加 tag=0/1 标记最近一次操作是出队/入队

### 链式实现

- 链式存储实现
	- 头节点
	- 不带头节点
- 操作
	- 创（初始化）
	- 增（入队）
	- 删（出队）
	- 查（获取队头元素）
	- 判空、判满（增删查操作时必要判断）

```c
// 链式队列结点
typedef struct LinkNode{
	ElemType data;
	struct LinkNode *next;
}LinkNode;
// 链式队列指针
typedef struct{
	LinkNode *front, *rear;
}LinkQueue;
```

![](../img/Pasted%20image%2020231211163648.png)

#### 头节点
- 初始化
```c
void InitQueue(LinkQueue &Q)
{
	// 初始化时，front和rear都指向头节点
	Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}
```
- 判空
```c
bool IsEmpty(LinkQueue Q)
{
	if(Q.front == Q.rear)
		return true;
	else
		return false;
}
```
- 入队
```c
void EnQueue(LinkQueue &Q, ElemType x)
{
	// 创建结点存储入队数据
	LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
	s->data = x; // 存储数据
	s->next = NULL; // 因为在队尾插入，指向null
	// 将上一个结点指向新节点
	Q.rear->next = s;
	// 更新rear指针指向新的最后一个元素
	Q.rear = s;
}
```
- 出队
```c
void DeQueue(LinkQueue &Q, ElemType &x)
{
	// 判空
	if(Q.front == Q.rear)
		return false;
	// 从头节点后一个节点出队
	LinkNode *p = Q.front->next;
	x = p->data; // 返回该节点data
	Q.front->next = p->next;
	// 特殊讨论，如果此时p为最后一个结点，还需要同时更新rear指针
	if(Q.rear==p)
		Q.rear = Q.front; // 相当于此时队列重置为初始状态了
	// 释放结点空间
	free(p);
	return true;
}
```

#### 无头节点
- 初始化
```c
void InitQueue(LinkQueue &Q)
{
	// 初始化时二者都指向null
	Q.front  = NULL;
	Q.rear = NULL;
}
```
- 判空
```c
bool IsEmpty(LinkQueue Q)
{
	if(Q.front == NULL) // rear == NULL
		return true;
	else
		return false;
}
```
- 入队
```c
void EnQueue(LinkQueue &Q, ElemType x)
{
	// 创建结点存储入队数据
	LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
	s->data = x; // 存储数据
	s->next = NULL; // 因为在队尾插入，指向null
	// 无头结点需要特殊考虑第一个结点的插入
	// 即先判空
	if(Q.front == NULL)
	{
		// front和rear都指向新节点
		Q.front = s;
		Q.rear = s;
	}
	else
	{
		Q.rear->next = s; // 新节点插入rear之后
		Q.rear = s; // 更新rear
	}
}
```
- 出队
```c
void DeQueue(LinkQueue &Q, ElemType &x)
{
	// 判空
	if(Q.front == NULL)
		return false;
	// front指向的为第一个节点位置
	LinkNode *p = Q.front;
	x = p->data; // 返回该节点data
	Q.front = p->next;
	// 特殊讨论，如果此时p为最后一个结点，还需要同时更新rear指针
	if(Q.rear==p)
		Q.rear = Q.front = NULL; // 相当于此时队列重置为初始状态了
	// 释放结点空间
	free(p);
	return true;
}
```

对于链式实现的队列，一般不会队满（除非内存不足）

- 如何计算此时的队列长度
	- 如果直接从front访问到rear，需要O(n)时间
	- 也可以直接增加一个int len变量存储队列长度数据

### 双端队列

- 只允许从*两端插入*、*两端删除*的线性表（相当于两端放开的栈，栈可以实现则双端队列也可以实现）
	- 输入受限的双端队列：一端插入、两端删除
	- 输出受限的双端队列：两端插入、一端删除
- **考点**：判断输出序列合法性
	- 如：数据元素输入序列为1、2、3、4，则哪些输出序列合法，哪些非法
	- 栈：验证过栈后，如果需要考虑队列中的合法情况，则*只需要验证在栈的条件下不合法的情况*
	- ![](../img/Pasted%20image%2020231211170048.png)
	- 队列
	- 双端队列

![](../img/Pasted%20image%2020231211170108.png)




