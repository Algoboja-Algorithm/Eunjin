#

import sys
input = sys.stdin.readline
A=300
B=60
C=10
a=0
b=0
c=0

T=int(input()) #1<=T<=10000

if T>=A:
    a=T//A
if T%A>=B:
    b=(T%A)//B
if T%B>=C:
    c=(T%B)//C

if (T%B)%C!=0:
    print(-1)
else:
    print(a, end=' ')
    print(b, end=' ')
    print(c)
