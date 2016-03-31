//
// Created by USER on 2016-03-31.
//
#include <iostream>

using namespace std;

int main() {

    bool updatePos = true;

    double s = 500.0;
    double v12 = 0.0;
    double t = 0.0, dT = 0.01;

    v12 += -9.8 * (dT/2);

    while(s > 0)
    {
        if(updatePos)
        {
            cout<<"½Ã°£ : "<< t <<"ÃÊ, À§Ä¡ : "<< s <<"m, ¼Óµµ+(dT/2) : "<< v12 <<"m/s"<<endl;
            s += v12 * dT;
            updatePos = false;
            t += dT;
        }
        else
        {
            v12 += -9.8 * dT;
            updatePos = true;
        }

    }

    return 0;
}
