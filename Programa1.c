#include<stdio.h>
int main(){
float a;
float b;
printf("Haremos un programa en cual el valor introducido, dira cual es mayor\n");
printf("Dame el valor de a: ");
scanf("%f",&a);
printf("Dame el valor de b:");
scanf("%f",&b);
if(a>b)
    {printf("La variable mayor es a: %.1f\n",a);
}
if(b>a){
    printf("La variable mayor es b: %.1f\n",b);

}
printf("Fin del programa");
}
