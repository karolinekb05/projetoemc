#include<stdlib.h>
#include<stdio.h>

main ()
{
    float valor = 0;
    float desconto = 0;
    float total = 0;

    printf("Informe o valor da compra:");
    scanf("%f", &valor);

    if(valor > 300)
    {
        desconto = (valor - 300) * 0.1;
    }
    else
    {
        desconto = 0;
    }

    total = valor - desconto;

    printf("\n O valor da compra ficou em %.2f \n", valor);
    printf("\n O valor do desconto ficou em: %.2f \n", desconto);
    printf("\n O valor a pagar ficou em: %.2f \n", total);

    return 0;
}
