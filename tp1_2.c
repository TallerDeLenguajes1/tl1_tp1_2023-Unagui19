#include <stdio.h>
#include <math.h>

int cuadrado(int a);
void cuadradoProced(int a);
void direccionMemo(int a);
void Invertir(int a,int b);
void orden(int a,int b);


int main()
{
    int pares;
    int a=0,b=0,cuadradoB,cuadradoA;
    puts("Ingrese la cantidad de pares de números que desea ingresar: ");
    scanf("%d",&pares);
    fflush(stdin);
    for (int i = 0; i < pares; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&a);
        printf("\nIngrese otro numero: ");
        scanf("%d",&b);
        cuadradoA=printf("El cuadrado de a es: %d\n",cuadrado(a));
        cuadradoB=printf("El cuadrado de b es: %d\n\n",cuadrado(b));
        cuadradoProced(a);
        direccionMemo(a);
        Invertir(a,b);
        orden(a,b);
    }

    return 0;
}

int cuadrado(int a)
{
    int aCuad;
    aCuad=a*a;
    return aCuad;
}

void cuadradoProced(int a)
{
    int aCuad;
    aCuad=a*a;
    printf("(por procedimiento) El cuadrado de %d es: %d\n",a,aCuad);
}

void direccionMemo(int a)
{
    int *punt=&a;
    printf("La dirección de memoria de la variable a es: %d, y su contenido es: %d\n", punt, *punt);
}

void Invertir(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("variables intercambiadas: a=%d, b=%d\n",a,c);
}

void orden(int a, int b)
{
    if (a>b)
    {
        printf("a(mayor)=%d  b=%d\n", a,b);
    }
    else
    {
        printf("b(mayor)=%d  a=%d\n", b,a);
    }    
}

