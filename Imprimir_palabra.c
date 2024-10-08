#include <string.h>
#include <stdio.h>

int main(){
    char ca [10];
    char se [10];
    char cu [10];
    char sa [10];
    puts("Ingresa una palabra:");
    scanf("%s", &ca );
    puts("Ingresa otra palabra: ");
    scanf("%s", &cu);

    strcpy (sa, cu);
    strcpy (se, ca);
    printf("Palabra_1: %s \n", ca);
    printf("Palabra_1: %s \n", sa);

    
    printf("Palabra_2: %s\n", cu);
    printf("Palabra_2: %s ", se);
}
