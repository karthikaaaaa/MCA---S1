# Program to find number of digits in a number

# Take input
num = int(input("Enter a number: "))

count = 0
n = num  # store original number

# Count digits using loop
while n != 0:
    n = n // 10   # remove last digit
    count += 1

print(f"Number of digits in {num} is: {count}")
