n, l = map(int, input().split())
d = list(map(int, input().split()))
d.sort()

diff =0

for i in range (1,n):
    
    diff = max(diff, d[i]-d[i-1])
    
ans = max(d[0] , l-d[n-1] , diff/2.0)
print(f"{ans: .10f}")
    