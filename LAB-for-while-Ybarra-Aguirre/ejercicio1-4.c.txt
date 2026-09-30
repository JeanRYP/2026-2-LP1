#include <stdio.h>
int main(){
int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       if(j==i){
         printf("%d\n",j);
       }
       if(j<i){
        printf("%d\t",j);
       }
    }
    }

for(int p=n;p>=1;p--){
    for(int q=1;q<=p;q++){
       if(p==q){
         printf("%d\n",q);
       }
       if(q<p){
        printf("%d\t",q);
       }
    }
    }
}


