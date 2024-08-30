#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

// utf-8
// cp1256
// windows1252

void mostrarMenu(){
    printf("\nPROGRAMA EXEMPLO PROFESSOR");
    printf("\n1 - Recarrega menu");
    printf("\n2 - Procedimento selecionado");
    printf("\n0 - Sair");
    printf("\nEntre com o código : ");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int continua = 1;
    int itemMenu = 0;

    while(continua){
        mostrarMenu();
        scanf("%d", &itemMenu);

        switch (itemMenu)
        {
        case 0:
            continua = 0;
            printf("\n\nObrigado por utilizar nossos serviços!");
            break;
        case 1:
            system("cls");
            break;
        case 2:
            system("cls");
            printf("\nTeste de procedimento selecionado\n");
            system("pause");
            system("cls");
            break;
        default:
            continue;
            // break;
        }
    }
    return 0;
}
