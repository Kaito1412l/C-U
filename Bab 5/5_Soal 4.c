#include <stdio.h>
int main ()
{
	printf("\nProgram Menentukan Huruf Vokal dan Huruf Konsonan\n");
	
	char huruf;
	printf("\nMasukkan Sebuah Huruf: ");
	scanf(" %c",&huruf);
	
	if (huruf=='a' || huruf=='A' || 
		huruf=='i' || huruf=='I' || 
		huruf=='u' || huruf=='U' || 
		huruf=='e' || huruf=='E' || 
		huruf=='o' || huruf=='O')
		{printf("\nHuruf %c merupakan Huruf Vokal\n",huruf);}
	else {printf("\nHuruf %c merupakan Huruf Konsonan\n",huruf);}
	
	printf("\nProgram Telah Berakhir\n");
	
	return 0;	
}