#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

    srand(time(0));
    ataque1 = 1;
    ataque2 = 0;
    defesa1 = 0;
    defesa2 = 0;
    recuo1 = 1;
    recuo2 = 0;

    printf("Bem vindo ao jogo!\n");
    printf("Escolha o primeiro atributo: \n");
    printf("A: Ataque\n");
    printf("D:Defesa\n");
    printf("R:Recuo\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 'A':
    case 'a':

        printf("Você escolheu a opção ataque!\n");
        resultado1 = ataque1 > ataque2 ? 1 : 0;
          break;

    case 'D':
    case 'd':

        printf("Você escolheu a opção Defesa!\n");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
         break;
    
    case 'R':
    case 'r':

        printf("Você escolheu a opção Defesa!\n");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
         break;
    
    default:
        printf("opção invalida\n");
        break;
    }

    printf("Escolha o segundo atributo: \n");
    printf("A: Ataque\n");
    printf("D:Defesa\n");
    printf("R:Recuo\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &segundoatributo);

    if (primeiroatributo == segundoatributo){
        printf("Você escolheu o mesmo atributo!!!\n");
    }else{
        switch (segundoatributo)
    {
    case 'A':
    case 'a':

        printf("Você escolheu a opção ataque!\n");
        resultado2 = ataque1 > ataque2 ? 1 : 0;
          break;

    case 'D':
    case 'd':

        printf("Você escolheu a opção Defesa!\n");
        resultado2 = defesa1 > defesa2 ? 1 : 0;
         break;
    
    case 'R':
    case 'r':

        printf("Você escolheu a opção Defesa!\n");
        resultado2 = recuo1 > recuo2 ? 1 : 0;
         break;
    
    default:
        printf("opção invalida\n");
        break;
    }
        
    }

    if (resultado1 && resultado2){
        printf("Parabens voce venceu!!!\n");
    }else if(resultado1 != resultado2){
        printf("Voce empatou!!!");
    }else{
        printf("Infelizmente voce perdeu!");
    }
    
    









    return 0;
}