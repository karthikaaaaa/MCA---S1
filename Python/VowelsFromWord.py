# word = input("Enter a word: ")
# vowels = [ch for ch in word if ch.lower() in 'aeiou']
# print("Vowels in the word:", vowels)
word = input("Enter a word: ")
vowels = []
for ch in word:
    if ch.lower() in 'aeiou' and ch.lower() not in vowels:
        vowels.append(ch.lower())  

print("Unique vowels:", vowels)
