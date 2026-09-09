#include <stdio.h>
//#include<locale.h>
int main(){
int edad  =25;
float altura=1.75;
char inicial='J';

//setlocale(LC_ALL,"");
printf("Hola mundo en C\n");
printf("Edad:%d años\n",edad);
printf("altura: %.2f metros \n",altura);//.2 significa dos decimales
printf("inicial: %c\n",inicial);

return 0;

}
