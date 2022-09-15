#include <stdio.h>

int main(void)
{

    int opcao = 1;

    while (opcao != 4)
    {

        printf("1 - Opcao 1\n2 - Opcao 2\n3 - Opcao 3\n4 - Opcao 4\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Opcao 1\n");
            break;
        case 2:
            printf("Opcao 2\n");
            break;
        case 3:
            printf("Opcao 3\n");
            break;
        case 4:
            printf("Opcao 4");
            break;
        default:
            printf("Opcao invalida\n");
        }
    }
}