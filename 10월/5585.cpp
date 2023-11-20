// ALstudy5585.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//타로는 자주 JOI잡화점에서 물건을 산다. 
//JOI잡화점에는 잔돈으로 500엔, 100엔, 50엔, 10엔, 5엔, 1엔이 충분히 있고, 
//언제나 거스름돈 개수가 가장 적게 잔돈을 준다. 타로가 JOI잡화점에서 물건을 
//사고 카운터에서 1000엔 지폐를 한장 냈을 때, 받을 잔돈에 포함된 잔돈의 개수를 
//구하는 프로그램을 작성하시오.
//380 -> 4
#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    input = 1000 - input;
    int num = 0;

    int coin[6] = { 500, 100, 50, 10, 5, 1 };

    for (int i = 0; i < 6; i++) {
        if (input >= coin[i]) {
            num = num + input / coin[i];
            input = input % coin[i];
        }
    }
    cout << num << endl;
}
