/*6. Sabe-se que, para iluminar de maneira correta os c�modos de uma casa, para cada m2 deve-se usar 18W de
pot�ncia. Fa�a um programa que recebe as duas dimens�es de um c�modo (em metros), calcule e mostre a
sua �rea (em m2
) e a pot�ncia de ilumina��o que dever� ser usada.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int LARGURA, COMPRIMENTO, AREA, POTENCIA;
    printf("Digite a Largura do comodo em metros:\n");
    scanf("%d", &LARGURA);
    printf("Digite o Comprimento do comodo em metros:\n");
    scanf("%d", &COMPRIMENTO);
    AREA = LARGURA * COMPRIMENTO;
    POTENCIA = AREA * 18;
    printf("A Area do comodo e:\n\n %d metros quadrados\n\n", AREA);
    printf("A potencia necessaria para iluminar o comodo e:\n\n %dW\n\n", POTENCIA);
    return 0;
}
