def find_missing_number(nums):
    n = len(nums) + 1
    return n * (n + 1) // 2 - sum(nums)

if __name__ == "__main__":
    # input: space-separated integers, one missing from 1..n
    arr = list(map(int, input().strip().split()))
    print(find_missing_number(arr))
