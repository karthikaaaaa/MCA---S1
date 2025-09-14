def two_sum(nums, target):
    seen = {}
    for i, x in enumerate(nums):
        if target - x in seen:
            return seen[target - x], i
        seen[x] = i
    return -1, -1

if __name__ == "__main__":
    # first line: array
    # second line: target
    nums = list(map(int, input().strip().split()))
    target = int(input().strip())
    i, j = two_sum(nums, target)
    print(i, j)
