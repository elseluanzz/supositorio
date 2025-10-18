#include <stdio.h>
int main(void){
    int numero,hora,minutos,segundos,segundos_restantes;
    printf("digite um numero: ");
    scanf("%d",&numero);
    hora = numero/3600;
    segundos_restantes = numero %3600;
    minutos = segundos_restantes/60;
    segundos = segundos_restantes % 60;
    printf("tempo correspondente e: %d horas\n %d minutos\n %d segundos \n",hora,minutos,segundos);

    
    return 0;

}