#첫 번째 줄에 과일의 개수 N (1 ≤ N ≤ 1,000) 과 
#스네이크버드의 초기 길이 정수 L (1 ≤ L ≤ 10,000) 이 주어집니다.

#두 번째 줄에는 정수 h1, h2, ..., hN (1 ≤ hi ≤ 10,000) 이 주어집니다.

#과일의 높이는 hi입니다. 

#스네이크버드는 자신의 길이보다 작거나 같은 높이에 있는 과일들을 먹을 수 있습니다.

#스네이크버드의 처음 길이가 L일때 과일들을 먹어 늘릴 수 있는 최대 길이를 구하세요.


import sys
input = sys.stdin.readline

N, P = map(int, input().split())

arr = list(map(int, input().split()))

arr.sort()

for i in arr:
    if i<=P:
        P=P+1
    else:
        break
print(P)
