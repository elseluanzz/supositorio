#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os valores nao podem formar um triangulo.\n");
    }

    return 0;
}