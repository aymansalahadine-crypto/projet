 #include<stdio.h>
int main(){

int n , i , M , s , cpt ,  j ;
    do{
    printf("saisir un entier positif : ");
    scanf("%d",&n);
    if(n<0){
        put("erreur: 1 entier positif");
    }
    }while(n<=0);
    for(i=1 ; i<=n ; i+=2){
            do{
                printf("saisir un entier positif : ");
                scanf("%d",&M);
            }while(M<0);
           s+= M ;
           cpt++;

        }
        M=s/cpt;
         printf("la moyenne des entiers paires est : %d\n",M);


return 0;}
