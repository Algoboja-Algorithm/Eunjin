#N개의 수가 주어졌을 때, 이를 내림차순으로 정렬하는 프로그램을 작성하시오.

#첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 
#둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
#이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

import sys
input = sys.stdin.readline

N = int(input())
arr = []

for _ in range(N):
    arr.append(int(input()))

arr.sort(reverse=True)

for i in arr:
    print(i)