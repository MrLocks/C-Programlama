#include <stdio.h>

int main()
{
	
	// derleyici ilk once dar bilinirlik alan�na bakar ve x in kar��l���n� arar
	int x = 100;
	
	printf("x = %d\n",x);
	{
		
		int x = 200;
		printf("x = %d\n",x);
		{
			int x = 300;
			printf("x = %d",x);
			
		}
	}
	
	return 0;
}
