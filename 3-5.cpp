#include <iostream>
using namespace std;
int peachNum(int day) {
    if (day == 10) {
        return 1;  
    }
    return (peachNum(day + 1) + 1) * 2;  
}

int main() {
    cout << "��һ����ӹ�ժ��������Ϊ: " << peachNum(1) << endl;
    return 0;
}