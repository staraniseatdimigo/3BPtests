/*
 작성자 : 이은찬
*/
#include <stdio.h>
#include <iostream>
#include <cmath>

class Pos {
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

class Vec {
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

class Planet {
    public:
     Pos pos;
     Vec vel;
     Vec acc;
    double m;
    double r;

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

void calculateAcc(Planet p1, Planet p2) {
    double x, y, z;

    p1.vel.x - p2.vel.x;
}

int main()
{
    Planet p1(20, 20, 20, 1, 1, 1, 5, 2);
    Planet p2(-20, -20, -20, 1, -1, 1, 30, 3);
    Planet p3(10, 10, 10, -3, 5, 5, 70, 4);



    return 0;
}
