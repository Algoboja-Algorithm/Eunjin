import sys
input = sys.stdin.readline

N = int(input())
P = list(map(int, input().split()))
P.sort()

waiting=[]
#input: 1 2 3 3 4
#->waiting: [1 3 6 9 13]
#-> sum: 32

waiting.append(0)
waiting[0]=P[0]

for i in range(1, N):
    waiting.append(0)
    waiting[i]=waiting[i-1]+P[i]

sum=sum(waiting)
print(sum)