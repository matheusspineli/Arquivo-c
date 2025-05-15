#include <stdio.h>
void imprime();
float soma(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divi(float a, float b);
float med(float a, float b);
float por(float a, float b);

int op;

int main(){
    float v1, v2;
    scanf("%f", &v1);
    scanf("%f", &v2);
    float res = soma(v1,v2);
    float res2 = sub(v1,v2);
    float res3 = mult(v1,v2);
    float res4 = divi(v1,v2);
    float res5 = med(v1,v2);
    float res6 = por(v1,v2);
    
    printf(" 1 - soma\n");
    printf(" 2 - subtração\n");
    printf(" 3 - multiplicação\n");
    printf("4 - divisão\n");
    printf("5 - média\n");
    printf("6 - porcentagem\n");
    scanf("%d", &op);
    switch (op) {
    
    case 1:
      printf("Res = %.2f", res);
      break;
      
    case 2:
     printf("Res = %.2f", res2);
     break;
     
    case 3:
    printf("Res = %.2f", res3);
    break;
    
    case 4:
     printf("Res = %.2f", res4);
     break;
     
    case 5:
     printf("Res = %.2f", res5);
     break;
     
    case 6:
     printf("Res = %.2f", res6);
     break;
    }
//     imprime();
//     int v1, v2;
//     scanf("%d", &v1);
//     scanf("%d", &v2);
//   int res = soma(v1,v2);
//   int res2 = sub(v1,v2);
//   printf("Res = %d", res);
//   printf("Res = %d", res2);
     return 0; 
}
void imprime(){
    printf("teste\n");
}

float soma(float a, float b){
    float res;
    res = a + b;
    return res;
}

float sub(float a, float b){
    float res2;
    res2 = a - b;
    return res2;
}   

float mult(float a, float b){
    float res3;
    res3 = a * b;
    return res3;
}

float divi(float a, float b){
    float res4;
    res4 = a / b;
    return res4;
}

float med(float a, float b){
    float res5;
    res5 = (a + b) / 2;
    return res5;
}

float por(float a, float b){
    float res6;
    res6 = a * b / 100;
    return res6;
}