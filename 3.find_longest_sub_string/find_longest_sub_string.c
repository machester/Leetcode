/**
 * Description: leetcode show out of time limit.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[] = "abaereawhhaagawg";
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

	int list_index = 0;
	for (start = 0; start < length; start++)
	{
		//restart to copare , reset str_map[] and star_map[] index
		memset(str_map, '\0', sizeof(str_map));
		index = 0;

		str_map[0] = s[start];

		for (end = start + 1; end < length; end++)
		{
			// copare and find the same word.
			while ((1 != found) && ('\0' != str_map[list_index]) && (list_index <= strlen(str_map))) {
				if (s[end] == str_map[list_index]) {
					found = 1;
					break;
				}
				else {
					list_index += 1;
				}
			}
			list_index = 0;     //compare finished,index move to arry start position.
			if (found) {
				printf("param found : str_map[%d]:%c == s[%d]:%c\n", \
				       list_index, str_map[list_index], end, s[end]);
				max_sub_string_temp = end - start;
				//start = end;
				//start = start + 1
				end = start;
				found = 0;
				break;
			}
			else {

				index++;
				str_map[index] = s[end];
				max_sub_string_temp = end - start + 1;
				printf("added str_map = %s\n", str_map);
				printf("max_sub_string_temp = %d ------- str_map : %s\n", max_sub_string_temp, str_map);
			}
		}
		printf("-------------------signal loop finished --------------\n");
		max_sub_string = max_sub_string < max_sub_string_temp ? max_sub_string_temp : max_sub_string;
		max_sub_string_temp = 0;
		printf("str_map : %s\n", str_map);
		printf("------ max_sub_string = %d ----- str_map : %s -------\n", max_sub_string, str_map);
		printf("str_map = %s\n", str_map);
	}
	printf("max_sub_string = %d\n", max_sub_string);

	return (max_sub_string);
}

int main() {
	int length = lengthOfLongestSubstring(s);

	printf("substring length = %d\n", length);

	return 0;
}