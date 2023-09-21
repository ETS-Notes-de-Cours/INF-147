#include <stdio.h>

int main() {

    int exercice = 0;

    while(1){
        printf("\n\r Quel exercice voulez-vous essayer? : ");
        scanf("%d",&exercice);
    switch(exercice){
      //1) a)
        case 1 : ;
            int n = 5;
            int p = 1;
            float w = 0;

            while (n > 0) {
                p = p * n;
                w = w + (float)p / n;
                n = n - 1;
                printf("==================\n");
                printf("  n = %d\n", n);
                printf("  p = %d\n", p);
                printf("  w = %.2f\n", w);
                printf("==================\n");
            }

            printf("Final values:\n");
            printf("n = %d\n", n);
            printf("p = %d\n", p);
            printf("w = %.2f\n", w);
        break;  
        //1) b)
        case 2 : ;
            int w1 = 1, w2 = 1, fb = 1;
            int BORNE = 13;

            while (w2 < BORNE) {
                fb = w1+w2;
                w1 = 2*w2;
                w2 = w1+1;
                printf("==================\n");
                printf("  fb = %d\n", fb);
                printf("  w1 = %d\n", w1);
                printf("  w2 = %d\n", w2);
                printf("  BORNE = %d\n", BORNE);
                printf("==================\n");
            }

            printf("Final values:\n");
            printf("  fb = %d\n", fb);
            printf("  w1 = %d\n", w1);
            printf("  w2 = %d\n", w2);
            printf("  BORNE = %d\n", BORNE);
        break;
        //1) c)
        case 3 : ;
            int a = 5701436, c = 0;

            while (a > 0) {
                if ((a%10) > 5){
                    c = c+1;
                }
                a = a/10;
                printf("==================\n");
                printf("  a = %d\n", a);
                printf("  c = %d\n", c);
                printf("==================\n");
            }

            printf("Final values:\n");
            printf("  a = %d\n", a);
            printf("  c = %d\n", c);
        break; 
        //1) d)
        case 4 : ;
            int n1 = 210, n2 = 67900, p2 = 1;
            while (p2) {
               p2=n1%n2;
               n1 = n2;
               n2 = p2;
                printf("==================\n");
                printf("  n1 = %d\n", n1);
                printf("  n2 = %d\n", n2);
                printf("  p = %d\n", p2);
                printf("==================\n");
            }

            printf("Final values:\n");
            printf("  n1 = %d\n", n1);
            printf("  n2 = %d\n", n2);
            printf("  p = %d\n", p2);
        break; 
    }
}
}
