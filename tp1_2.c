#include <stdio.h>
//funciones
int cuadrado(int n);
void cuad(int n);
void Invertir(int a,int b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(int a, int b);
int main()
{
    int num, a, b;
    printf("Ingrrese un numero: ");
    scanf("%d", &num);
    printf("El cuadrado de %d es: %d", num, cuadrado(num));
    cuad(num);
    printf("\n\nDireccion de %d: %p", num, &num);
    printf("\nLa variable ingresada es: %d", num);
    printf("\n-------------------------\n");
    printf("\nIngrese el valor de a= ");
    scanf("%d", &a);
    printf("\nIngrese el valor de b= ");
    scanf("%d", &b);
    printf("\nSe invertieron los valores\n");
    Invertir(a,b);
    orden(a,b);

}

int cuadrado(int n){
    return(n*n);
}

void cuad(int n){
    printf("\nEl cuadrado de %d usando una funcion void es: %d", n, n*n);
}

void Invertir(int a,int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("a= %d, b=%d",a,b);
}

void orden(int a, int b){
    int aux;
    if (a>b)
    {
        printf("\nEL valor mas grende b= %d, el menor a=%d",a,b);
    }else{
                printf("\nEL valor mas grende b= %d, el menor a=%d",b,a);
    }
    
}