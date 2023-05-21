#include<stdio.h>

int main()
{
    int No1 = 67;
    int No2 = 89;

    printf("Bitwise & : %d\n",(No1&No2));   // 65
    printf("Bitwise | : %d\n",(No1|No2));   // 91
    printf("Bitwise ^ : %d\n",(No1^No2));   // 26
    
    return 0;
}