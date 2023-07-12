#include <stdio.h>

float my_average(int* grades, int count) {

    int moy = 0;

    for (int i = 0; i < count; i++)
        moy = moy + grades[i];
    moy = moy / count;
    
    return moy;

}

int main() {

    int list[5] = {10, 17, 6, 14, 20};
    printf("%f\n", my_average(list, 5));
    return 0;
}