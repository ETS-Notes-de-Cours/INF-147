#include<stdio.h>
#include<string.h>

unsigned int testCase = 1;
 
int main() {
    switch(testCase){
        case 0 :
            printf("Hello World")
            break
            
        case 1 :
            unsigned char string[] = "Hello String";
            printf("%s", string);
            break;
            
        case 2 :
            unsigned char string[] = "Hello Characters";
            for(int i = 0; i < sizeof(string); i++){
                printf("%c",string[i]);
            }
            break;
        
        case 3 :
            unsigned int number = 465;
            printf("%i + %u = %d", number/2, number/2, number);
            break;

        case 4 :
            float decimals = 3.50
            printf("Floating point printing : %2.5f", decimals);
            break;
    }
    
}
