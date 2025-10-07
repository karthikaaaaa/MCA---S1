#program to exchange first and last elements in a string
def exchange_first_last(s):
    if len(s) < 2:
        return s  # No change if string is too short
    # Exchange first and last characters
    return s[-1] + s[1:-1] + s[0]

# Take input from user
input_string = input("Enter a string: ")
result = exchange_first_last(input_string)
print("String after exchanging first and last characters:", result)