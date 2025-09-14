def merge_two_sorted_arrays(a, b):
    i = j = 0
    out = []
    while i < len(a) and j < len(b):
        if a[i] <= b[j]:
            out.append(a[i]); i += 1
        else:
            out.append(b[j]); j += 1
    out.extend(a[i:])
    out.extend(b[j:])
    return out

if __name__ == "__main__":
    a = list(map(int, input().strip().split()))
    b = list(map(int, input().strip().split()))
    print(*merge_two_sorted_arrays(a, b))
