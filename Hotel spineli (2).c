#include <stdio.h>
#include <locale.h>

void checkin();
void serviçodequarto();
void Fazerpedido();

int main () {
     setlocale (LC_ALL, "");
    int op;
    
    //inicio
    printf("bem-vindo ao hotel spineli,preencha o formulario a seguir para fazer sua reserva:\n");
    printf ("seleciona a opção \n");
    printf("1 - Fazer Checkin:\n");
    printf("2 - solicitar um serviço de quarto:\n");
    printf("3 - fazer pedido:\n");
    scanf("%d",&op);
    
    switch (op) {
        case 1:
        checkin();
        break;
        
        case 2:
        serviçodequarto();
        break;
    
        case 3:
        Fazerpedido();
        break;
         default:
         printf("Opção inválida!\n");
    }
    return 0;
    
}
    
    //checkin
    void checkin() {
    char nome[50], so[20], i[3], tl[20], cpf[20], qp[20], dr[20];

    printf("Informe seu nome:\n");
    scanf("%s", nome);
    printf("Informe seu sobrenome:\n");
    scanf("%s", so);
    printf("Informe sua idade:\n");
    scanf("%s", i);
    printf("Informe seu número de telefone:\n");
    scanf("%s", tl);
    printf("Informe seu CPF:\n");
    scanf("%s", cpf);
    printf("Informe a quantidade de pessoas que vão se hospedar no quarto:\n");
    scanf("%s", qp);
    printf("Quantos dias serão reservados?\n");
    scanf("%s", dr);
    printf("Seu quarto será o 16. Muito obrigado pela paciência e seja bem-vindo ao nosso hotel.\n");
}
    
    void serviçodequarto() {
    char nq[100];
    int op2;

    printf("Informe o número do seu quarto:\n");
    scanf("%s", nq);
    printf("Selecione a opção:\n");
    printf("1 - Camareira\n");
    printf("2 - Outro\n");
    scanf("%d", &op2);
    printf("O serviço de quarto já está chegando, aguarde um momento...\n");
}

   void Fazerpedido() {
    int op3;

    printf("Seja bem-vindo ao bufê do Hotel Spineli\n");
    printf("Selecione a opção:\n");
    printf("1 - Café da manhã\n");
    printf("2 - Almoço\n");
    printf("3 - Café da tarde\n");
    printf("4 - Janta\n");
    printf("5 - Bebidas\n");
    scanf("%d", &op3);

    switch (op3) {
        case 1:
        printf("Não trabalhamos com pedidos e entregas de comida, apenas com bufê. Caso esteja com fome, compareça no primeiro andar no restaurante.\n");
        break;
            
        case 2:
        printf("Não trabalhamos com pedidos e entregas de comida, apenas com bufê. Caso esteja com fome, compareça no primeiro andar no restaurante.\n");
        break;
        
        case 3:
        printf("Não trabalhamos com pedidos e entregas de comida, apenas com bufê. Caso esteja com fome, compareça no primeiro andar no restaurante.\n");
        break;
        
        case 4:
        printf("Não trabalhamos com pedidos e entregas de comida, apenas com bufê. Caso esteja com fome, compareça no primeiro andar no restaurante.\n");
        break;
        
        case 5:
            printf("1 - Coca-Cola\n");
            printf("2 - Coca-Cola Zero\n");
            printf("3 - Guaraná\n");
            printf("4 - Guaraná Zero\n");
            printf("5 - Água\n");
            printf("6 - Água com gás\n");
            printf("7 - Vinho tinto\n");
            printf("8 - Vinho seco\n");
            printf("9 - Champanhe\n");
            scanf("%d", &op3);
            printf("Obrigado pelo seu pedido, em 5 minutos será entregue.\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
   
 }
   
