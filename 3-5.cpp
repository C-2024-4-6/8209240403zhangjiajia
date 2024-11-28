#include <iostream>
using namespace std;
int peachNum(int day) {
    if (day == 10) {
        return 1;  
    }
    return (peachNum(day + 1) + 1) * 2;  
}

int main() {
    cout << "第一天猴子共摘的桃子数为: " << peachNum(1) << endl;
    return 0;
}