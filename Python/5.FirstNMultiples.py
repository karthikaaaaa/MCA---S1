#Program to find the first n multiples of given number

# Take number from user
a=int(input("Enter the number: "))

# Take N from user
n=int(input("Enter how many multiples you want: "))

# Loop through 1 to N and print multiples
print(f"First{n} multiples of {a}: ")
for i in range (1,n-1):
 print(n*i)