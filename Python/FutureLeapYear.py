#program to display future leap years from current year to a final year entered by user

# Import the datetime module to work with dates and times
import datetime

# Get the current year from the system's date
current_year = datetime.datetime.now().year

# Ask the user to enter the final year up to which we want to find leap years
final_year = int(input("Enter the final year: "))

# Use a list comprehension to find all leap years from current_year to final_year
leap_years = [ year for year in range(current_year, final_year + 1)   # year is the value that will be stored in the list
               if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)  
]

print("Leap years:", leap_years)
