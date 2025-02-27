#include <stdio.h>
int main()
{
	int soal_a,soal_b,soal_c,soal_d,soal_e,soal_f,soal_g;
	soal_a= 2 + 3 * 5;
	soal_b= 10 - 7 + 3 % 6;
	soal_c= 3 % 7 /2 - 1;
	int d=5;
	soal_d= ++d * 3 / 6 % 7;
	int e=2;
	soal_e= 3 * e++ - 4 * 7;
	soal_f= 6 << 2;
	soal_g= 12 >> 3;
	
	printf("Hasil Ekspresi Soal a= %i\n", soal_a);
	printf("Hasil Ekspresi Soal b= %i\n", soal_b);
	printf("Hasil Ekspresi Soal c= %i\n", soal_c);
	printf("Hasil Ekspresi Soal d= %i\n", soal_d);
	printf("Hasil Ekspresi Soal e= %i\n", soal_e);
	printf("Hasil Ekspresi Soal f= %i\n", soal_f);
	printf("Hasil Ekspresi Soal g= %i\n", soal_g);
	return 0;
}

