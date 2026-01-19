#include <stdio.h>

int main()
{
    double p1, p2, p3, p4, media;

    do
    {
        printf("Digite a nota da P1: ");
        scanf("%lf", &p1);
        printf("Digite a nota da P2: ");
        scanf("%lf", &p2);
        printf("Digite a nota da P3: ");
        scanf("%lf", &p3);
        printf("Digite a nota da P4: ");
        scanf("%lf", &p4);

        if (p1 < 0 || p1 > 10 || p2 < 0 || p2 > 10 || p3 < 0 || p3 > 10 || p4 < 0 || p4 > 10)
        {
            printf("\nErro: As notas devem estar entre 0 e 10.\n\n");
        }
    } while (p1 < 0 || p1 > 10 || p2 < 0 || p2 > 10 || p3 < 0 || p3 > 10 || p4 < 0 || p4 > 10);

    media = (p1 + p2 + p3 + p4) / 4;

    printf("\nPrimeira nota: %.2lf\n", p1);
    printf("Segunda nota: %.2lf\n", p2);
    printf("Terceira nota: %.2lf\n", p3);
    printf("Quarta nota: %.2lf\n", p4);
    printf("\n--> Media final: %.2lf <--\n", media);

    if (media >= 6.0)
    {
        printf("\n ++ Aluno aprovado! :D\n\n");
    }
    else
    {
        printf("\n ** Aluno de recuperacao! T_T\n\n");
    }

    return 0;
}