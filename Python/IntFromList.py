numbers = [int(x) for x in input("Enter integers separated by comma: ").split(",")]
positive_numbers = [x for x in numbers if x > 0]
print("Positive numbers:", positive_numbers)
