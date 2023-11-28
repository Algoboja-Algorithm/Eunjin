import sys
input = sys.stdin.readline

S = str(input())
count = 0
#N번 반복

for i in range(1, len(S)-1):
    if S[i]!=S[i-1]:
        count=count+1

if count<=1:
    print(count)
else:
    if count%2==0:
        print(count//2)
    else:
        print(count//2+1)