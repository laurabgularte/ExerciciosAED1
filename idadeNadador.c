#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade do nadador
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // Classifica o nadador com base na idade
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18 && idade <= 25) {
        printf("Categoria: Sênior\n");
    } else {
        printf("Idade fora da faixa etária\n");
    }

    return 0;
}