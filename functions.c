/************************
 *Dylan Faulk
 *cpsc2311 Lab8
 *username: faulk
 *Lab section: 001
 ************************/


#include "functions.h"

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;

    for(first = 0, last = cnt-1; first < last; first++, last--)
    {
        inplace_swap(&a[first], &a[last]);
    }
}

void printArray(int a[], int cnt)
{
    printf("{");

        for(int i = 0; i <cnt; i++)
        {
            printf("%d, ",a[i]);
        }
    printf("}\n\n");


}

int fun1(unsigned word)
{
    return (int) ((word << 24)  >> 24);    
}

int fun2(unsigned word)
{
    return (((int) word << 24) >> 24);
}
