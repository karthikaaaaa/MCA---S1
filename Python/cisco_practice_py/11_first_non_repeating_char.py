from collections import Counter

def first_non_repeating_char(s: str):
    cnt = Counter(s)
    for ch in s:
        if cnt[ch] == 1:
            return ch
    return ""

if __name__ == "__main__":
    s = input()
    print(first_non_repeating_char(s))
