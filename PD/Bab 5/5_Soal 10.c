#include <stdio.h>
int main()
{
	printf("\nProgram Identifikasi\n");
	printf("\nProgram Dimulai\n");
	
	char urutan[3];
	printf("Masukkan 2 huruf: ");
	scanf("%2s",&urutan);
	
	printf((urutan[0]=='a'&&urutan[1]=='b')||(urutan[0]=='b'&&urutan[1]=='a')?
	"\nSilahkan Masuk\n":"\nIdentifikasi Gagal\n");
	
	printf("\nProgram Telah Selesai\n");
	return 0;
}

