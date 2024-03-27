#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int cpf, num1, num2, n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int x1 =0, x2 = 0;

    printf("Digite os 9 números do CPF: ");
    scanf(" %d", &cpf);

    n0=cpf%10;
    n1=cpf/10%10;
    n2=cpf/100%10;
    n3=cpf/1000%10;
    n4=cpf/10000%10;
    n5=cpf/100000%10;
    n6=cpf/1000000%10;
    n7=cpf/10000000%10;
    n8=cpf/100000000%10;


    // multiplicar por 2, 3 , 4.... depois pegar o resto da divisão por 11 (%);
    //se resultado <2 ent o num1 é 0 caso contrário 11-resultado;

    x1 = n0*2 + n1*3 + n2*4 + n3*5 + n4*6 + n5*7 + n6*8 + n7*9 + n8*10;
    x1 = x1%11;

//    if(x1<2){
 //       num1 = 0;
  //  }else{
    //    num1 = 11 - x1;
   // }


    x2 = num1*2 + n0*3 + n1*4 + n2*5  + n3*6 + n4*7 + n5*8 + n6*9 + n7*10 + n8*11;
    x2 = x2%11;

 //   if(x2<2){
 //       num2 = 0;
 //   }else{
 //       num2 = 11 - x2;
 //   }



    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("o seu CPF é %d% d%d", cpf, num1 , num2);

return 0;
}
