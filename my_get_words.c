void print_char(char c);

int my_strlen(char* str) {

    int a = 0;

    while(str[a] != '\0')
        a++;
    
    return a;

}

void my_get_words(char* sentance) {

    int len = my_strlen(sentance);

    for(int i = 0; i < len; i++) {
        if(sentance[i] != ' ' && i < len - 1 && sentance[i + 1] == ' ') {
            print_char(sentance[i]);
            print_char('\n');
        }
        else if (sentance[i] != ' ')
            print_char(sentance[i]);     
    }

}