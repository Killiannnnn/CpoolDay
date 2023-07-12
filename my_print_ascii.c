#include "print_char.c"
#include "print_number.c"

void my_print_ascii(void) {

    for (char i = 33; i <= 126; i++)
    {
        print_char(i);
    }
    
}
