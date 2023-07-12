#include <stdio.h>

int my_absolute(int number) {

    if(number < 0)
        return number * (-1);
    return number;

}