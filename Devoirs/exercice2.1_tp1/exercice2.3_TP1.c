#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void){
  int exercice = 0;

  while(1){
      printf("\n\r Quel exercice voulez-vous essayer? : ");
      scanf("%d",&exercice);
  
      switch(exercice){
        case 1 : ;
          int limite_inf, limite_sup;
          printf("\n\r Choisissez une borne inferieur (entier) : ");
          scanf("%d",&limite_inf);
          printf("\n\r Choisissez une borne superieur (entier) : ");
          scanf("%d",&limite_sup);
          printf("          ");

          if(limite_sup > limite_inf){
            int limite_temp = 0;
            int total = 0;

            while(limite_sup >= limite_inf + limite_temp){
              total = total + limite_temp + limite_inf;
              
              if(limite_inf + limite_temp == limite_sup){
                printf("%d",limite_temp + limite_inf );
              }else{
                printf("%d ",limite_temp + limite_inf );
              }
              limite_temp++;

            }
            printf(" = %d", total);
            }
          break;
          case 2 : ;
          int intervale_inf, intervale_sup;
          printf("\n\r Choisissez une borne inferieur (entier) : ");
          scanf("%d",&intervale_inf);
          printf("\n\r Choisissez une borne superieur (entier) : ");
          scanf("%d",&intervale_sup);

          int somme = 0;
          for(int i = intervale_inf; i <= intervale_sup; i++){
            if(sin(i>0.68467711) || (i % 11) == 0){
              somme += i;
            }
          }
          printf("La somme des entier repondant aux conditions est : %d", somme);

          break;
      }
  }
}
