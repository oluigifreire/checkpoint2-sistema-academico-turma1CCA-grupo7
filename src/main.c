#include <stdio.h>

float calcularMedia();
void classificarAluno(float media);
void derivadaSimples();

int main() {
    int opcao;

    printf("===== SISTEMA =====\n");
    printf("1 - Media\n");
    printf("2 - Classificar\n");
    printf("3 - Derivada\n");
    printf("0 - Sair\n");

    scanf("%d", &opcao);

    switch(opcao) {
        case 1: calcularMedia(); break;
        case 2: classificarAluno(0); break;
        case 3: derivadaSimples(); break;
    }

    return 0;
}