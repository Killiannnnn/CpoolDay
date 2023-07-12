#include <stdio.h>

void print_char(char c);

int my_strlen(const char* str) {

    int a = 0;

    while(str[a] != '\0')
        a++;
    
    return a;

}

int my_get_char_repeat(char to_find, const char* to_search) {

    int nb = 0;

    if (to_search != NULL)
        for(int i = 0; i < my_strlen(to_search); i++)
            if(to_search[i] == to_find)
                nb++;

    return nb;

}