#os #MIT6s081

---

O/S 的目的：
- 硬件的抽象 Abstract H/W
- 多用户/多操作系统 multiplex
- 进程间相互独立 isolation
- 共享文件 sharing
- 系统的按权 security
- 性能 performance
- 多种任务 range of uses

O/S organization，操作系统的结构图

系统调用会启动内核

操作系统设计和研究：难并有趣
- 内核环境：环境编程很困难
	- QEMU 硬件模拟器
- 需要解决一系列矛盾（tensions）
	- 矛盾一：基于硬件的高效、基于高级层次的抽象封装
		- 为了高效 efficient，需要在接近硬件层面上实现
		- 为了日常使用方便，需要它具有高层次的抽象 abstract （例如接口）
	- 矛盾二：简单的 API 接口内置复杂的功能
		- 需要更强大的接口，powerful
		- 但需要简单易懂的接口（API），simple API
	- 矛盾三：
		- 灵活的接口，flexible
		- 但需要加上一定的限制，为了安全
- 交互 interact 


