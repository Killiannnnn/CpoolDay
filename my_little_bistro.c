#include <stdio.h>

int my_little_bistro(int value1, char op, int value2) {

    if(op == '+')
        return value1 + value2;
    if(op == '-')
        return value1 - value2;
    if(op == '/')
        if(value2 == 0)
            return 0;
        return value1 / value2;
    if(op == '*')
        return value1 * value2;
    if(op == '%')
        return value1 % value2;
    return 0;

}