line = input("Enter a line of text: ")

#Dictionary comprehension of form - {key: value for variable in iterable}
word_counts = {w: line.split().count(w) for w in set(line.split())}  #set removes duplicates

print("Word occurrences:", word_counts)
