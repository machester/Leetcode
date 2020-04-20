
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE            20

unsigned char str[MAX_SIZE];

unsigned char * invert_func(unsigned int num)
{
    
    unsigned int index = 0;
    unsigned int n = num;
    while(n % 10)
    {
        str[index] = (n % 10) + '0';
        n /= 10;
        index++;
    }
    return str;
}

int main(void)
{
    unsigned int input_num;
    unsigned char *invert_str;
    
    // printf("Please input number:");
    scanf("%d", &input_num);
    invert_str = invert_func(input_num);
    printf("%s\n", invert_str);
    return 0;
}


