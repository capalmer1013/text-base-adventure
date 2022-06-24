// C program for the above approach
#include <stdio.h>
typedef int (*ptr)(int*);
typedef ptr (*pm)();
 
int fun1(int* y)
{
    printf("geeks!!\n");
    return *y + 10;
}
 
// Function that return type ptr
ptr fun()
{
    printf("Hello ");
 
    // or return fun1;
    /* or
     int(*pt)(int*)=fun1;
     return pt
  */
    return &fun1;
}
 
// Driver Code
int main1()
{
    int a = 10;
 
    pm u = fun;
 
    printf("%d", (*u())(&a));
 
    return 0;
}