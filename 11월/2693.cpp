//배열 A가 주어졌을 때, N번째 큰 값을 출력하는 프로그램을 작성하시오.

//배열 A의 크기는 항상 10이고, 자연수만 가지고 있다. N은 항상 3이다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N=3;

    int T; //테스트 케이스 개수

    vector<vector<int>> input;
    vector<int> A;
    int temp;

    cin >> T;
    for(int i=0;i<T;i++){
        for(int j=0;j<10;j++){
            cin >> temp;
            A.push_back(temp);
        }
        input.push_back(A);
        A.clear();
    }

    for(int i=0;i<T;i++){
        sort(input[i].begin(), input[i].end());
    }
    

    for(int i=0;i<T;i++){
        cout << input[i][input[i].size()-N]<<endl;
    }

    
}
