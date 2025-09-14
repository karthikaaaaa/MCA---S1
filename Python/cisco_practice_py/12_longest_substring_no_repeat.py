def length_of_longest_substring_no_repeat(s: str) -> int:
    last = {}
    start = best = 0
    for i, ch in enumerate(s):
        if ch in last and last[ch] >= start:
            start = last[ch] + 1
        last[ch] = i
        best = max(best, i - start + 1)
    return best

if __name__ == "__main__":
    s = input().strip()
    print(length_of_longest_substring_no_repeat(s))
