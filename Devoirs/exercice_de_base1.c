//Chaque case correspond à un exercice 

#include <stdio.h>
#include <string.h>
#include <math.h>


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
        #define pourcent_tax 0.14975
          
        float pProduit, pAvantTaxe, Taxe, Total;
        int  quantite_v;
   
        printf("\n\rEntrez le prix du produit : ");
        scanf("%f", &pProduit);
   
        printf("\n\rEntrez le nombre de produits acheté : ");
        scanf("%d", &quantite_v);
   
        pAvantTaxe = pProduit * quantite_v;
        Taxe = pAvantTaxe * pourcent_tax; 
        Total = Taxe + pAvantTaxe;
   
        printf("\n\rLe prix avant taxe est : %f ", pAvantTaxe);
        printf("\n\rLa taxe est : %f ", Taxe);
        printf("\n\rLe prix total est : %f ", Total);
        break;
      
      case 3 :
        double rayon_c, hauteur_c, volume_c;
        printf("\n\rEntrez le rayon de la base du cylindre : ");
        scanf("%lf", &rayon_c);

        printf("\n\rEntrez la hauteur du cylindre : ");
        scanf("%lf", &hauteur_c);

        volume_c = M_PI * (rayon_c*rayon_c) * hauteur_c; //pow(rayon_c, 2) * hauteur_c;
        printf("\n\rVoici le volume de votre cylindre : %lf", volume_c);
        break;
      
      case 4 :
          int usrAge;
          printf("Quel age as-tu?");
          scanf("%d", &usrAge);

          if(usrAge>=18){
              printf("%d ans, donc tu est un adulte", usrAge);
          }else{
              printf("%d ans, donc tu n'est qu'un enfant", usrAge);
          }
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
