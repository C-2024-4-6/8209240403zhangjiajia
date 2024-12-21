// student.cpp
#include <iostream>
#include "student.h"  


void Student::display() {
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    std::strcpy(name, nm);  
    sex = s;
}