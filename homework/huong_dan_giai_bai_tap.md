Hướng dẫn giải bài tập Computational Graph
==========================================

Các lời giải đúng không nhất thiết phải trình bày giống lời giải dưới đây.

Bài 1
-----

### a.

$$\frac{\partial{L}}{\partial{L}} = 1$$

$$\frac{\partial{L}}{\partial{e}} = \frac{\partial{L}}{\partial{e}}\;\frac{\partial{L}}{\partial{L}} = 2e \times 1 = 2e$$

$$\frac{\partial{L}}{\partial{d}} = \frac{\partial{e}}{\partial{d}} \; \frac{\partial{L}}{\partial{e}} = 1 \times 2e = 2e$$

$$\frac{\partial{L}}{\partial{c}} = \frac{\partial{d}}{\partial{c}} \; \frac{\partial{L}}{\partial{d}} = 1 \times 2e = 2e$$

$$\frac{\partial{L}}{\partial{a}} = \frac{\partial{c}}{\partial{a}} \; \frac{\partial{L}}{\partial{c}} = x \times 2e = 2ex = 2(ax + b - y)x$$

### b.

$$\frac{\partial{L}}{\partial{L}} = 1$$

$$\frac{\partial{L}}{\partial{e}} = 2e$$

$$\frac{\partial{L}}{\partial{y}} = \frac{\partial{e}}{\partial{y}} \; \frac{\partial{L}}{\partial{e}} = -1 \times 2e = -2e = -2(ax + b - y)$$

Bài 2
-----

### a.

$$a = 3\quad(1)$$

$$b = 2\quad(2)$$

$$(1), (2) \implies c = a + b = 3 + 2 = 5\quad(3)$$

$$(2), (3) \implies S = c \times b = 5 \times 2 = 10$$

### b.

$$\frac{\partial{S}}{\partial{S}} = 1$$

$$\frac{\partial{S}}{\partial{c}} = \frac{\partial{S}}{\partial{c}}\;\frac{\partial{S}}{\partial{S}} = b \times 1 = 2$$

$$\frac{\partial{S}}{\partial{a}} = \frac{\partial{c}}{\partial{a}}\;\frac{\partial{S}}{\partial{c}} = 1 \times 2 = 2$$

### c.

$$\frac{\partial{S}}{\partial{S}} = 1$$

$$\frac{\partial{S}}{\partial{c}} = \frac{\partial{S}}{\partial{c}}\;\frac{\partial{S}}{\partial{S}} = b \times 1 = 2$$

$$\frac{\partial{S}}{\partial{b}} = \frac{\partial{c}}{\partial{b}}\;\frac{\partial{S}}{\partial{c}} + \frac{\partial{S}}{\partial{b}} = 1 \times 2 + c = 1\times 2 + a + b = 7$$

Bài 3
-----

Xem thêm trong file `bai_3.ipynb` thuộc thư mục chứa file này.

### a.

```
import torch

x = torch.tensor(5.0, required_grad=True)
y = x ** 2 + 3 * x + 2

print('y = {}'.format(y))
```

### b.

Trong trường hợp $n = 20$,

```
import torch

x = torch.tensor(20.0, required_grad=True)
y = x ** 2 + 3 * x + 2

x.grad = None
y.backward()

print('dy/dx = {}'.format(x.grad))
```