#include <stdio.h>

int g; // global g değişkenini tanımlıyoruz


void func()
{
	
	g = 10;
}

int main()
{
	g = 20;
	
	printf("g = %d\n", g);  // ekrana g = 20 yazacak 
	
	func(); // yukardaki func işlevini (fonksiyonunu) çağırıyoruz ve g'ye 10 atıyor
	
	printf("g = %d", g); // ekrana g = 10 yazar
	
	return 0;
}
