#include<stdio.h>
int main(){
    const float PI=3.14159;
    int num1,num2;
    float resultado;
    printf("ingrese dos numeros enteros: \n");
    scanf("%d",&num1);
    printf("ingrese el segundo numero:\n");
    scanf("%d",&num2);
    printf("\n RESULTADOS\n");
  
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    resultado=(float)num1/num2;
    printf("%d/%d = %.3f\n", num1,num2,resultado);
    printf("%d %% %d =%d\n",num1,num2,num1%num2);
    

}