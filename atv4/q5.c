#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x = 2, y=4;
int a, b, c,d,e,f;

int main(int argc, char *argv[]) {
	
	a =x & y;
	printf("a = %d\n",a);
	b =x | y;
	printf("b = %d\n",b);
	c =x ^ y;
	printf("c = %d\n",c);
	d = ~x;
	printf("d = %d\n",d);
	e =x << 3;
	printf("e = %d\n",d);
	f =x >> 1;
	printf("f = %d\n",f);
	

	return 0;
}
