#define SIZE 50
int x4[SIZE];
int y4[SIZE];

// Register Pointer variables page 207
void try4() {
	int i;
	int* p1, * p2;

	for (i = 0, p1 = x4, p2 = y4; i < SIZE; i++)
		*p1++ = *p2++;
}