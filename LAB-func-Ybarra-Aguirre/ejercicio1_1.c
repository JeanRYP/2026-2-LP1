#include<stdio.h>

int suma_digitos(int n){
    int suma =0;
    int temp=n;
    while(temp>0){
        suma += temp%10;
        temp = temp/10;
    }
    return suma;
}

int raiz_digital(int n){
    int raiz;
    
        raiz = suma_digitos(n);
        while(raiz>=10){
            raiz=suma_digitos(raiz);
        }
    
    return raiz;
}

void imprimir_traza(int n){
    
    while(n>10){
        n=suma_digitos(n);
        printf(" --> %d",n);
    }
    printf("\n");
}



int main(){
    int n;
    printf("Ingrese #n: ");scanf("%d",&n);
    printf("%d",n);
    imprimir_traza(n);
    printf("Raiz digital: %d",raiz_digital(n));

    return 0;
}