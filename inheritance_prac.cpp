#include <iostream>
#include <math.h>
using namespace std;
class Shape
{

public:
    virtual void print() = 0;
};

class Rectangle : public Shape
{
protected:
    int length, width;
    int a;

public:
    Rectangle(){};
    Rectangle(int x, int y)
    {
        length = x;
        width = y;
    }
    int area()
    {

        a = length * width;

        return a;
    }
    void print()
    {

        cout << "The area of Rectangle is " << a << endl;
    }
};

class Cube : public Rectangle
{
protected:
    int height;
    int v;

public:
    Cube(int x)
    {
        height = x;
    }
    int volume()
    {
        v = pow(height, 3);
        return v;
    }
    void print()
    {
        cout << "The volume of Cube is " << v << endl;
    }
};

int main()
{
    Rectangle r1(2, 3);
    r1.area();
    Cube c1(3);
    c1.volume();

    Shape *o[2];
    o[0] = &r1;
    o[0]->print();

    o[1] = &c1;
    o[1]->print();

    return 0;
}