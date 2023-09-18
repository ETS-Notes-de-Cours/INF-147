#include <stdio.h>
#include <string.h>

int exercice = 1;

int main() {
    switch(exercice){
      case 1 :
        int nombreDeBoites,qtyArticle=36;;
        float poidsBoite, poidsTotal, poidsArticle;

        printf("\n\rVeuillez saisir le poids d'un article (en kilogrammes) : ");
        scanf("%f", &poidsArticle);

        printf("\n\rVeuillez saisir le nombre de boîtes : ");
        scanf("%d", &nombreDeBoites);

        poidsBoite = poidsArticle*qtyArticle;

        poidsTotal = poidsBoite * nombreDeBoites;

        printf("\n\rLe poids d'une boite d'articles est de %.2lf kilogrammes.\n", poidsBoite);
        printf("\n\rLe poids total de %d boites est de %.2lf kilogrammes.\n", nombreDeBoites, poidsTotal);
        break;
      
      case 2 :
        break;
      
      case 3 :
        break;
      
      case 4 :
        break;
      
      case 5 :
        break;
      
      case 6 :
        break;
      
      case 7 :
        break;
      
      case 8 :
        break;
      
      case 9 :
        break;
      
      case 10 :
        break;
      
    }
}
