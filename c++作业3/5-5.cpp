#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
   
    Point(int newX = 60, int newY = 80) {
        x = newX;
        y = newY;
    }

    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Point p;
    p.display();

    int i, j;
    cout << "�����������޸������ƫ����i��j��";
    cin >> i >> j;

    p.setPoint(i, j);
    p.display();

    return 0;
}