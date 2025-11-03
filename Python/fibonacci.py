def bisection_method(func, a, b, tol=1e-5, max_iter=100):

    if func(a) * func(b) >= 0:
        raise ValueError("The function must have different signs at a and b.")

    for i in range(max_iter):
        c = (a + b) / 2.0
        print(f"Iteration {i+1}: Midpoint = {c:.5f}, f(c) = {func(c):.5f}")
        if abs(func(c)) < tol or abs(b - a) < tol:
            print(f"Root found: {c:.5f} after {i+1} iterations.")
            return c
        if func(c) * func(a) < 0:
            b = c 
        else:
            a = c 
    raise ValueError("Maximum number of iterations reached without finding a root.")

import math
def f(x):
    return x**2 - 4
root = bisection_method(f, 0, 5)
print(f"Final estimated root: {root:.5f}")