#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
float pi=3.1416;
float area;
float perimetro;
float r;
printf("Dame el valor del radio");
scanf("%f",&r);
if(r>0){area=pow(r,2)*pi;
        printf("El Area es %f\n",area);
        perimetro=  2*pi*r;
printf("El perimetro es %f\n",perimetro);
}
    else {
        printf("El radio es negativo, no se puede concluir la operacion\n");
    }
    printf("Fin del programa");
}
