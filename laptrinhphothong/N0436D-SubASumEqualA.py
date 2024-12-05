n, k = map(int, input(). split())
a = list(map(int, input(). split())) # nhập mảng
if len(a) != n : print(-1)
pairs, start, end = 0, 0, 1
while start < n:
    t = sum(a[start : end])
    if t >= k or end >= n:
        if t == k :
            pairs += 1
        start += 1
        end = start
    end += 1
print(pairs)