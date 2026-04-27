#include <stdio.h>

float calcularMedia();
void classificarAluno(float media);
void derivadaSimples();

int main() {
    int opcao;
    float media = 0;

    do {
        printf("\n===== SISTEMA =====\n");
        printf("1 - Media\n");
        printf("2 - Classificar\n");
        printf("3 - Derivada\n");
        printf("0 - Sair\n");
        printf("Escolha: ");

        scanf("%d", &opcao);

        switch(opcao) {
            case 1: media = calcularMedia(); break;
            case 2: classificarAluno(media); break;
            case 3: derivadaSimples(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}