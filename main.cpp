// �ۼ���: 2016.03.31
// �ۼ���: ������
// version: 1.1
// ���� : �ܼ� �������� �ùķ�����

#include <iostream>

using namespace std;

int main() {
    double s = 500.0;
    double v = 0.0;
    double t = 0.0, dT = 0.01;

    while(s > 0)
    {
        cout<<"�ð� : "<< t <<"��, ��ġ : "<< s <<"m, �ӵ� : "<< v <<"m/s"<<endl;

        s += v * dT;
        v += -9.8 * dT; // �߷°��ӵ� : -9.8m/s
        t += dT;

    }

    return 0;
}