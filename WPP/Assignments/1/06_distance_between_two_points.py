points = []
n = 10
for i in range(n):
    pt = input(f"Enter point {i+1} (i.e. x, y, z): ").split(',')
    pt = tuple(map(float, pt))
    points.append(pt)

ans = []

for i in range(n):
    min_dist = -1
    pt = points[i]
    for j in range(n):
        if i!=j:
            dist = ((pt[0]-points[j][0])**2 + (pt[1]-points[j][1])**2 + (pt[2]-points[j][2])**2)**0.5
            if min_dist>dist:
                max = dist
                nearst_pt = (points[j][0], points[j][1], points[j][2])
    ans.append([pt, nearst_pt])

print(ans)