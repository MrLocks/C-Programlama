#include <stdio.h>

int g; // global g deðiþkenini tanýmlýyoruz


void func()
{
	
	g = 10;
}

int main()
{
	g = 20;
	
	printf("g = %d\n", g);  // ekrana g = 20 yazacak 
	
	func(); // yukardaki func iþlevini (fonksiyonunu) çaðýrýyoruz ve g'ye 10 atýyor
	
	printf("g = %d", g); // ekrana g = 10 yazar
	
	return 0;
}
