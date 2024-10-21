#include <stdio.h>
int main ()
{
	printf("\nProgram Menentukan Posisi Saklar Lampu\n");

	int Saklar;
	scanf("%d", &Saklar);
	printf("\nPilih angka berikut untuk mengoperasikan lampu:\n");
	printf("Angka 1 untuk ON\nAngka 0 untuk OFF\nMasukkan Pilihan Anda: ");
	
	if (Saklar==1) {printf("\nBot= 'Menyalakan Lampu'\n");}
	else if (Saklar==0) {printf("\nBot= 'Mematikan Lampu'\n");}
	else {printf("\nBot= 'Operasi Error, Silahkan mengulang'\n");}
	 	
	printf("\nProgram Telah Berakhir\n");
	 
	return 0;
}