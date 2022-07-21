#define SIZE 50
int x5[SIZE];
int y5[SIZE];

void try5() {
	register int* p1, * p2;

	for (p1 = x5, p2 = y5; p1 < &x5[SIZE];)
		*p1++ = *p2++;
}