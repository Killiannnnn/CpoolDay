#include <stdio.h>

void print_char(char c);

int my_strlen(char* str) {

    int a = 0;

    while(str[a] != '\0')
        a++;
    
    return a;

}

char* my_char_replace(char* origin, char toFind, char toReplace) {

    int len = my_strlen(origin);

    for(int i = 0; i < len; i++)
        if(origin[i] == toFind)
            origin[i] = toReplace;

    return origin;

}