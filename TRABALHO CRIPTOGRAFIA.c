#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main () {

char CHAVE[] = "GeOnEv";
int TAM_CHAVE = strlen(CHAVE);

void DigitarMensagem (){
}

void CriptografarMensagem (){
}

void Menu(){
int opcao;
setlocale(LC_ALL, "Portuguese");

    while (1)                 //1= loop infinito
system("cls");                //limpa o menu ap�s a escolha da op��o desejada
printf("\n Criptografia de texto");
printf("\n\n 1 - Criptografar mensagem");
printf("\n 2- Sair");

printf("Digite a op��o desejada");
scanf("%d", &opcao);

setbuf(stdin, NULL);         //limpa a mem�ria do teclado


return 0;
}

return 0;
}
