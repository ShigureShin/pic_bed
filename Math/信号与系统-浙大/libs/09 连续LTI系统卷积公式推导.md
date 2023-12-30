#math #single_and_system

---
# 连续 LTI 系统

- 线性系统
	- 齐次性
	- 叠加性
- 时不变系统
	- 时不变性

- 问题 1：LTI 系统的三个性质的题目
![](img/Pasted%20image%2020231205130559.png)
- 问题 2：
![](img/Pasted%20image%2020231205130608.png)

> 注意将问题 2 进行分解，0~2 的 x(t)和 1~3 的 x(t)

- 问题 3：任意给定一个输入呢？
	- 解：将输入进行精细划分为多个不同位置的 x (t)

如果知道一个*足够窄*的方波，就可以近似求出对应的 y(t)

这个足够窄的函数：**冲激函数**
- [狄拉克δ函数 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E7%8B%84%E6%8B%89%E5%85%8B%CE%B4%E5%87%BD%E6%95%B0)
- [冲激响应 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E5%86%B2%E6%BF%80%E5%93%8D%E5%BA%94)

---
# 冲激函数 

冲激函数 $\delta(t)$ 的定义：![](img/Pasted%20image%2020231205131830.png)

---
# 连续 LTI 系统的卷积公式

假设 $\delta_{\Delta}(t)$ 经过 LTI 系统后的响应函数为 $h_{\Delta}$（假设极限存在的情况下）

![](img/Pasted%20image%2020231205133105.png)

想要据此计算给定输入 x(t)经过 LTI 系统后的响应为？

![](img/Pasted%20image%2020231205133344.png)

$$
x_{\Delta}(t)=\sum\limits^{\infty}_{k=-\infty}x(k\Delta)\delta_{\Delta}(t-k\Delta)\cdot\Delta
$$

我们知道 LTI 系统的三个性质：

给定 $\delta_{\Delta}(t)\overset{LTI}{\to}h_{\Delta}(t)$

- 时不变性
	- $\delta_{\Delta}(t-k\Delta)\overset{LTI}{\to}h_{\Delta}(t-k\Delta)$
- 齐次性
	- $x_{\Delta}(k\Delta)\delta_{\Delta}(t-k\Delta)\cdot\Delta \overset{LTI}{\to} x_{\Delta}(k\Delta)h_{\Delta}(t-k\Delta)\cdot\Delta$
- 叠加性
	- $\sum\limits^{\infty}_{k=-\infty}x_{\Delta}(k\Delta)\delta_{\Delta}(t-k\Delta)\cdot\Delta \overset{LTI}{\to} \sum\limits^{\infty}_{k=-\infty}x_{\Delta}(k\Delta)h_{\Delta}(t-k\Delta)\cdot\Delta$

接下来取极限：$$\begin{align*}
x(t)&= \lim_{\Delta \to 0}x(t)\\
&= \lim_{\Delta \to 0}\sum\limits^{\infty}_{k=-\infty}x(k\Delta)\delta_{\Delta}(t-k\Delta)\cdot\Delta\\
&\overset{LTI}{\to} \lim_{\Delta \to 0}\sum\limits^{\infty}_{k=-\infty}x(k\Delta)h_{\Delta}(t-k\Delta)\cdot\Delta\\
&= \lim_{\Delta \to 0}\sum\limits^{\infty}_{k=-\infty}x(k\Delta)h(t-k\Delta)\cdot\Delta\\
&= \int^{\infty}_{-\infty}x(\tau)h(t-\tau)\mathrm{d}\tau
\end{align*}$$

最后可以得到**连续 LTI 系统的卷积公式为**：$$
x(t) \ast h(t) = \int^{\infty}_{-\infty}x(\tau)h(t-\tau)\mathrm{d}\tau
$$

![](Pasted%20image%2020231205134421.png)


