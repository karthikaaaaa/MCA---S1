def are_anagrams(a: str, b: str) -> bool:
    if len(a) != len(b):
        return False
    freq = {}
    for ch in a:
        freq[ch] = freq.get(ch, 0) + 1
    for ch in b:
        if ch not in freq:
            return False
        freq[ch] -= 1
        if freq[ch] == 0:
            del freq[ch]
    return not freq

if __name__ == "__main__":
    a = input().strip()
    b = input().strip()
    print(are_anagrams(a, b))
