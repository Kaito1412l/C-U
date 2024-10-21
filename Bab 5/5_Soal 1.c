#include <stdio.h>
int bilangan_1, bilangan_2;
int main()
{
	printf("\nProgram Menentukan Posisi Dua Bilangan\n");
	printf("\nMasukkan bilangan 1 dan bilangan 2: ");

	int bilangan_1, bilangan_2;
	scanf("%d" "%d", &bilangan_1, &bilangan_2); 
	printf("Bilangan 1: %d\n", bilangan_1);
	printf("Bilangan 2: %d\n", bilangan_2);

	if (bilangan_1 > bilangan_2) {printf("\nBilangan 1 lebih besar dari Bilangan 2\n");}
	else if (bilangan_1 < bilangan_2) {printf("\nBilangan 2 lebih besar dari bilangan 1\n");}
	else {printf("\nKedua Bilangan Sama\n");}

	printf("\nProgram Telah Berakhir\n"); 
		 
	return 0;
}