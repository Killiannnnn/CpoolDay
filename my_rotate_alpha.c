#include <stdio.h>

void print_char(char c);

int my_strlen(char* str) {

    int a = 0;

    while(str[a] != '\0')
        a++;
    
    return a;

}

char* my_rotate_alpha(char* sentance) {

    int len = my_strlen(sentance);

    for (int i = 0; i < len; i++)
    {
        if(sentance[i] < 'a' || sentance[i] > 'z')
            return "STOP";
        if(sentance[i] + (sentance[i] - 'a') > 'z') {
            sentance[i] = 'a' + (sentance[i] + sentance[i] - 'a' - 'z');
        } else {
            sentance[i] = sentance[i] + (sentance[i] - 'a') ;
        }
    }
    
    return sentance;
}