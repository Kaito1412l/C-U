#include <stdio.h>
int main()
{
	printf("\nProgram Validasi Jam\n\n");
	
	int jam, menit, detik;
	char pemisah;
	printf("Masukkan tanggal dengan format HH:MM:SS : ");
	scanf("%d%c%d%c%d",&jam,&pemisah,&menit,&pemisah,&detik);
	
	if (pemisah != ':'){printf("Format salah, Gunakan ':' sebagai pemisah, silahkan mengulang!\n");return 1;}
	if (jam<0 || jam>=24) {printf("Jam yang dimasukkan tidak VALID, silahkan mengulang\n");return 1;}
	if (menit<0 || menit>=60) {printf("Menit yang dimasukkan tidak VALID, silahkan mengulang\n");return 1;}
	if (detik<0 || detik>=60) {printf("Detik yang dimasukkan tidak VALID, silahkan mengulang\n");return 1;}
	
	printf("\nJam dinyatakan VALID: %02d:%02d:%02d\n", jam,menit,detik);
		
	printf("\nProgram Berhasil Dieksekusi\n");	
	return 0;	
}