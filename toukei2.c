#include <stdio.h>
#define LOW -10
int main()
{
	int max, ten;
	max = LOW;
	while(printf("得点\n"),scanf("%d",&ten)!=EOF){
		if (max < ten)max=ten;
	}	
	printf("最高点 ＝ %d\n",max);
	return 0;
}