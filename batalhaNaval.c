#include <stdio.h>
#define LINHA 10;
#define COLUNA 10;

int main (){
 char linha [10]={'A','B', 'C', 'D', 'F', 'G', 'H' , 'I', 'J'};
int tabuleiro[10][10];
int mat[10][10]= {10};

printf("  A B C D E F G H I J\n");
       for(int i =0 ; i<10;i++){  //numero do 0 ao 10 para linha
         printf("%d ",i);
          for(int j=0; j<10; j++){
           tabuleiro[i][j]= 0;    // aqui é para o tabuleiro receber um valor
          printf("%d ",tabuleiro[i][j]);
        } 
      printf("\n");
        }


tabuleiro[2][5]= 3;
tabuleiro[2][3]= 3;
tabuleiro[2][4]= 3;



  


printf("  A B C D E F G H I J\n");
        for(int i =0 ; i<10; i++){
        printf("%d ",i);                                   //aqui sao os numero da linha de 0 a 9 e precisam estar ali para ja executar
         for(int j=0; j<10; j++){
          if(j==i && i > 3 && i<7) {                       // o if é para os 3 diagonal mais para o final 
            tabuleiro[j][i]=3;                             //precisa ter aqui tambem para obter a informação do que vai por 
           }   else if(i==j && i<3){                       //else if é para os 3 primeiros em diagonal
           tabuleiro[j][i]=3;
       //     printf("%d ",tabuleiro[i][j]);               
      //      }
       }
      printf("%d ",tabuleiro[i][j]);                       // sem esse print nao irá executar os 0 e nem os 3 com substituição
      } 
      printf("\n");
     }
// 

      for (int i=0; i<3; i++){
        for (int j=4-i; j<=4+i;j++){  //piramide
          mat[i][j]=3;
        }
      }
        int centro= 5;
        for(int i = -2; i<=2;i++){   //cruz
          if(centro+ i >=0 && centro + i <10){
        mat[centro][centro+i]=3;
        mat[centro + i][centro]=3;
          }
}
   
          for(int i=0; i<10;i++){  //imprimir matriz
            for(int j=0; j<10;j++){
              printf("%d ", mat[i][j]);
            }
            printf("\n");
}




    return 0;
  }