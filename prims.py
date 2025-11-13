INF = 9999999
G = [[0,2,0,6,0],
     [2,0,3,8,5],
     [0,3,0,0,7],
     [6,8,0,0,9],
     [0,5,7,9,0]]
n, sel = len(G), [0]*5
sel[0] = 1
print("Edge : Weight")
for _ in range(n-1):
    m, a, b = INF, 0, 0
    for i in range(n):
        if sel[i]:
            for j in range(n):
                if not sel[j] and G[i][j]:
                    if m > G[i][j]: m, a, b = G[i][j], i, j
    print(f"{a}-{b} : {G[a][b]}")
    sel[b] = 1


