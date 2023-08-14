import numpy as np
from scipy.integrate import quad
import sympy as sp

# Get user-defined function
expression_str = input("x와 y에 대해 적분할 함수를 입력하세요.: ")
x, y = sp.symbols('x y')
expression = sp.sympify(expression_str)

# Parametric equations for the curve
def x_parametric(t):
    # Define x(t) here
    return t

def y_parametric(t):
    # Define y(t) here
    return t

# Define the integrand function
def integrand(t):
    return expression.subs({x: x_parametric(t), y: y_parametric(t)})

# Integration limits
t_start = float(input("적분 범위 시점: "))
t_end = float(input("적분 범위 종점: "))

# Perform the line integral
result, error = quad(integrand, t_start, t_end)

print("Line integral result:", result)
print("Estimated error:", error)
