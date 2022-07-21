#include <stdio.h>
int numbers[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };

int main() {
	printf("numbers[] = ");
	for (int i = 0; i < 9; i++)
		printf("%d ", numbers[i]);
	puts("");
	
	int* num = &numbers[4];
	printf("\nContent of num[] after \"int* num = &numbers[4]\":\n");
	for (int i = 0; i < 9; i++)
		if (!((i+1) % 3) == 0)
			printf("num[%2d] = %d\t",  i-4, numbers[i]); // right align because of the minus symbols
		else
			printf("num[%2d] = %d\n", i-4, numbers[i]);
	
	printf("\nDifferent expressions using pointer arithmetic:\n");
	printf("%-9s \t= %d\n", "num[0]", num[0]);	// using %-9 for left alignment and 9 characters in width
	printf("%-9s \t= %d\n", "num[2]", num[2]);
	printf("%-9s \t= %d\n", "num[-2]",num[-2]);		// subtracts 2 from pointer (num points to numbers[2])
	printf("%-9s \t= %d\n", "*(num-2)", * (num - 2));	// Parantheses, because '*' has higher priority than '-'.
	printf("%-9s \t= %d\n", "*(num+3))", * (num + 3));	// Adds 3 to the pointer / same as num[3]
	printf("%-9s \t= %d\n", "*num+3", *num + 3);		// Adds 3 to number. Indirection first, because '*' has highes prio
	printf("%-9s \t= %d\n", "*(num-3)", *(num - 3));
	printf("%-9s \t= %d (index out of bounds)\n", "num[-5]", num[-5]);		// index out of bounds

	return 0;
}