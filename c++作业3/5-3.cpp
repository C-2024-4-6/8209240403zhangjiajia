#include <iostream>
using namespace std;

class Cuboid {
public:
   
    void input() {
        cout << "�����볤�����ĳ������ߣ�";
        cin >> length >> width >> height;
    }

    int calculateVolume() {
        return length * width * height;
    }

 
    void outputVolume() {
        cout << "�����������Ϊ��" << calculateVolume() << endl;
    }

private:
    int length;
    int width;
    int height;
};

int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        cout << "�� " << (i + 1) << " ����������" << endl;
        cuboids[i].input();
        cuboids[i].outputVolume();
    }

    return 0;
}