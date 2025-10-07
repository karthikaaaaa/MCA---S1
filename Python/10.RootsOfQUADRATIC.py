#Program to find roots of a quadratic equation

import cmath  #complex math module imported to use square root function

#take coefficients a,b,c
a=int(input("Enter coefficient a: "))
b=int(input("Enter coefficient b: "))
c=int(input("Enter coefficient c: "))

# Calculate discriminant
d = cmath.sqrt(b**2 - 4*a*c)  # cmath.sqrt works even if negative

# Calculate roots
root1 = (-b + d) / (2*a)
root2 = (-b - d) / (2*a)

print(f"Roots of the quadratic equation: {root1:.2f}, {root2:.2f}")