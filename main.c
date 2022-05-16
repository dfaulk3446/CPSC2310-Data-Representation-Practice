/******************
*Dylan Faulk
*CPSC2310 Lab8
*UserName: faulk
*Lab Section: 001
*
**********************/
#include "functions.h"

int main()
{
    int count = 4;
    int a[4] = {1,2,3,4};

    printArray(a, count);
    reverse_array(a, count);
    printArray(a, count);

    count = 5;
    int b[5] = {1,2,3,4,5};
    printArray(b, count);
    reverse_array(b, count);
    printArray(b,count);

    unsigned w1 = 0x00000076;
    unsigned w2 = 0x87654321;
    unsigned w3 = 0x000000C9;
    unsigned w4 = 0xEDCBA987;

   printf("0x00000076 after fun1:%x , fun2: %x\n",fun1(w1),fun2(w1));
   printf("0x87654321 after fun1:%x , fun2: %x\n",fun1(w2),fun2(w2));
   printf("0x000000C9 after fun1:%x , fun2: %x\n",fun1(w3),fun2(w3));
   printf("0xEDCBA987 after fun1:%x , fun2: %x\n",fun1(w4),fun2(w4));
}
