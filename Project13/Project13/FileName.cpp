#include <iostream>
using namespace std;

int main() {
    int num = 2;  
    int day = 1;  
    int totalNum = num;  
    double totalCost = 0.8 * num;  

    while (totalNum <= 100) {
        num *= 2;  
        totalNum += num;
        if (totalNum > 100) {
            totalNum -= num;  
            num /= 2;  
        }
        totalCost += 0.8 * num;
        day++;
    }

    double averageCost = totalCost / day;
    cout << "ÿ��ƽ������: " << averageCost << " Ԫ" << endl;

    return 0;
}
