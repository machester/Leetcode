#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[] = "aaweegawegawgaaga";

int lengthOfLongestSubstring(char* s) {
    int start = 0;
    int end = 0;
    int length = 0;
    int max_sub_string_temp = 0;
    int max_sub_string = 0;
    int index = 0;
    int found = 0;
    char *str_map = (char *)malloc(sizeof(char) * 30);

    length = strlen(s);
    printf("string length = %d\n", length);

    if (length == 0)
        return 0;
    else if (length == 1)
        return 1;

    for (start = 0; start < length; start++)
    {
        str_map[index] = s[start];
        for (end = start + 1; end < length; end++)
        {
            while ((1 != found) || ('\0' != *str_map))
            {
                if (s[end] == *str_map) {
                    found = 1;
                    break;
                }
                str_map++;
            }
            printf("str_map = %s", str_map);
            max_sub_string_temp = end - start;
            if (found)
                break;
        }
        index++;
        max_sub_string = max_sub_string < max_sub_string_temp ? max_sub_string_temp : max_sub_string;
        max_sub_string_temp = 0;
        printf("------ max_sub_string = %d ----- max_sub_string_temp  %d -------\n", max_sub_string, max_sub_string_temp);
    }
    printf("max_sub_string = %d\n", max_sub_string);
    return max_sub_string;
}


int main() {
    printf("------ start ---------\n");


    int length = lengthOfLongestSubstring(s);

    printf("substring length = %d\n", length);

    return 0;
}