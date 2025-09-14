def is_palindrome_str(s: str) -> bool:
    return s == s[::-1]

if __name__ == "__main__":
    s = input().strip()
    print(is_palindrome_str(s))
