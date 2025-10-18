#include <stdio.h>
int main(void){
int numero,centenas,dezenas,unidades,invertido;
printf("digite um numero inteiro positivo: ");
scanf("%d",&numero);
if(numero >= 100 && numero <= 999){
    centenas = numero / 100;
    dezenas = (numero/10)%10;
    unidades = numero % 10;
invertido = (unidades* 100) + (dezenas* 10) + centenas;
printf("o numero %d invertido e: %d\n",numero,invertido);

}else{
    printf("erro, o numer nn tem 3 digitos seu burrin");
}
return 0;




}