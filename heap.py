def heapify(a, n, i, mx):
    l, r, m = 2 * i + 1, 2 * i + 2, i
    if l < n and (a[l] > a[m] if mx else a[l] < a[m]):
        m = l
    if r < n and (a[r] > a[m] if mx else a[r] < a[m]):
        m = r
    if m != i:
        a[i], a[m] = a[m], a[i]
        heapify(a, n, m, mx)

def heapSort(a, mx=True):
    n = len(a)
    # Build heap
    for i in range(n // 2 - 1, -1, -1):
        heapify(a, n, i, mx)
    # Extract elements
    for i in range(n - 1, 0, -1):
        a[0], a[i] = a[i], a[0]
        heapify(a, i, 0, mx)

# Example usage
a = [12, 11, 13, 5, 6, 7]

heapSort(a, mx=True)   # Max heap → Ascending order
print("Ascending:", a)

heapSort(a, mx=False)  # Min heap → Descending order
print("Descending:", a)

