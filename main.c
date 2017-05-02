#include <stdio.h>
#include <stdlib.h>

int main()
{
    //exe1();
    //exe2();
    //exe3();
    //exe4();
    //exe5();
    //exe6();
    //exe7();
    //exe8();
    //exe9();
    //exe10();
    //exe11();
    return 0;
}

void exe1(){
    printf("\nExercício 1\n");
    int a = 10;
    int b = 11;

    a = a+b;

    printf("%d",a);
}

void exe2(){
    printf("\nExercício 2\n");
    int a = 10;
    int b = 11;

    a++;
    b--;
    a = a+b;

    printf("%d",a);
}

void exe3(){
    printf("\nExercício 3\n");
    int a = 10;
    int b = 11;

    int c = (a == b);
    int d = (a != b);

    printf("c = %d, d = %d", c, d);
}

void exe4(){
    printf("\nExercício 4\n");
    int a = 10;
    int b = 11;

    int c = (a <= b);
    int d = (a > b);

    printf("c = %d, d = %d", c, d);
}

void exe5(){
    printf("\nExercício 5\n");
    int a = (3<2);
    int b = (5<7);

    int c = (a || b);
    int d = (a && b);

    printf("c = %d, d = %d", c, d);
}

void exe6(){
    printf("\nExercício 6\n");
    int a = (3<2);
    int b = !a;

    printf("a = %d, b = %d", a, b);
}

void exe7(){
    printf("\nExercício 7\n");
    char primeiroNome[100];
    int idade;

    scanf("%s",&primeiroNome);
    scanf("%d",&idade);

    printf("%s-%d",primeiroNome,idade);
}

void exe8(){
    printf("\nExercício 8\n");
    int idade;

    scanf("%d",&idade);

    if(idade>65){
    printf("Pessoa Idosa");
    }
}

void exe9(){
    printf("\nExercício 9\n");
    int idade;

    scanf("%d",&idade);

    if(idade>65){
        printf("Pessoa Idosa");
    }else{
        printf("Jovem");
    }
}

void exe10(){
    printf("\nExercício 10\n");
    int nRodas;

    scanf("%d",&nRodas);

    if(nRodas==4){
        printf("Carro");
    }
    if(nRodas==3){
        printf("Triciclo");
    }
    if(nRodas==2){
        printf("Moto");
    }
}

void exe11(){
    printf("\nExercício 10\n");
    int numero;

    scanf("%d",&numero);

    if((numero%2)==0){
        printf("Par");
    }else{
        printf("Ímpar");
    }
}
