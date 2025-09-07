tests = int(input())

series = []
for i in range(3000):
    if i%3 != 0 and i%10 !=3:
        series.append(i)


for _ in range(tests):
    term = int(input())
    print(series[term-1])
