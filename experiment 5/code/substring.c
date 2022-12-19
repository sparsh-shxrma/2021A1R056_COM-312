#include <stdio.h>
int main()
{
	char str[50]="Welcome to Operating System Lab";

	// substring extraction
    	printf("Extracting the substring from index 0 up to index 10:-");
	{
	for (int i = 0; i<=10; i++) {
		if (str[i] != ' ') {

			printf("%c", str[i]);
		}
	}
	}
	printf("\n\n");
	printf("Extracting the substring from index -3 up to index 4:-");
	{
	for (int i = -3; i<=4; i++) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
	}
	printf("\n\n");
	 printf("Extracting the substring from index 10 up to index 24:-");
	{
	for (int i = 10; i<=24; i++){
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
	}
	 printf("\n\n");
	return 0;
}
