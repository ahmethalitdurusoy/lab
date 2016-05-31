#include <stdio.h>

/* Coded By. roissy */

int toplama(int a, int b){
	int c;
	c = a+b;
	return c;
}

int carpma(int a, int b){
	int c;
	c = a*b;
	return c;
}

int cikarma(int a, int b){
	int c;
	c = a-b;
	return c;
}

int bolme(int a, int b){
	int c;
	c = a/b;
	return c;
}

int main(int argc, char *argv[]) {
	
	int sayi1, sayi2, sonuc, sec;
	printf("Toplama icin 1\n");
	printf("Cikarma icin 2\n");
	printf("Carpma icin 3\n");
	printf("Bolme icin 4 giriniz\nGir >>");
	scanf("%d", &sec);
	
	if (sec >= 5){
		printf("Gecerli bir deger giriniz\n");
		printf("Program sonlandi.\n");
		return 0;
	}
	
	if (sec <= 0) {
		printf("Gecerli bir deger giriniz\n");
		printf("Program sonlandi.\n");
		return 0;
	}
	
	printf("Sayilari gir >>");
	scanf("%d %d", &sayi1, &sayi2);

	if(sec == 1) {
		sonuc = toplama(sayi1, sayi2);
	}
	
	if(sec == 2) {
		sonuc = cikarma(sayi1, sayi2);
	}
	
	if(sec == 3) {
		sonuc = carpma(sayi1, sayi2);
	}
	
	if(sec == 4){
		sonuc = bolme(sayi1, sayi2);	
	}
	
	printf("Sonuc >> %d\n", sonuc);
	printf("Program sonlandi.\n");
	return 0;

}
