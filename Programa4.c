#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c,x1,x2,potencia,producto,raiz,cociente;
printf("Resolveremos una ecuacion de segundo grado\n");
printf("Ingresa el valor de a\n");
scanf("%f",&a);
printf("Ingresa el valor de b\n");
scanf("%f",&b);
printf("Ingresa el valor de c\n");
scanf("%f",&c);
potencia=pow(b,2);
producto=(potencia-(4*a*c));
raiz=sqrt(producto);
cociente=2*a;
x1=((-b+(raiz))/cociente);
x2=((-b-(raiz))/cociente);
if(raiz>=0){printf("El valor de X1 es: %.2f\n",x1);
printf("El valor de X2 es: %.2f\n",x2);
}
else {printf("No se puede realizar debido a que el discriminante es imaginario");
}
if(cociente==0){printf("El Valor es Indeterminado");
}
printf("Fin del programa");
}




