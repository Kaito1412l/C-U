#include <stdio.h>
int main()
{
	printf("\nProgram Menghitung Tinggi Air\n");
	
	float tinggi_air;
	printf("\nMasukkan Tinggi Air (dalam satuan meter): "); 
	scanf("%f",&tinggi_air);
	
	if (tinggi_air <= 500.0) {printf("\nStatus: AMAN\n");}
	else if (tinggi_air > 500.1 && tinggi_air <= 600.0) {printf("\nStatus: WASPADA\n");}
	else if (tinggi_air > 600.1 && tinggi_air <= 650.0) {printf("\nStatus: SIAGA 2\n");}
	else {printf("\nStatus: SIAGA 1\n");}
	
	printf("\nProgram Telah Selesai\n"); 
	
	return 0;
}