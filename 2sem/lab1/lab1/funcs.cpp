#include <iostream>

void DecreaseLink(int& num) {
    std::cout << num << " -> ";
    int i = 0;
    int mask = 1;
    if (num == 0) {
        num = ~num;
    }
    else {
        while (!(num & (mask << i))) {
            num |= (mask << i);
            i++;
        }
        num ^= (mask << i);
    }
    std::cout << num << std::endl;

}

int DecreaseReturn(int num) {
    std::cout << num << " -> ";
    int i = 0;
    int mask = 1;
    if (num == 0) {
        num = ~num;
    }
    else {
        while (!(num & (mask << i))) {
            num |= (mask << i);
            i++;
        }
        num ^= (mask << i);
    }
    std::cout << num << std::endl;
    return num;
}

void CompareLink(int num1, int num2, bool& value) {
    std::cout << num1 << ", " << num2 << " -> ";
    value = (num1 ^ num2) == 0;
    if (value) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }
}

bool CompareReturn(int num1, int num2) {
    std::cout << num1 << ", " << num2 << " -> ";
    if ((num1 ^ num2) == 0) {
        std::cout << "true" << std::endl;
        return true;
    }
    else {
        std::cout << "false" << std::endl;
        return false;
    }
}