#include <stdio.h>

int main(){
   
char estado[20];
char cidade[20];
char carta[10];
int pessoas;
float area;
float pib;
int local, escolha , escolha2, escolha3, compracao;
float densidade;
float capita;
float poder;

char estado2[20];
char cidade2[20];
char carta2[10];
int pessoas2;
float area2;
float pib2;
int local2;
float densidade2;
float capita2;
float poder2;


int resultado;
int resultado2;

densidade = (float)(pessoas / area );
capita = (float)(pib / pessoas );
poder = (float) (pessoas + area + local + capita + densidade + pib );


densidade2 = (float)(pessoas2 / area2 );
capita2 = (float)(pib2 / pessoas2 );
poder2 = (float) (pessoas2 + area2 + local2 + capita2 + densidade2 + pib2 );

resultado = poder;
resultado2 = poder2;



printf("**** carta 1 ****\n" );

printf("digite o estado:" );
scanf("%s", &estado );

printf("digite o cidade:" );
scanf("%s", &cidade );

printf("digite o numero da carta:" );
scanf("%s", &carta );

printf("população:" );
scanf("%d", &pessoas );

printf("área:" );
scanf("%f", &area );

printf("PIB:" );
scanf("%f", &pib );

printf("Número de Pontos Turísticos:" );
scanf("%d", &local );

printf("**** carta 2 ****\n" );

printf("digite o estado:" );
scanf("%s", &estado2 );

printf("digite o cidade:" );
scanf("%s", &cidade2 );

printf("digite o numero da carta:" );
scanf("%s", &carta2 );

printf("população:" );
scanf("%d", &pessoas2 );

printf("área:" );
scanf("%f", &area2 );

printf("PIB:" );
scanf("%f", &pib2 );

printf("Número de Pontos Turísticos:" );
scanf("%d", &local2 );

printf("****lutas das cartas****\n ");

if(pessoas > pessoas2 ){
 printf("carta 1 venceu em populaçao\n");
}else if (pessoas2 > pessoas)
{
    printf("carta 2 venceu em populaçao\n");
}else{
    printf("empate em populaçao\n");
}
if(area > area2 ){
    printf("carta 1 venceu em area\n");
}else if (area2 > area)
{
    printf("carta 2 venceu em area\n");
}else{
    printf("empate em area\n" );
}
if(pib > pib2 ){
    printf("carta 1 venceu em pib\n");
}else if (pib2 > pib )
{
  printf("carta 2 venceu em pib\n");
}else{
    printf("empate em pib\n");
}
if(local > local2 ){
    printf("carta 1 venceu em número de Pontos Turísticos\n");
}else if (local2 > local)
{
   printf("carta 2 venceu em número de Pontos Turísticos\n");
}else{
    printf("empate em número de Pontos Turísticos\n");
    
}
if(densidade < densidade2 ){
    printf("carta 1 venceu em densidade populacional\n");
}else if (densidade2 < densidade)
{
    printf("carta 2 venceu em densidade populacional\n");
}else{
    printf("empate em densidade populacional\n");
}
if(capita > capita2 ){
    printf("carta 1 venceu em PIB per capita\n");
}else if (capita2 > capita)
{
    printf("carta 2 venceu em PIB per capita\n");
}else{
    printf("empate em PIB per capita\n");
}
if(poder2 > poder ){
    printf("carta 1 venceu em poder da carta\n");
}else if (poder > poder2)
{
    printf("carta 2 venceu em poder da carta\n");
}else{
    printf("empate em poder da carta\n"); 

printf("###Menu final####\n");
printf("1-Mostra os paises das cartas\n");
printf("2-Os atributos das cartas\n");
printf("3-Regras do jogo\n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
printf("Estados das cartas\n");    
printf("Carta 1:%s\n", estado );
printf("Carta 2:%s\n", estado2 );
break;
case 2:
printf("1-carta 1\n");
printf("2-carta 2\n");
scanf("%d",escolha2);
switch (escolha2)
{
case 1:
printf("numero da carta:%s\n", carta );
printf("estado:%s\n", estado );
printf("cidade:%s\n", cidade );
printf("população:%d\n", pessoas );
printf("área:%.2f\n", area );
printf("PIB:%.2f\n", pib );
printf("Número de Pontos Turísticos:%d\n", local );
printf("densidade populacional:%.2f\n", densidade );
printf("PIB per capita:%.2f\n", capita );
printf("Poder da carta 1:%.2f\n", poder );
break;

case 2:
printf("numero da carta:%s\n", carta2 );
printf("estado:%s\n", estado2 );
printf("cidade:%s\n", cidade2 );
printf("população:%d\n", pessoas2 );
printf("área:%.2f\n", area2 );
printf("PIB:%.2f\n", pib2 );
printf("Número de Pontos Turísticos:%d\n", local2 );
printf("densidade populacional:%.2f\n", densidade2 );
printf("PIB per capita:%.2f\n", capita2 );
printf("poder da carta 2:%.2f\n", poder2 );
break;
}
case 3:
printf("###Regras do desafio super trufo###\n");
printf("Regra número 1 cadastra as duas cartas do desafio.\n");
printf("Regra número 2 o cadastramento das cartas deve ter estado, população, área, pontos turísticos e o PIB\n");
printf("Regra número 3 Depois do cadastramento das cartas, o jogo irá calcular o PIB per capita e a densidade populacional.\n");
printf("Regra número 4 Depois do cadastramento das cartas, o jogo mostra os resultados dos vencedores.\n");
break;
default:
printf("Fim");
break;
}
}




return 0; 

}
