def max_subarray(nums):
    cur = best = nums[0]
    for x in nums[1:]:
        cur = max(x, cur + x)
        best = max(best, cur)
    return best

if __name__ == "__main__":
    nums = list(map(int, input().strip().split()))
    print(max_subarray(nums))
