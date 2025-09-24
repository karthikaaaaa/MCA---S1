#Program to demonstrate arithmetic operations

# Take two numbers from user
a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

print("Arithmetic Operations Demonstration")
print("-----------------------------------")
print(f"{a} + {b} = {a + b}")   # Addition
print(f"{a} - {b} = {a - b}")   # Subtraction
print(f"{a} * {b} = {a * b}")   # Multiplication
print(f"{a} / {b} = {a / b}")   # Division (float result)
print(f"{a} // {b} = {a // b}") # Floor Division (integer result)
print(f"{a} % {b} = {a % b}")   # Modulus (remainder)
print(f"{a} ** {b} = {a ** b}") # Exponentiation (a^b)
