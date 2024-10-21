#include <stdio.h>
int main()
{
	printf("\nProgram Penanggalan\n\n");
	
	int tanggal, bulan, tahun;
	char pemisah;
	printf("Masukkan tanggal dengan format DD-MM-YYYY: ");
	scanf("%d%c%d%c%d",&tanggal,&pemisah,&bulan,&pemisah,&tahun);
	
	if (pemisah != '-'){printf("Format salah, Gunakan '-' sebagai pemisah, silahkan mengulang!\n");
		return 1;}
	
	if (tanggal<1 || tanggal>31){printf("Tanggal tidak valid, silahkan mengulang!\n");return 1;}
	
	char *nama_bulan;
	switch(bulan){
		case 1: nama_bulan="Januari";break;
		case 2: nama_bulan="Februari";break;
		case 3: nama_bulan="Maret";break;
		case 4: nama_bulan="April";break;
		case 5: nama_bulan="Mei";break;
		case 6: nama_bulan="Juni";break;
		case 7: nama_bulan="Juli";break;
		case 8: nama_bulan="Agustus";break;
		case 9: nama_bulan="September";break;
		case 10: nama_bulan="Oktober";break;
		case 11: nama_bulan="November";break;
		case 12: nama_bulan="Desember";break;
		default:printf("Bulan tidak valid, silahkan mengulang!\n");return 1;}
	
	printf("\nTanggal: %d %s %d\n", tanggal,nama_bulan,tahun);
		
	printf("\nProgram Berhasil Dieksekusi\n");	
	return 0;	
}