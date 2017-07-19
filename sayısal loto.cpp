#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	
	
	int a,b;
	srand(time(NULL));
	
	
	printf("***Sayýsal Loto****");
	
	for(b=0; b<6;b++){
		
	
	a=rand()%49;
	
	
	printf(" %d",a);
		
		
		
	}
	
	
	

	
	
	
	
	getch();
}
