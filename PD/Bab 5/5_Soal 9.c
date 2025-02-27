#include <stdio.h>
int main()
{
	printf("\nProgram Urutan ABCD\n");
	printf("\nProgram Dimulai\n");
	
	char urutan[5];
	printf("Masukkan 4 huruf: ");
	scanf("%4s",&urutan);
	
	printf((urutan[0]=='a' &&urutan[1]=='b' && urutan[2]=='c' && urutan[3]=='d')?
	"\nProses Berhasil\n":"\nMasukkan kode lagi\n");
	
	printf("\nProgram Telah Selesai\n");
	return 0;
}

