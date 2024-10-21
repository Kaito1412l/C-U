#include <stdio.h>
int main()
{
	printf("\nProgram Dimulai\n\n");
	
	int u, loop, nilai, total=0;
	printf("masukkan total looping: ");
	scanf("%d",&loop);

	for (u=0; u<loop; u++){
	 printf("nilai ke-%d: ",u+1);
	 scanf("%d",&nilai);
	 total += nilai;}
	 
	printf("\nTotal Penjumlahan akhir: %d\n", total);
	printf("\nProgram Berakhir\n");	
	return 0;
}