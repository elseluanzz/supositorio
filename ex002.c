#include <stdio.h>
int main(void){
    int numero;
    int milhar;
    int centena;
    int dezena;
    int unidade;
    printf("digite um numero de 4 digitos: ");
    scanf("%d",&numero);
    if(numero >= 1000 && numero <= 9999){
        milhar = numero / 1000;
        centena = (numero/100)%10;
        dezena = (numero/10)%10;
        unidade = numero % 10;
        printf("%d\n",milhar);
        printf("%d\n",centena);
        printf("%d\n",dezena);
        printf("%d\n",unidade);


    }else{
        printf("digite um numero de 4 digitos");
    }
    return 0;
    

}