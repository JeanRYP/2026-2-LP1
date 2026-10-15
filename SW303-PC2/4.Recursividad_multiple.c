#include<stdio.h>
int ackermann(int m, int n){
    static int llamadas =0;
    llamadas++;
    printf("Llamadas hasta el moment: %d\n", llamadas);
    if (m ==0){
         return n + 1;
        
    }else{
        if (n==0){
            return ackermann( m-1, 1);
            
        }else{
            return ackermann(m-1,ackermann(m,n-1));
             ;
        }
    }
}

int main(){

    int resultado = ackermann(3, 4);
    printf("Resultado de ackermann(3,4): %d\n", resultado);

    return 0;
}


