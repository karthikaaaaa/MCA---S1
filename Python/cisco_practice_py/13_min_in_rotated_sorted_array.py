def find_min_rotated_sorted(nums):
    lo, hi = 0, len(nums) - 1
    while lo < hi:
        mid = (lo + hi) // 2
        if nums[mid] > nums[hi]:
            lo = mid + 1
        else:
            hi = mid
    return nums[lo]

if __name__ == "__main__":
    nums = list(map(int, input().strip().split()))
    print(find_min_rotated_sorted(nums))
