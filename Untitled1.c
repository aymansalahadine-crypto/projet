#include<stdio.h>
int main(){

int n , i , moy , s ,  j ;
do{
    printf("saisir un entier positif : ");
    scanf("%d",&n);
}while(n<=0);
s=0;
for(i=0 ; i<=n ; i+=2){
           s+= i  ;
           moy= s/(n/2) ;

        }
         printf("la moyenne des entiers paires est : %d\n",moy);
for(j=1 ; j<=n ; j+=2){
    printf("les entiers impaires sont : %d\n",j);
}


return 0;}
