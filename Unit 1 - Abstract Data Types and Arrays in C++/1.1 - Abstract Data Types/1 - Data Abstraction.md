# Data Abstraction

* Computers approximate real numbers as finite-length decimals.
* Irrational numbers are represented as a finite floating point numbers.
* If we represent rational numbers as floating point numbers we lose precision.
* To combat this, we can represent rational numbers as a ratio (fraction).


* rational(n, d) returns the rational number with numerator n and denominator d.
* numer(x) returns the numerator of the rational number x.
* denom(x) returns the denominator of the rational number x.

* Here are some operations
```python
def add_rationals(x, y):
    nx, dx = numer(x), denom(x)
    ny, dy = numer(y), denom(y)
    return rational(nx * dy + ny * dx, dx * dy)

def mul_rationals(x, y):
    return rational(numer(x) * numer(y), denom(x) * denom(y))

def equal_rationals(x, y):
    return numer(x) * denom(y) == numer(y) * denom(x)
```
