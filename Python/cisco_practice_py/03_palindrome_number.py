def is_palindrome_num(x: int) -> bool:
    s = str(x)
    return s == s[::-1]

if __name__ == "__main__":
    try:
        x = int(input().strip())
    except ValueError:
        print("False")
    else:
        print(is_palindrome_num(x))
