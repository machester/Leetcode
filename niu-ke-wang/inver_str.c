/******************************************************************************************************
 * 
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
输入描述:
输入N个字符
输出描述:
输出该字符串反转后的字符串

input: syewwtsgprrkebafptmvicizqrsszltspftnbtkeairfpuumqzruiacrjvvvppcffjktpuctaifytzcityczvuhnekfuxfhxflldchzgzaneldaehovlwftesmthzdbsdzopkexmmfidcckjfpvuaagpeeyoeqwdzzomfumnfzmebooaaofhwvnmzikmrnhvvcoxukfdmbntszwvevzntzhmvntcrnsublqfrueygjzdeytkftppibxyhbqgwmlcpvqrm
output: mrqvpclmwgqbhyxbipptfktyedzjgyeurfqlbusnrctnvmhztnzvevwzstnbmdfkuxocvvhnrmkizmnvwhfoaaoobemzfnmufmozzdwqeoyeepgaauvpfjkccdifmmxekpozdsbdzhtmsetfwlvoheadlenazgzhcdllfxhfxufkenhuvzcyticztyfiatcuptkjffcppvvvjrcaiurzqmuupfriaektbntfpstlzssrqzicivmtpfabekrrpgstwweys

*******************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE            1001

char * invert_func(char *str, int len)
{
    char tmp;
    char *ptr_head = str;
    char *ptr_tail = str + len - 1;
    char *head = str;
    if(0 == *str || NULL == str)
        return NULL;
    if(1 == len)
        return str;
    while (*ptr_head != *ptr_tail) {
        tmp = *ptr_tail;
        *ptr_tail = *ptr_head;
        *ptr_head = tmp;
        
        ptr_head++;
        ptr_tail--;
    }
    return str;
}

int main(void)
{
    char input_str[MAX_SIZE] = {0};
    char *invert_str;
    int str_len;
    
    // printf("Please input number:");
    scanf("%s", input_str);
    str_len = strlen(input_str);
    // printf("input str: str_len = %d, str: %s ----\n", str_len, input_str);
    invert_str = invert_func(input_str, str_len);
    printf("%s\n", invert_str);
    return 0;
}


