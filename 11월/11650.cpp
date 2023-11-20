//2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; //점 개수

    vector<pair<int, int>> input;
    int x, y;

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> x >> y;
        input.push_back({ x, y });
        //input.push_back(make_pair(x,y));
    }

    sort(input.begin(), input.end());
        

    for(int i=0;i<N;i++){
        cout << input[i].first<<" "<<input[i].second<<"\n";
    }
    //"\n"대신 endl을 사용하면 시간초과가 된다.
}
