#prgm to swap 2 numbers

# Input two numbers
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("Before swap: a =", a, "b =", b)

# Swap using a temp variable
temp = a
a = b
b = temp

print("After swap:  a =", a, "b =", b)
