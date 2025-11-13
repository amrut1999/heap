G = sorted([[0,1,10], [0,2,6], [0,3,5], [1,3,15], [2,3,4]], key=lambda x: x[2])
p = [i for i in range(4)]

def find(i):
    return i if p[i] == i else find(p[i])

def union(a, b):
    p[find(a)] = find(b)

print("Edge : Weight")
e = 0
for u, v, w in G:
    if find(u) != find(v):
        union(u, v)
        print(f"{u}-{v} : {w}")
        e += 1
        if e == 3:
            break
