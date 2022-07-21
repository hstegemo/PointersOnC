#define SIZE 50
int x2[SIZE];
int y2[SIZE];
int i;
int* p1, * p2;

// Switching to pointers page 205
void try2() {
	for (p1 = x2, p2 = y2; p1 - x2 < SIZE;)
		*p1++ = *p2++;
}