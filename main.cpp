// 작성일: 2016.03.31
// 작성자: 이은찬
// version: 1.1
// 설명 : 단순 자유낙하 시뮬레이터

#include <iostream>

using namespace std;

int main() {
    double s = 500.0;
    double v = 0.0;
    double t = 0.0, dT = 0.01;

    while(s > 0)
    {
        cout<<"시간 : "<< t <<"초, 위치 : "<< s <<"m, 속도 : "<< v <<"m/s"<<endl;

        s += v * dT;
        v += -9.8 * dT; // 중력가속도 : -9.8m/s
        t += dT;

    }

    return 0;
}