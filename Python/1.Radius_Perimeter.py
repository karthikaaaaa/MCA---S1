#prgm to find the area and perimeter from an enteres radius

import math

# Take one radius from the user
r = float(input("Enter the radius of the circle: "))

# Calculate perimeter (circumference) and area
perimeter = 2 * math.pi * r
area = math.pi * r * r        # or math.pi * r**2

# Display results
print(f"Radius: {r}")
print(f"Perimeter (Circumference): {perimeter:.2f}")
print(f"Area: {area:.2f}")
