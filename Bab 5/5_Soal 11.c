#include <stdio.h>
int main()
{
	printf("\nProgram Identifikasi\n");
	printf("\nProgram Dimulai\n");
	
	char urutan_1[4];
	printf("Masukkan 3 huruf pertama: ");
	scanf("%3s",&urutan_1);

	char urutan_2[4];
	printf("Masukkan 3 huruf kedua: ");
	scanf("%3s",&urutan_2);
	
	printf((urutan_1[0]==urutan_2[0]&&urutan_1[1]==urutan_2[1]&&urutan_1[2]==urutan_2[2])?
	"\nKarakter Dikenali\n":"\nKarakter Tidak Dikenali\n");
	
	printf("\nProgram Telah Selesai\n");
	return 0;
}