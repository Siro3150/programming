#include <stdio.h>

int nizi(int);
int main() {
	int i, j, n;
	
	for (i=-7; i<=7; i++) 
	{
		n=nizi(i);
		printf("%2d ",i);
		for (j=1; j<=n; j++ ) printf("*");
		printf("\n");
		
	}
	
	return 0;
}


/* グラフを描く関数*/

int nizi(int x) {
	return (x*x+4);
}