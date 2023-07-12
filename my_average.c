#include <stdio.h>

float my_average(int* grades, int count) {

    float moy = 0;

    for (int i = 0; i < count; i++)
        moy = moy + grades[i];
    moy = moy / count;
    
    return moy;

}