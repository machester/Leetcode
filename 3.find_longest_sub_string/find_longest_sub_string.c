#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[] = "dvdf";
//answer is 3
int lengthOfLongestSubstring(char* s) {
	int start = 0;
	int end = 0;
	int length = 0;
	int max_sub_string_temp = 0;
	int max_sub_string = 0;
	int index = 0;
	int found = 0;

	char str_map[200] = {'\0'};

	length = strlen(s);

	if (length == 0)
		return 0;
	else if (length == 1)
		return 1;

	str_map[0] = s[0];	//init data, first number to be comprated
	for (start = 0; start < length; start++)
	{

		for (end = start + 1; end < length; end++)
		{
			printf("----- start = %d ---- end = %d ----- index = %d -----\n", start, end, index);
			int list_index = 0;
			// copare and find the same word.
			while ((1 != found) && ('\0' != str_map[list_index]) && (list_index < strlen(str_map))){
				if (s[end] == str_map[list_index]) {
					found = 1;
					break;
				}
				else{
					list_index++;
				}
			}
			if (found){
				printf("param found : str_map[%d]:%c == s[%d]:%c\n", \
					list_index, str_map[list_index], end, s[end]);
				max_sub_string_temp = end - start;
				//start = end;
				start = start + 1;
				end = start;
				found = 0;
				list_index = 0;
			}
			else{

				index++;
				str_map[index] = s[end];
				max_sub_string_temp = end - start + 1;
				printf("added str_map = %s\n", str_map);
				printf("max_sub_string_temp = %d\n", max_sub_string_temp);

			}
			max_sub_string = max_sub_string < max_sub_string_temp ? max_sub_string_temp : max_sub_string;
			max_sub_string_temp = 0;
			printf("------ max_sub_string = %d ----- max_sub_string_temp  %d -------\n", max_sub_string, max_sub_string_temp);
			printf("str_map = %s\n", str_map);

		}
	}
	printf("max_sub_string = %d\n", max_sub_string);
	printf("str_map : %s\n", str_map);
	return (max_sub_string);
}


int main() {
	printf("------ start ---------\n");


	int length = lengthOfLongestSubstring(s);

	printf("substring length = %d\n", length);

	return 0;
}