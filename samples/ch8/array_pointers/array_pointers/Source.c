#include <stdio.h>
int vector[5];

void print_array(int** array, int i, int j);
int main() {
	int vector2[5];
	static int vector3[5];
	printf("Unintialized variables:\n");
	printf("Global: %d\n", vector[0]);
	printf("Local: %d\n", vector2[0]);
	printf("Static: %d\n", vector3[0]);

	int matrix[6][10];
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 10; j++)
			matrix[i][j] = i * 10 + j;
	int* mp;
	mp = &matrix[3][8];
	printf("First value is %d\n", *mp);
	printf("Second value is %d\n", *++mp);
	printf("Third value is %d\n", *++mp);
	printf("\nmatrix[2][5] = %d\n", matrix[2][5]);
	printf("*(*(matrix+2)+5) = %d\n", *(*(matrix + 2) + 5));
	*(*(matrix + 2) + 5) = 69;
	printf("\nUsing point notation as L-value, with '*(*(matrix+2)+5) = 69': matrix[2][5] = %d\n", matrix[2][5]);

	// Kansellert forsøk på bruk av multidimensional array. Skal teste ut 8.2.5:
	// Multidimensional Arrays as Function Arguments (s 223), for å finne ut hvordan 
	// jeg kan bruke multidimensional arrays som parameter/argument.
	//print_array(matrix, 3, 3);

	return 0;
}