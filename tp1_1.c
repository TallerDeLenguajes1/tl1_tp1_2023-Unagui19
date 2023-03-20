#include <stdio.h>

int main()
{
    puts("Hola mundo");

    int vari,*punt;
    punt = &vari;

    printf("%d\n",punt); //1
    printf("%d\n",&vari);//2
    printf("%d\n",&punt);//3
    printf("%d\n",sizeof(vari));//4
    printf("%d\n",*punt);//5
  
    return 0;
}