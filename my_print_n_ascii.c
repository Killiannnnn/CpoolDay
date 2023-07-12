void print_char(char c);

void my_print_n_ascii(int howMany) {

    int i = 33;

    if(howMany <= 94)
        for(int a = 0; a < howMany; a++, i++)
            print_char(i);
    
}