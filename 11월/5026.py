#동혁이는 박사 학위 논문을 쓰던 중 두 수를 더하는 방법을 까먹었다. 
#동혁이는 덧셈 문제와 컴퓨터 과학 문제로 이루어진 문제지를 풀어야 
#군면제를 받을 수 있다.

#문제지의 덧셈 문제는 "a+b"와 같은 형식이고, 
#컴퓨터 과학 문제는 "P=NP" 하나이다. 
#동혁이의 문제지가 주어졌을 때, 답을 모두 구하는 프로그램을 작성하시오. 

N = int(input())

#N번 반복
for i in range(N):
    temp = str(input())
    if temp == "P=NP": 
        print("skipped")
    else:
        a, b = map(int, temp.split('+'))
        print(a+b)
