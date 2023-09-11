#include<stdio.h>
#include<string.h>

unsigned int test = 1; 


int main() {
    switch(test){
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
    }
    
}
