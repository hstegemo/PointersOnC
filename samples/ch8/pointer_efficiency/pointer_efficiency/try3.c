#define SIZE 50
int x3[SIZE];
int y3[SIZE];
int i;
int* p1, * p2;

// Brining Back the Counter page 206
void try3() {
	for (i = 0, p1 = x3, p2 = y3; i < SIZE; i++)
		*p1++ = *p2++;
}