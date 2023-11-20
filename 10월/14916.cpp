/*

춘향이는 편의점 카운터에서 일한다.

손님이 2원짜리와 5원짜리로만 거스름돈을 달라고 한다. 2원짜리 동전과 5원짜리 동전은 무한정 많이 가지고 있다. 

동전의 개수가 최소가 되도록 거슬러 주어야 한다. 거스름돈이 n인 경우, 최소 동전의 개수가 몇 개인지 알려주는 프로그램을 작성하시오.

예를 들어, 거스름돈이 15원이면 5원짜리 3개를, 거스름돈이 14원이면 5원짜리 2개와 2원짜리 2개로 총 4개를, 
거스름돈이 13원이면 5원짜리 1개와 2원짜리 4개로 총 5개를 주어야 동전의 개수가 최소가 된다.
*/
//13->5. 5원 1개와 2원 4개를 줘야힘

//5로 나눴을때 나머지가 0이면 (5의 배수이면) 5로 나눈게 답
//5로 나눴을때 나머지가 2의 배수면 5로 나눈 나머지를 2로 나눔
//5로 나눴을 때 나머지가 2의 배수가 아니면 ?
//5를 하나씩 빼면서 나머지를 2로 나눠서 나머지 0 될때까지 반복

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int calc(int input){
    int num=0;

    if(input%5==0){
        return input/5;
    }else if((input%5)%2==0){
        num+=input/5;
        input = input % 5;
        num+=input/2;
        return num;
    }else{
        if(input==1||input==3){
            return -1;
        }

        num++;
        input=input-2;

        while(input>0){
            if(input%5==0){
                num=num+input/5;
                return num;
            }   
            num++;
            input=input-2;
        }

        return -1;

    }
}

int main()
{
    int input;
    cin >> input;

    int result = calc(input);
    
    cout << result << endl;
}
