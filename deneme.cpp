#include <stdio.h>

int g; // global g de�i�kenini tan�ml�yoruz


void func()
{
	
	g = 10;
}

int main()
{
	g = 20;
	
	printf("g = %d\n", g);  // ekrana g = 20 yazacak 
	
	func(); // yukardaki func i�levini (fonksiyonunu) �a��r�yoruz ve g'ye 10 at�yor
	
	printf("g = %d", g); // ekrana g = 10 yazar
	
	return 0;
}
