#include <stdio.h>

int main() {
    int exercice = 0;
    while(1){
        printf("\n\r Quel exercice voulez-vous essayer? : ");
        scanf("%d",&exercice);

        switch(exercice){
          //2) a)
            case 1 : ;
                int borneInf, borneSup;
                // Demander à l'utilisateur de saisir la borne inférieure
                printf("Entrez la borne inferieure : ");
                scanf("%d", &borneInf);
                // Demander à l'utilisateur de saisir la borne supérieure
                printf("Entrez la borne superieure : ");
                scanf("%d", &borneSup);

                // Vérifier si la borne supérieure est plus grande que la borne inférieure
                if (borneSup >= borneInf) {
                    printf("Les valeurs entre %d et %d sont :\n", borneInf, borneSup);
                   // Utiliser une boucle pour afficher les valeurs entre les bornes
                    for (int i = borneInf; i <= borneSup; i++) {
                        printf("%d ", i);
                    }
                    printf("\n");
                } else {
                    printf("La borne superieure doit etre plus grande que la borne inferieure.\n");
                }
            break; 
            //2) b)
            case 2 : ;
                int A, digit;
                printf("Entrez un entier A : ");
                scanf("%d", &A);
                printf("Chiffres de droite a gauche dans %d : ", A);
                //Utiliser une boucle pour extraire et afficher les chiffres
                while (A != 0) {
                    digit = A % 10; // Obtient le chiffre le plus à droite
                    printf("%d ", digit);
                    A = A / 10;     // Supprime le chiffre le plus à droite
                }
                printf("\n");
            break;   
       }
    }
}
