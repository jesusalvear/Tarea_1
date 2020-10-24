#include<stdio.h>
#include<math.h>
int main(){
float a;
float b;
float c;
printf("Haremos una division de dos variables\n");
printf("Dame el valor primer valor");
scanf("%f",&a);
printf("Dame el segundo valor");
scanf("%f",&b);
if(b!=0){c=a/b;
        printf("El valor del cociente es:%.2f \n",c);
    }
else{printf("Error\n");

}
printf("Fin del programa");

}
