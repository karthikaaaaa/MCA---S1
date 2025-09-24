# Program to calculate sum of first 100 even numbers

# Initialize sum
total = 0

# Loop through first 100 even numbers (2, 4, 6,...)
for i in range(2, 2*100+1, 2):  # start=2, stop=200, step=2
    total += i

print("Sum of first 100 even numbers is:", total)
