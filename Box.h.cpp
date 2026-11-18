#pragma once
#include <iostream>
using namespace std;

class Box
{

public:
    Box();

    Box(const double newlength, const double newBreadth, const double newHeight);

    Box operator+(const Box &b);

    ~Box();

    double GetVolume();

    void SetLength(double len);

    void SetBreadth(double bre);

    void SetHeight(double hei);

private:
    double length;
    double breadth;
    double height;
};