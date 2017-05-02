#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

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
    //exe12();
    //exe13();
    //exe14();
    //exe15();
    //exe16();
    exe17();
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

void exe12(){
    printf("\nExercício 12\n");
    int nRodas;

    scanf("%d",&nRodas);
    
    switch(nRodas){
    	case 4:
    		printf("Carro");
    		break;
    	
    	case 3:
    		printf("Triciclo");
    		break;
    		
    	case 2:
    		printf("Moto");
    		break;
    		
    	default:
    		printf("Ve�culo Desconhecido");
    		break;
	}
}

void exe13(){
    printf("\nExercício 13\n");
    int grau;

    scanf("%d", &grau);
    
    switch(grau){
    	case 1:
    		printf("Doutor ");
    	
    	case 2:
    		printf("Mestre ");
    		
    	case 3:
    		printf("Graduado");    		
	}
}

void exe14(){
	printf("\nExercício 14\n");
    float numero;

    scanf("%f", &numero);
    
    float raiz = sqrt(numero);
   	float quadrado = pow(numero, 2.0);
    
    printf("Raiz quadrada: %f\n", raiz);
    printf("Quadrado: %f", quadrado);
}

void exe15(){
	printf("\nExercício 15\n");
    float numero;

    scanf("%f", &numero);    
    
    float seno = sin(numero);
    float cosseno = cos(numero);
    float tangente = tan(numero);
    
    printf("Seno: %f\n", seno);
    printf("Cosseno: %f\n", cosseno);
    printf("Tangente: %f\n", tangente);
}

void exe16(){
	printf("\nExercício 16\n");
	
	char caractere;
	
	scanf("%c", &caractere);
	
	char maisculo = toupper(caractere);
	printf("%c", maisculo);
}

void exe17(){
	printf("\nExercício 17\n");
	
	int numero;
	
	scanf("%d", &numero);
	
	srand((unsigned)5);
	
	int aleatorio = rand();	
	numero = numero * aleatorio;
	
	printf("N�mero aleat�rio: %d\n", aleatorio);
	printf("Multiplica��o: %d\n", numero);
}
