#math 

# What is Monte Carlo Integration?

A technique for [numerical integration](https://en.wikipedia.org/wiki/Numerical_integration) using [random numbers](https://en.wikipedia.org/wiki/Pseudorandomness).

This method is particularly useful for higher-dimensional integrals.

# Why use Monte Carlo Integration?

A particular [Monte Carlo method](https://en.wikipedia.org/wiki/Monte_Carlo_method) that *numerically computes a definite integral*.

# How to use Monte Carlo Integration?

## A simple introduction in Graphics for Solving Rendering Equation

Estimate the integral of a function by averaging random samples of the function's value.

![Monte Carlo Integration](img/Pasted%20image%2020231130202209.png)

- Definite integral: $\int^a_bf(x)\mathrm{d}x$
- Random variable: $X_i \to p(x)$
- Monte Carlo estimator: $$F_N = \frac{1}{N}\sum\limits_{i=1}^N\frac{f(X_i)}{p(X_i)}$$
### Example: Uniform Monte Carlo Estimator



![Uniform random variable](img/Pasted%20image%2020231130202835.png)

$$\begin{align*}
X_i \to p(x) &= C (constant) \\
\int^b_a p(x)\mathrm{d}x &= 1\\
\to \int^b_a C \mathrm{d}x &= 1\\
\to C &= \frac{1}{b-a}
\end{align*}$$

So **Uniform** random variable: $X_i\to p(x) = \frac{1}{b-a}$

Then, **Basic Monte Carlo Estimator** $$F_N = \frac{b-a}{N}\sum\limits^N_{i=1}f(X_i)$$

Finally, we can solve the definite integral:$$\int f(x)\mathrm{d}x = \frac{1}{N}\sum\limits^N_{i=1}\frac{f(X_i)}{p(X_i)},\ X_i \to p(x)$$
- Notes: *Sample on $x$, integrate on $x$*




# Example: Rendering Equation





