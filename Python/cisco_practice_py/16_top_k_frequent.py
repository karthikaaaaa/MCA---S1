from collections import Counter
import heapq

def top_k_frequent(nums, k):
    cnt = Counter(nums)
    heap = []
    for num, freq in cnt.items():
        if len(heap) < k:
            heapq.heappush(heap, (freq, num))
        else:
            if freq > heap[0][0]:
                heapq.heapreplace(heap, (freq, num))
    # return by descending frequency
    return [num for _, num in sorted(heap, key=lambda x: -x[0])]

if __name__ == "__main__":
    nums = list(map(int, input().strip().split()))
    k = int(input().strip())
    print(*top_k_frequent(nums, k))
