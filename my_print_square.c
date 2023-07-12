void print_char(char c);

void my_print_square(int size, char c) {

    int i;

    if(size > 1)
        for(i = 0; i < size; i++) {
            for(int k = 0; k < size; k++)
                print_char(c);
            if(i < c - 1)
                print_char('\n');
        }

}