#include <stdio.h>

int main() {
    float aposta1, aposta2, aposta3, valor_premio;
    float total_apostado, p1, p2, p3;

    printf("Digite o valor da aposta do primeiro amigo: ");
    scanf("%f", &aposta1);

    printf("Digite o valor da aposta do segundo amigo: ");
    scanf("%f", &aposta2);

    printf("Digite o valor da aposta do terceiro amigo: ");
    scanf("%f", &aposta3);

    printf("Digite o valor total do premio: ");
    scanf("%f", &valor_premio);

    total_apostado = aposta1 + aposta2 + aposta3;

    p1 = (aposta1 / total_apostado) * valor_premio;
    p2 = (aposta2 / total_apostado) * valor_premio;
    p3 = (aposta3 / total_apostado) * valor_premio;

    printf("O primeiro amigo recebera: R$ %.2f\n", p1);
    printf("O segundo amigo recebera: R$ %.2f\n", p2);
    printf("O terceiro amigo recebera: R$ %.2f\n", p3);

    return 0;
}