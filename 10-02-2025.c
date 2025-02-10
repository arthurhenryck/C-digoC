
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite um valor!\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero!\n");
    scanf("%d", &num2);
    
    if(num1 < num2){
        printf("O numero %d é menor \n", num1);
    }else {
        printf("O numero %d é menor \n", num2);
    }
    
    return 0;
}