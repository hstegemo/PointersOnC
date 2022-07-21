#include <stdio.h>
// Subscipts has higher priority than inderection operator.
// Without them, it would be 'int *arr[]', which is a 
// array of pointer to Integers.
void print_array(int(*arr)[3], int x, int y);

int main() {
	int matrix[2][3];
	matrix[0][0] = 100;
	matrix[0][1] = 101;
	matrix[0][2] = 102;
	matrix[1][0] = 110;
	matrix[1][1] = 111;
	matrix[1][2] = 112;

	int matrix2[2][3] = {{1000, 1001, 1002},{1010, 1011, 1012}};
	
	print_array(matrix, 2, 3);	// Best to use matrix only. matrix[0][0] works, 
										// but generates a warning.
	puts("");
	print_array(matrix2, 2, 3);
	puts("");

	// These ones generates a warning in visual studio:
	/*
	puts("These generates warnings:");
	print_array(&matrix2[0][0], 1, 1);	// warning: print_array: different types for formal and actual parameter 1
	print_array(&matrix, 1, 1);
	*/
	
	// All of these prints the same address, but their meaning is different and the last two
	// would generate a warning (in VS 2022) if used as argument for a multidimensional array in
	// a function call:
	printf("Addresses: matrix2=%p, &matrix2=%p and &matrix2[0][0]=%p\n", matrix2, &matrix2, &matrix2[0][0]);
	return 0;
}

void print_array(int (* arr)[3], int x, int y) {
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			printf("%d\n", arr[i][j]);
}