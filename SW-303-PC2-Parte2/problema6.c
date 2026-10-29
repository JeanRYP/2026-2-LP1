#include <stdio.h>
#include <stdlib.h>

int buscar(const int *v,int n,int objetivo,int *posicion){
    if (v== NULL || n<= 0 || posicion== NULL){
        return 0;
    }
    for (int i=0; i<n;i++){
        if (v[i] ==objetivo){
            *posicion = i;
            return 1;
        }
    }

    return 0;
}

void reemplazar(int *v, int n, int antiguo, int nuevo) {
    if (v == NULL || n<=0){
        return;
    }
    for (int i=0;i<n;i++){
        if (v[i] ==antiguo){
            v[i] =nuevo;
        }
    }
}

int main(void) {
    int n,objetivo,posicion= -1;
    int antiguo,nuevo;

    printf("Ingrese n: ");
    if (scanf("%d",&n) !=1 || n<1 || n>500){
        return 1;
    }
    int *v= malloc((size_t)n *sizeof(int));

    if (v== NULL){
        return 1;
    }
    printf("Ingrese %d enteros: ",n);

    for (int i=0;i<n;i++){
        if (scanf("%d",&v[i]) !=1){
            free(v);
            return 1;
        }
    }

    printf("Objetivo: ");
    if (scanf("%d",&objetivo) !=1){
        free(v);
        return 1;
    }

    if (buscar(v,n,objetivo,&posicion)){
        printf("Encontrado en posicion %d\n",posicion);
        }
    else{
        printf("No encontrado\n");
    }
    printf("Reemplazar (antiguo) por (nuevo) : ");
    if (scanf("%d %d",&antiguo,&nuevo) !=2){
        free(v);
        return 1;
    }

    reemplazar(v,n,antiguo,nuevo);

    printf("Arreglo: ");

    for (int i=0;i<n;i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}