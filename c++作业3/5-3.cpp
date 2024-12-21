#include <iostream>
using namespace std;

class Cuboid {
public:
   
    void input() {
        cout << "请输入长方柱的长、宽、高：";
        cin >> length >> width >> height;
    }

    int calculateVolume() {
        return length * width * height;
    }

 
    void outputVolume() {
        cout << "长方柱的体积为：" << calculateVolume() << endl;
    }

private:
    int length;
    int width;
    int height;
};

int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        cout << "第 " << (i + 1) << " 个长方柱：" << endl;
        cuboids[i].input();
        cuboids[i].outputVolume();
    }

    return 0;
}