//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

//define
#define BAIXO 80
#define CIMA 72
#define DIREITA 77
#define ESQUERDA 75
#define ESC 27
#define F1 59
#define ENTER 13


//PASSAGENS
  void mostrar(int x, int y, int matriz[x][y]){
   
   int i,j;
   gotoxy(3,21);
   printf("Matriz:\n");
   for(i=0; i<x; i++){
    gotoxy(3,23+i);
    for(j=0; j<y; j++){
    printf("%4d  ",matriz[i][j]);  
}
    printf("\n");
}
}
  void trocarl(int x, int y, int matriz[x][y]){
  
  int a,b,i,j,aux=0;
  gotoxy(3,21);
  printf("Quais linhas deseja trocar?\n");
  printf("  Linha: ");
  scanf("%d",&a);
  printf("  Linha: ");
  scanf("%d",&b);
  printf("\n");

    for(j=0;j<y;j++){
        aux=matriz[a-1][j];
        matriz[a-1][j]=matriz[b-1][j]; 
        matriz[b-1][j]=aux;}

    printf("  Matriz:\n");
    for(i=0;i<x;i++){
      gotoxy(3,24+i);
      printf("\n");
    for(j=0;j<x;j++){
        printf("%4d ",matriz[i][j]);}}
        printf("\n\n");
}
  void trocarc(int x, int y, int matriz[x][y]){
  
  int a,b,i,j,aux=0;
  gotoxy(3,21);
  printf("Quais colunas deseja trocar?\n");
  printf("  Coluna: ");
  scanf("%d",&a);
  printf("  Coluna: ");
  scanf("%d",&b);
  printf("\n");

    for(i=0;i<x;i++){
        aux=matriz[i][a-1];
        matriz[i][a-1]=matriz[i][b-1]; 
        matriz[i][b-1]=aux;
}

  printf("  Matriz:\n");
    gotoxy(3,24+i);
    for(i=0;i<x;i++){
        printf("\n");
    for(j=0;j<y;j++){
        printf("%4d ",matriz[i][j]);
}
}
        printf("\n\n");
}
  void trocardig(int x, int y, int matriz[x][y]){
  
  int a,b,i,j,aux=0;
  for (i = 0; i<a; i++){
  for (j = 0; j<y; j++){
    if(i==j){
        aux=matriz[i][j];
        matriz[i][j]=matriz[i][y-j-1]; 
        matriz[i][y-j-1]=aux;
}
}
}
  gotoxy(3,20);
  printf(" Matriz:\n");
  gotoxy(3,21);
    for(i=0;i<x;i++){
        printf("\n");
    for(j=0;j<y;j++){
        printf("%4d ",matriz[i][j]);}}
        printf("\n\n");
}
  void sim(int x, int y, int matriz[x][y]){
  
  int i,j,aux=0;
  for (i = 0; i<x; i++){
  for (j = 0; j<y; j++){
    if(matriz[i][j]==matriz[j][i]){
    aux++;
}
}
}
    gotoxy(3,20);
    printf("A matriz %c sim%ctrica?",130,130);
    if(aux==x*y){
    gotoxy(3,21);
    printf("Sim");
}
    else{
    gotoxy(3,21);
    printf("N%co",198);
}
        
    gotoxy(3,23);
    printf("Matriz:\n");
    for(i=0;i<x;i++){
        printf("\n");
    for(j=0;j<y;j++){
        printf("%4d ",matriz[i][j]);
}
}
        printf("\n\n");
}
  void qma(int x, int y, int matriz[x][y]){
  
  int i,j,somal[x],somac[x],somadp,somads;
    int aux=0;

    for (i = 0; i<x; i++){
    for (j = 0; j<y; j++){
        aux=aux+matriz[i][j];}
        somal[i]=aux;
        aux=0;
}
        
    for (i = 0; i<x; i++){
    for (j = 0; j<y; j++){
        aux=aux+matriz[j][i];
}
        somac[i]=aux;
        aux=0;}    
    
    for (i = 0; i<x; i++){
        aux=aux+matriz[i][i];;
        somadp=aux;
}   
        aux=0;

    for (i = 0; i<x; i++){
    for (j = 0; j<y; j++){
        aux=aux+matriz[i][x-j-1];}
        somads=aux;    
        aux=0;
}

    int v=1;

    for (i = 0; i<x; i++){
    if((somal[i]!=somac[i]) || (somadp!=somads) || (somal[i]!=somadp)){
        v=0;
        break;
}
}

   gotoxy(3,20);
   printf("A matriz %c um quadrado m%cgico?",130,160);
   if(v==1){
    gotoxy(3,21);
    printf("Sim");
}
   else{
    gotoxy(3,21);
    printf("N%co",198);
}
 
    gotoxy(3,23);
    printf("Matriz:\n");
    for(i=0;i<x;i++){
        printf("\n");
    for(j=0;j<y;j++){
        printf("%4d ",matriz[i][j]);
}
}
        printf("\n\n");
}
  void qla(int x, int y, int matriz[x][y]){
    
  int i,j,somatotal=0,soma;
  int aux;
  int vet[x];
    
    gotoxy(3,20);
    printf("A matriz %c um quadrado latino?\n",130);
    for(i=x; i>0; i--)
      somatotal += i;
    
    if(x == y){
    
    for(i=0; i<x; i++){
    for(j=0; j<y; j++){            
        if(matriz[i][j]>x || matriz[i][j]<1)
        aux=1;
}
}
    
    for(i=0 ; i<x; i++){
        soma = 0;
    for(j=0; j<y; j++)
        soma += matriz[i][j];
        if(soma != somatotal)
        aux = 1;
}
    
    for(j=0; j<y; j++){
        soma = 0;
    for(i=0; i<x; i++)
        soma += matriz[i][j];
        if(soma != somatotal)
        aux = 1;
}
    
    if(aux == 1){
    printf("  N%co",198);
}
    else{
    printf("  Sim");
}
}
    
    else
    printf("  N%co",198);
    
    printf("\n");
 
    gotoxy(3,23);
    printf("Matriz:\n");
     for(i=0;i<x;i++){
        printf("\n");
    for(j=0;j<y;j++){
        printf("%4d ",matriz[i][j]);
}
}
        printf("\n\n");
}
  void maper(int x, int y, int matriz[x][y]){
  
  int i,j,somatotal=0,soma;
  int aux;
  int vet[x];
  
  gotoxy(3,20);
  printf("A matriz %c uma matriz de permuta%c%co?\n",130,135,198);
  if(x==y){
    for(i=0; i<x; i++){
    for(j=0; j<y; j++){            
        if(matriz[i][j] != 1 && matriz[i][j] != 0)
        aux = 1;
}
}
    for(i=0; i<x; i++){
        soma = 0;
    for(j = 0; j<y; j++)
        soma += matriz[i][j];
        if(soma != 1)
        aux = 1;
}
    
    for(j=0; j<y; j++){
        soma=0;
    for(i=0 ; i<x; i++)
        soma += matriz[i][j];
        if(soma != 1)
        aux = 1;
}
    
    if(aux == 1)
    printf("  N%co",198);
    else
    printf("  Sim");
}
    else
    printf("  N%co",198);
    
    printf("\n");
 
    gotoxy(3,23);
    printf("Matriz:\n");
    for(i=0;i<x;i++){
        printf("\n");
    for(j=0;j<y;j++){
        printf("%4d ",matriz[i][j]);
}
}
        printf("\n\n");
}
  void gotoxy(int w,int z){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){w-1,z-1});
}
  void menu(int x, int y){
  
  printf("\n");
  printf("                                                  MATRIZ [%d][%d]                            Aperte ESC para finalizar.",x,y);
  printf("                                                                                          Aperte F1 para receber ajudar.");
  printf("\n\n\n");
  printf("\n");
  printf("------------------------------------------------------------------------------------------------------------------------");
  printf("\n\n\n");
  printf(" %cOpera%c%ces que voc%c pode fazer com a matriz:                         %cVerifica%c%ces que voc%c pode fazer com a matriz: \n",158,135,228,136,158,135,228,136);
  
  gotoxy(4,12);
  printf("Mostrar os elementos da matriz.");
  gotoxy(74,12);
  printf("Verificar se a matriz %c sim%ctrica.",130,130);
  printf("\n");

  gotoxy(4,13);
  printf("Trocar os elementos da linha x pela linha y.");
  gotoxy(74,13);
  printf("Verificar se a matriz %c um quadrado m%cgico.",130,160);
  printf("\n");

  gotoxy(4,14);
  printf("Trocar os elementos da coluna x pela coluna y.");
  gotoxy(74,14);
  printf("Verificar se a matriz %c um quadrado latino.",130);
  printf("\n");

  gotoxy(4,15);
  printf("Trocas os elementos da diagonal principal");
  gotoxy(74,15);
  printf("Verificar se a matriz %c uma matriz de",130);
  gotoxy(4,16);
  printf("pela diagonal secund%cria.",160);
  gotoxy(74,16);
  printf("permuta%c%co.",135,198);
  printf("\n\n\n");
  printf("------------------------------------------------------------------------------------------------------------------------");
  }
//MAIN
  main(){

  int tecla, a=12;
  char nome[100];
  
  printf("\n");
  printf("                                      INTERFACE DE MATRIZES\n");
  printf("                        --------------------------------------------------\n\n\n");
  printf("  Nesta interface voc%c digitar%c uma matriz e poder%c escolher entre v%crias op%c%ces\n\n",136,160,160,160,135,228);
  printf("  Por favor, digite seu nome: ");
  gets(nome);
  system("cls");

  int x,y;
  
  printf("\n");
  printf("  Muito bem %s, agora digite as dimens%ces de sua matriz: \n\n",nome,228);
  do{
  printf("  -> Quantidade de linhas (um n%cmero maior que 0 e menor 6): ",163);
   scanf("%d",&x);
   if(x<0 || x>6){
    printf("  Erro!!!\n");
    printf("  Digite novamente:\n");
}
  }while((x>6)||(x<=0));
  do{
  printf("  -> Quantidade de colunas (um n%cmero maior que 0 e menor 6): ",163);
   scanf("%d",&y);
   if(y<0 || y>6){
    printf("  Erro!!!\n");
    printf("  Digite novamente:\n");
}
  }while((y>6)||(y<=0));
  printf("\n\n");
  printf("  Voce digitou uma matriz [%d][%d], agora vamos preench%c-la (use apenas n%cmeros inteiros e com 4 algarismos):\n",x,y,136,163);

   int i,j;
   int matriz[x][y];

  for(i=0; i<x; i++){
   for(j=0; j<y; j++){
    printf("  ->[%d][%d] = ",i,j);
     scanf("%d",&matriz[i][j]);
   }
  }
  
   system("cls");
   menu(x,y);

  //INTERFACE
  
  int z=3, w=12;
  do{
   tecla=getch();

   switch (tecla){
  
   case BAIXO:
    gotoxy(z,w);
    putchar(' ');
      if(w==15){w=12;}
        else{w++;}
    gotoxy(z,w);
    putchar('>');
      break; 

   case CIMA:
    gotoxy(z,w);
    putchar(' ');
      if(w==12){w=15;}
        else{w--;}
    gotoxy(z,w);
    putchar('>');
    break;

   case DIREITA:
    gotoxy(z,w);
    putchar(' ');
      if(z=73){z=3;}
        if(z=3){z=73;}
    gotoxy(z,w);
    putchar('>');
    break;

    case ESQUERDA:
    gotoxy(z,w);
    putchar(' ');
      if(z=3){z=73;}
        if(z=73){z=3;}
    gotoxy(z,w);
    putchar('>');
    break;

    
    case ENTER:
     if(z==3){
         switch(w){
           case 12:
           system("cls");
           menu(x,y);
           mostrar(x, y, matriz);
           break;

           case 13:
           system("cls");
           menu(x,y);
           trocarl(x, y, matriz);
           break;

           case 14: 
           system("cls");
           menu(x,y);
           trocarc(x, y, matriz);
           break;

           case 15:
           system("cls");
           menu(x,y);
           trocardig(x, y, matriz);
           break;  
}
}
     if(z==73){ 
         switch(w){
           case 12:
           system("cls");
           menu(x,y);
           sim(x, y, matriz);
           break;

           case 13:
           system("cls");
           menu(x,y);
           qma(x, y, matriz);
           break;

           case 14:
           system("cls");
           menu(x,y);
           qla(x, y, matriz);
           break;

           case 15:
           system("cls");
           menu(x,y);
           maper(x,y,matriz);
           break;  
}
}
  
   default:
   break;

  
  case F1:
   gotoxy(73,20);
   printf("%cQuadrado m%cgico %c uma matriz cuja a soma das",158,160,130);
   gotoxy(73,21);
   printf("diagonais tem o mesmo valor.\n");
   gotoxy(73,23);
   printf("%cQuadrado latino %c uma matriz quando cada linha",158,130);
   gotoxy(73,24);
   printf("e cada coluna apresenta os inteiros.\n");
   gotoxy(73,26);
   printf("%cUma matriz de permuta%c%co %c uma matriz que",158,135,198,130);
   gotoxy(73,27);
   printf("apresenta n-1 n%cmeros nulos nas linhas e co-",163);
   gotoxy(73,28);
   printf("lunas.");
   gotoxy(73,30);
   printf("%cAp%cs trocar os elementos, clique em mostrar.",158,162);
}
  }while(tecla!=ESC);

  system("cls");
    gotoxy(3,4);
    printf("Obrigado por usar o programa!!! <3  (Programa feito por Jo%co Pedro Vieira Rodrigues)\n",198);
    printf("\n\n\n");
  
  system("pause"); 
}

  


