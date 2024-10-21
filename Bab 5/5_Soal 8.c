#include <stdio.h>
int main ()
{
	printf("\nProgram Penjumlahan Harga\n");
	printf("\nMemulai Program\n");
	
	int barang_1,barang_2,barang_3,total_harga,diskon;
	printf("Masukkan Harga barang Ke-1: ");
	scanf("%d",&barang_1);
	printf("Masukkan Harga barang Ke-2: ");
	scanf("%d",&barang_2);
	printf("Masukkan Harga barang Ke-3: ");
	scanf("%d",&barang_3);
	
	total_harga = barang_1 + barang_2 + barang_3;
	diskon = total_harga*0.1;
	total_harga -= (total_harga>10000) ? (diskon):(0); 
	
	printf("\nTotal harga yang harus dibayarkan: %d\n",total_harga);
	printf("\nProgram Berhasil Dieksekusi\n");
	
	return 0;
}