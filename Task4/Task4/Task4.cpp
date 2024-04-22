#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
    int z;
public:
    Point(int x1 = 0, int y1 = 0, int z1 = 0)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }


    void setX(int newX) {
        x = newX;
    }
    void setY(int newY) {
        y = newY;
    }
    void setZ(int newZ) {
        z = newZ;
    }
};

int main()
{
    Point pointThree;
    int num1, num2, num3;
    cout << "Enter coordinates of point 1: ";
    cin >> num1 >> num2 >> num3;
    Point pointOne;
    pointOne.setX(num1);
    pointOne.setY(num2);
    pointOne.setZ(num3);
    cout << "First point: ";
    cout << pointOne.getX() << " " << pointOne.getY() << " " << pointOne.getZ() << " ";
    cout << endl;

    cout << "Default point: ";
    cout << pointThree.getX() << " " << pointThree.getY() << " " << pointThree.getZ() << " ";
    cout << endl;

    Point pointTwo;
    pointTwo.setX(pointThree.getX() + 1);
    pointTwo.setY(pointThree.getY() + 2);
    pointTwo.setZ(pointThree.getZ() + 3);
    cout << "Modified point: ";
    cout << pointTwo.getX() << " " << pointTwo.getY() << " " << pointTwo.getZ() << " ";

}
