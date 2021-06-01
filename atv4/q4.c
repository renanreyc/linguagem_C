#include <stdio.h>
#include <stdlib.h>

/* Questão 4*/

int x, y, z;

int main(int argc, char *argv[]) {
	x = y = 10;
	printf("%d e %d\n",x,y);
	z = ++ x;
	printf("%d e %d\n",x,z);
	x = -x;
	printf("%d\n",x);
	y++;
	printf("%d\n",y);
	x = x + y - (z--);
	printf("%.2f , %d e %d\n",x,y,z);
	
	system("pause");
	return 0;
}
