def count_vowels_consonants(s: str):
    vowels = set("aeiouAEIOU")
    v = c = 0
    for ch in s:
        if ch.isalpha():
            if ch in vowels:
                v += 1
            else:
                c += 1
    return v, c

if __name__ == "__main__":
    s = input()
    v, c = count_vowels_consonants(s)
    print(v, c)
