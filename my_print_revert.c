void print_char(char c);

int my_strlen(char* str) {

    int a = 0;

    while(str[a] != '\0')
        a++;
    
    return a;

}

void my_print_revert(char *toRevert) {

    int len = my_strlen(toRevert);

    for (int len = my_strlen(toRevert); len >= 0; len--)
        print_char(toRevert[len]);

}