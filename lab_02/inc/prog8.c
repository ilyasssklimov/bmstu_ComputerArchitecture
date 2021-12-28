#define len 8
#define enroll 2
#define elem_sz 4


int _x[] = { 1, 2, 3, 4, 5, 6, 7, 8 };


void _start() {
	int *x1 = _x;
	int *x20 = x1 + len;
	int x2, x3, x31 ;
	
	do {
		x2 = x1[0];
		x3 = x1[1];
		
		x1 += enroll;
		x31 += x2;
		x31 += x3;
	} while (x1 != x20);
	x31++;
	
	while (1) {}
}
