#include "stdio.h"
#include "string.h"

char const *arr[] = {

	"a - str1",
	"b - str2",
	"c - str3",
	"d - str4",


};

int main(void)
{
	char **pArry = arr;
	int length = strlen(arr);
	printf("string length = %d\n", length);

	for(int i = 0; i < strlen(arr); i++)
	{
		fprintf(stdout, "%s", *(pArry + i));
		printf("\n");
	}

	printf("------ END ---------\n");

}
