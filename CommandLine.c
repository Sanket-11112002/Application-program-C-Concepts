#include<stdio.h>
#include<stdlib.h>

 // int main(int argc, char *argv[], int *envp)     envp environment pointer

int main(int argc, char *argv[])
{
    printf("Demonstration of command line\n");
    
    int No1 = atoi(argv[1]);
    int No2 = atoi(argv[2]);

    int Ans = No1 + No2;

    printf("Number of command line arguments: %d\n",argc);
    printf("Addition is : %d\n",Ans);

    return 0;
}

// gcc CommandLine.c -o Myexe