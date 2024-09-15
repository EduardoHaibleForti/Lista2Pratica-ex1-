#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero,i,soma=0;

    printf("Digite um numero inteiro:");
    scanf("%d",&numero);

    i=1;
    while(i<numero){
        if(numero%i==0){
            soma=soma + i;
        }
        i++;
    }
    if(soma==numero){
        printf("O numero %d eh perfeito",numero);
    }else{
    printf("O numero %d nao eh perfeito",numero);
    }
    return 0;
}
