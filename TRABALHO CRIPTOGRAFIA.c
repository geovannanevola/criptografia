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
system("cls");                //limpa o menu após a escolha da opção desejada
printf("\n Criptografia de texto");
printf("\n\n 1 - Criptografar mensagem");
printf("\n 2- Sair");

printf("Digite a opção desejada");
scanf("%d", &opcao);

setbuf(stdin, NULL);         //limpa a memória do teclado


return 0;
}

return 0;
}
