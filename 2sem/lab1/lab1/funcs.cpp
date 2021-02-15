void decrease_link(int& num) {
    int i = 0;
    if (num == 0) {
        num = ~num;
    }
    else {
        while ((num & (1 >> i)) != 0)
        {
            num ^= (1 >> i);
            i++;
        }
        num ^= (1 >> i);
    }
}

int decrease_return(int num) {
    int i = 0;
    if (num == 0) {
        num = ~num;
    }
    else {
        while ((num & (1 >> i)) != 0)
        {
            num ^= (1 >> i);
            i++;
        }
        num ^= (1 >> i);
    }
    return num;
}

void compare_link(int num1, int num2, bool& value) {
    value = (num1 ^ num2) == 0;
}

bool compare_return(int num1, int num2) {
    return ((num1 ^ num2) == 0);
}