#include <stdio.h>
int main()
{
	printf("\nProgram Dimulai\n\n");
	
	int u, loop, nilai, total=0;
	printf("masukkan total looping: ");
	scanf("%d",&loop);

	if (loop<=0) {printf("\nlooping harus lebih dari 0\n");return 1;}
	else{for (u=0; u<loop; u++){
	 	 printf("nilai ke-%d: ",u+1);
	 	 scanf("%d",&nilai);
	 	 if(nilai>0){total += nilai;}else{printf("Hanya nilai positif yang akan dijumlahkan\n");}}
	 	 }
 
	printf("\nTotal Penjumlahan akhir: %d\n", total);
	printf("Rata-rata: %.2f\n", (float)total/loop);
	printf("\nProgram Berakhir\n");	
	return 0;
}