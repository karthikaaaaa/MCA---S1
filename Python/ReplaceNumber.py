numbers = [int(x) for x in input("Enter integers separated by space: ").split()]
processed = [x if x <= 100 else 'over' for x in numbers]
print("Processed list:", processed)
