#include <stdio.h>
#include <math.h>

int main(){
    int i, num;
    long int aux, termo_ant, termo;
    printf("Entre com a posição: ");
    scanf("%d", &num);
    
    termo = 1;
    aux = 0;

    for(i=0; i<num;i++){
        termo_ant=termo;
        termo = termo + aux;
        aux = termo_ant;
        printf("%d => %d\n", (i+1), termo);
    }



}