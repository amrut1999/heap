orders = [
    {"Order id": 101, "time": 5},
    {"Order id": 102, "time": 2},
    {"Order id": 103, "time": 8},
    {"Order id": 104, "time": 3}
]
print("Orders sorted by delivery time:")
def merge_sort(a):
    if len(a) <= 1:
        return a
    mid = len(a) // 2
    left = merge_sort(a[:mid])
    right = merge_sort(a[mid:])
    res = []
    while left and right:
        if left[0]["time"] < right[0]["time"]:
            res.append(left.pop(0))
        else:
            res.append(right.pop(0))
    return res + left + right

orders = merge_sort(orders)

for o in orders:
    print(o)

