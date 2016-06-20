/*
 작성자 : 이은찬
*/
#include <stdio.h>
#include <iostream>
#include <cmath>

#define G 1

class Pos { // 위치 클래
     double x;
     double y;
     double z;

public:
    double getX(void) {
        return x;
    }

    void setX(double x) {
        this->x = x;
    }

    double getY(void) {
        return y;
    }

    void setY(double y) {
        this->y = y;
    }

    double getZ(void) {
        return z;
    }

    void setZ(double z) {
        this->z = z;
    }

};

class Vec { // 속도벡터 클래스
    public:
     double x;
     double y;
     double z;

    double getX(void) {
        return x;
    }

    void setX(double x) {
        this->x = x;
    }

    double getY(void) {
        return y;
    }

    void setY(double y) {
        this->y = y;
    }

    double getZ(void) {
        return z;
    }

    void setZ(double z) {
        this->z = z;
    }

};

class Planet { // 행성 클래스
    public:
     Pos pos;스 // 위치
     Vec vel;       // 속도
     Vec acc;       // 가속도
    double m;   // 질량
    double r;      // 반지름

public:
    Planet(void) {
        pos.setX(0);
        pos.setY(0);
        pos.setZ(0);
        vel.setX(0);
        vel.setY(0);
        vel.setZ(0);
        this->m = 0;
    }

    Planet(double x, double y, double z, double vx, double vy, double vz, double m, double r) {
        pos.setX(x);
        pos.setY(y);
        pos.setZ(z);
        vel.setX(vx);
        vel.setY(vy);
        vel.setZ(vz);
        this->m = m;
        this->r = r;
    }

};

void calculateAcc(Planet p1, Planet p2) { // 가속도 계산 함수
    double x, y, z;
    double r_squared;

    x = p2.pos.x - p1.pos.x;
    y = p2.pos.y - p1.pos.y;
    z = p2.pos.z - p1.pos.z;

    r_squared = x * x + y * y + z * z;

    gp1m = G * p1.m;
    gp2m = G * p2.m;

    r_cubed = r_squared * sqrt(r_squared);

    p1.acc.x = gp2m / r_cubed * x;
    p1.acc.y = gp2m / r_cubed * y;
    p1.acc.z = gp2m / r_cubed * z;

    p2.acc.x = gp1m / r_cubed * -x;
    p2.acc.y = gp1m / r_cubed * -y;
    p2.acc.z = gp1m / r_cubed * -z;
}

void render(double dT, Planet p) // dT만큼의 시간을 지속시킴
{
    p.vel.x = p.acc.x * dT;
    p.vel.y = p.acc.y * dT;
    p.vel.z = p.acc.z * dT;

    p.pos.x = p.vel.x * dT;
    p.pos.y = p.vel.y * dT;
    p.pos.z = p.vel.z * dT;
}

int main()
{
    double dT;

    Planet p1(20, 20, 20, 1, 1, 1, 5, 2);
    Planet p2(-20, -20, -20, 1, -1, 1, 30, 3);
    Planet p3(10, 10, 10, -3, 5, 5, 70, 4);

    calculateAcc(p1, p2);
    calculateAcc(p1, p3);
    calculateAcc(p2, p3);

    render(dT, p1);
    render(dT, p2);
    render(dT, p3);

    return 0;
}
