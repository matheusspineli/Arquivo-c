#include <stdio.h>
#include <locale.h>
int main () {
     setlocale (LC_ALL, "");
    char nome[50];
    char tl[20], cpf[20], nq[100], i[3], so[20], qp[20], dr[20];
    int op, op2;
    
    //inicio
    printf("bem-vindo ao hotel spineli,preencha o formulario a seguir para fazer sua reserva:\n");
    printf ("seleciona a opção \n");
    printf("1 - Fazer Checkin:\n");
    printf("2 - solicitar um serviço de quarto:\n");
    printf("3 - fazer pedido:\n");
    scanf("%d",&op);
    switch (op) {
    
    //checkin
    case 1:
    printf("informe seu nome:\n");
    scanf("%s", nome);
    printf("informe seu sobrenome:\n");
    scanf("%s", so);
    printf("informe sua idade:\n");
    scanf("%s", i);
    printf("informe seu numero de telefone:\n");
    scanf("%s", tl);
    printf("informe seu cpf:\n");
    scanf("%s", cpf);
    printf("informe a quantidade de pessoas vão se ospedar no quarto:\n");
    scanf("%s", qp);
    printf("quantos dias serão reservados?\n");
    scanf("%s", dr);
    printf("seu quarto sera o 16,muito obrigado pela paciência e seja bem-vindo ao nosso hotel");
    break;
    
    //serviço de quarto
    case 2:
    printf("informe o numero do seu quarto:\n");
    scanf("%s", nq);
    printf("selecione a opção\n");
    printf("1 - camareira\n");
    printf("2 - outro\n");
    scanf("%d", &op);
    break;
    
    //fazer pedido
    case 3:
    printf("selecione a opção\n");
    printf("1 - café da manhã\n");
    printf("2 - almoço\n");
    printf("3 - café da tarde\n");
    printf("4 - janta\n");
    printf("5 - bebidas\n");
    scanf("%d", &op);
    break;
}
}