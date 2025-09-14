def word_break(s, word_list):
    words = set(word_list)
    n = len(s)
    dp = [False] * (n + 1)
    dp[0] = True
    maxw = max((len(w) for w in words), default=0)
    for i in range(1, n + 1):
        for L in range(1, min(maxw, i) + 1):
            if dp[i - L] and s[i - L:i] in words:
                dp[i] = True
                break
    return dp[n]

if __name__ == "__main__":
    # first line: string
    # second line: dictionary words space-separated
    s = input().strip()
    dict_words = input().split()
    print(word_break(s, dict_words))
