#include <stdio.h>

int main()
{
    for(;;)
    {
        //**VARIAVEIS CHAVES DO CÓDIGO**//
        float valor1;
        float valor2;
        float opção;
        float opção2;
        
        //**INTRODUÇÃO**//
        printf("\a\n\nSelecione uma operação.\n");
        printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão");
        printf("\n\nCaso queira encerrar.\n5 - Encerrar\nEscolha: ");
        scanf("%f", &opção);
        
        
        //**SOMA**//
        if(opção==1)
        {
            printf("\nDigite o primeiro valor: ");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf("%f", &valor2);
            
            float soma = valor1 + valor2;
            printf("\n%.2f + %.2f = %.2f\n", valor1, valor2, soma);
            
            printf("\nDeseja efetuar mais calculos?\n1 - Sim\n2 - Não\nEscolha: ");
            scanf("%f", &opção2);
            
            if(opção2==1)
            {
                printf("Prosseguindo. . .");
            }
            else if(opção2==2)
            {
                printf("Encerrando. . .");
                break;
            }
           
        }
        //**SUBTRAÇÃO**//
        if(opção==2)
        {
            printf("\nDigite o primeiro valor: ");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf("%f", &valor2);
            
            float subtração = valor1 - valor2;
            printf("\n%.2f - %.2f = %.2f\n", valor1, valor2, subtração);
            
            printf("\nDeseja efetuar mais calculos?\n1 - Sim\n2 - Não\nEscolha: ");
            scanf("%f", &opção2);
            
            if(opção2==1)
            {
                printf("Prosseguindo. . .");
            }
            else if(opção2==2)
            {
                printf("Encerrando. . .");
                break;
            }
        }
        //**MULTIPLICAÇÃO**//
        if(opção==3)
        {
            printf("\nDigite o primeiro valor: ");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf("%f", &valor2);
            
            float multiplicação = valor1 * valor2;
            printf("\n%.2f * %.2f = %.2f\n", valor1, valor2, multiplicação);
            
            printf("\nDeseja efetuar mais calculos?\n1 - Sim\n2 - Não\nEscolha: ");
            scanf("%f", &opção2);
            
            if(opção2==1)
            {
                printf("Prosseguindo. . .");
            }
            else if(opção2==2)
            {
                printf("Encerrando. . .");
                break;
            }
        }
        //**DIVISÃO**//
        if(opção==4)
        {
            printf("\nDigite o primeiro valor: ");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf("%f", &valor2);
            
            float divisão = valor1 / valor2;
            printf("\n%.2f / %.2f = %.2f\n", valor1, valor2, divisão);
            
            printf("\nDeseja efetuar mais calculos?\n1 - Sim\n2 - Não\nEscolha: ");
            scanf("%f", &opção2);
            
            if(opção2==1)
            {
                printf("Prosseguindo. . .");
            }
            else if(opção2==2)
            {
                printf("Encerrando. . .");
                break;
            }
        }
        //**ENCERRAMENTO**//
        if(opção==5)
        {
            printf("\nEncerrando. . .");
            break;
        }
        //**INVÁLIDO**//
        if(opção>=6 || opção<=0)
        {
            printf("\nNúmero inválido, reiniciando. . .");
        }
    }
}