//Chaque case correspond à un exercice 

#include <stdio.h>
#include <string.h>
#include <math.h>

void exo_1(void);

int main(void) {
    int exercice = 0;

    while(1){
        printf("\n\r Quel exercice voulez-vous essayer? : ");
        scanf("%d",&exercice);
    
        switch(exercice){
          case 1 : ;
                float nombreDeBoites=0,qtyArticle=36;
                float poidsBoite, poidsTotal, poidsArticle;

                printf("\n\rVeuillez saisir le poids d'un article (en kilogrammes) : ");
                scanf("%f", &poidsArticle);

                printf("\n\rVeuillez saisir le nombre de boites : ");
                scanf("%d", &nombreDeBoites);

                poidsBoite = poidsArticle*qtyArticle;

                poidsTotal = poidsBoite * nombreDeBoites;

                printf("\n\rLe poids d'une boite d'articles est de %.2lf kilogrammes.\n", poidsBoite);
                printf("\n\rLe poids total de %d boites est de %.2lf kilogrammes.\n", nombreDeBoites, poidsTotal);
          break;
          case 2 : ;
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
          
          case 3 : ;
            double rayon_c, hauteur_c, volume_c;
            printf("\n\rEntrez le rayon de la base du cylindre : ");
            scanf("%lf", &rayon_c);
    
            printf("\n\rEntrez la hauteur du cylindre : ");
            scanf("%lf", &hauteur_c);
    
            volume_c = M_PI * (rayon_c*rayon_c) * hauteur_c; //pow(rayon_c, 2) * hauteur_c;
            printf("\n\rVoici le volume de votre cylindre : %lf m^3", volume_c);
            break;
          
          case 4 : ;
              int usrAge;
              printf("Quel age as-tu? : ");
              scanf("%d", &usrAge);
    
              if(usrAge>=18){
                  printf("%d ans, donc tu est un adulte!", usrAge);
              }else{
                  printf("%d ans, donc tu n'est qu'un enfant...", usrAge);
              }
            break;
          
          case 5 : ;
            long int durreeSecondes;
            printf(" Choisissez une duree en secondes : ");
            scanf("%ld", &durreeSecondes);
    
            long int heures = durreeSecondes / 3600; // Une heure a 3600 secondes
            durreeSecondes %= 3600;
            long int minutes = durreeSecondes / 60; // Une minute a 60 secondes
            long int secondes = durreeSecondes % 60; 
    
            printf("\n\r Vous avez choisi une duree de : %02ld:%02ld:%02ld", heures, minutes, secondes);
            break;
          
          case 6 : ;
            float kgCiment, kgSable, kgGravier;
            float volumeMaximal, volumeCiment, volumeSable, volumeGravier;
    
            printf("\n\rEntrez la quantité de ciment (en kg) : ");
            scanf("%f", &kgCiment);
    
            printf("\n\rEntrez la quantité de sable (en kg) : ");
            scanf("%f", &kgSable);
    
            printf("\n\rEntrez la quantité de gravier (en kg) : ");
            scanf("%f", &kgGravier);
    
            volumeCiment = (float)kgCiment / 350.0;
            volumeSable = (float)kgSable / 680.0;
            volumeGravier = (float)kgGravier / 1175.0;
    
            volumeMaximal = volumeCiment;
            if (volumeSable < volumeMaximal) {
                volumeMaximal = volumeSable;
            }
            if (volumeGravier < volumeMaximal) {
                volumeMaximal = volumeGravier;
            }
    
            printf("\n\rLe volume maximal de béton produit est : %.2f m^3", volumeMaximal);
    
            float resteCiment = kgCiment - (volumeMaximal * 350);
            float resteSable = kgSable - (volumeMaximal * 680);
            float resteGravier = kgGravier - (volumeMaximal * 1175);
    
            if (resteCiment > 0 || resteSable > 0 || resteGravier > 0) {
                printf("\n\rQuantités restantes :");
                if (resteCiment > 0) {
                    printf("\n\rCiment : %.2f kg", resteCiment);
                }
                if (resteSable > 0) {
                    printf("\n\rSable : %.2f kg", resteSable);
                }
                if (resteGravier > 0) {
                    printf("\n\rGravier : %.2f kg", resteGravier);
                }
            } else {
                printf("\n\rAucun matériau restant.");
            }
            break;
          
          case 7 : ;
            int nombre, compteur = 0;
            printf("Entrez une serie de nombres (terminez avec -1) :\n\r");
            do {
                scanf("%d", &nombre);
                if (nombre != -1) {
                    compteur++;
                }
            } while (nombre != -1);
            printf("Le nombre de valeurs dans la serie est : %d\n\r", compteur);
            break;
          
          case 8 : ;
            int nb, somme = 0;
            printf("Entrez une serie de nombres (terminez avec -1) :\n");
            do {
                scanf("%d", &nb);
                if (nb != -1 && nb % 2 == 0) {
                    somme += nb;
                }
            } while (nb != -1);
            printf("La somme des nombres pairs dans la serie est : %d\n", somme);
            break;
          
          case 9 : ;
            int nbr, plusGrand = 0;
            printf("Entrez une serie de nombres (terminez avec -1) :\n");
            do {
                scanf("%d", &nbr);
                if (nbr != -1 && nbr > plusGrand) {
                    plusGrand = nbr;
                }
            } while (nbr != -1);
            
            printf("Le nombre le plus grand dans la serie est : %d\n", plusGrand);
            break;
    
            //Question : que faut-il modifier pour que votre programme détermine le nombre le
            //plus petit de la série (il faut créer un variable plusPetit et changer le signe ­> par un <)      
          case 10 : ;
            int nbre;
            float sum=0;
            printf("\n\rChoisir un nombre :");
            scanf("%d", &nbre);
        
            for(int i=1; i<=nbre;i++){
                if(i< nbre){
                    printf("%d/%d + ", i, i+1);
                }else{
                    printf("%d/%d ", i, i+1);
                }
                sum += (float)i/(i+1);
            }
            printf("= %f", sum);
            printf("\n\rLa somme de la serie est : %f", sum);
            break;
          
        }
    }
}
