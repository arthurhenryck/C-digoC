#include <stdio.h>

int main()
{
    int dia_sem;
    printf("Coloque um dia da semana em numero\n");
    scanf("%d", &dia_sem);
    
    switch(dia_sem){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-Feira\n");
            break;
        case 3:
            printf("Terça-Feira\n");
            break;
        case 4:
            printf("Quarta-Feira\n");
            break;
        case 5:
            printf("Quinta-Feira\n");
            break;
        case 6:
            printf("Sexta-Feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
    }

    return 0;
}