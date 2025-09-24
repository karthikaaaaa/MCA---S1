# Program to calculate factorial of a number

# Take input
num = int(input("Enter a number: "))

factorial = 1  # Start with 1, because 0! = 1

# Multiply factorial by each number from 1 to num
for i in range(1, num+1):
    factorial *= i

print(f"Factorial of {num} is: {factorial}")
