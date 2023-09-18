#include <stdio.h>
#include <string.h>

int main() {
    char name[] = {};
    printf("Who is you?");
    scanf("%s", &name);
    printf("\r\nYou are not welcome here %s", name);
    printf("\r\nGO AWAY!");
}
