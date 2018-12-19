#include <stdio.h>
#include <string.h>

void show_string(char * ss)
{
    for(char *item = ss; *item != '\0'; item++) {
        printf("%c ", *item);
    }
    printf("\n");
}
char* addBinary(char* a, char* b) {
    char *result = NULL;
    
    return result;
}

int main(int argv, char **argc)
{
    char * a = "1111";
    char * b = "11";
    printf("string a is : ");
    show_string(a);
    printf("string b is : ");
    show_string(b);
    char * ss = addBinary(a, b);
    return 0;
}
