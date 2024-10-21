#include <stdio.h>
int main()
{
	printf("\nProgram Mencari Bilangan Kelipatan 4 dan 5\n\n");
	
	int bilangan;
	printf("Masukan sebuah bilangan: ");
	scanf("%d", &bilangan);
	
	if (bilangan %4 == 0 && bilangan %5==0){printf("Angka Valid\n");}
		else {printf("Angka Tidak Valid\n");}
				
	printf("\nProgram Telah Berakhir\n");
	return 0;
}