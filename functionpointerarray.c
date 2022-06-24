#include <stdio.h>
#include "New_Fun.h"

int main()
{
    int (*F_P)(int y);
    void (*F_A[5])() = { F1, F2, F3, F4, F5 };
    int xyz, i;

    printf("Hello Function Pointer!\n");
    F_P = fun;
    xyz = F_P(5);
    printf("The Value is %d\n", xyz);
    //(*F_A[5]) = { F1, F2, F3, F4, F5 };
    for (i = 0; i < 5; i++)
    {
        F_A[i]();
    }
    printf("\n\n");
    F_A[f1]();
    F_A[f2]();
    F_A[f3]();
    F_A[f4]();
    return 0;
}