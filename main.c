#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main(){
	int vize, final;
	float ort;

	printf("Vize notunuz : ");	scanf("%d", &vize);
	printf("Final notunuz: ");	scanf("%d" ,&final);

	ort = (float)(vize*0.3 + final* 0.7);
	printf("Ortalamaniz: %.1f \n" ,ort);

	if(ort<50)
		printf("Notunuz 'FF' - Kaldýnýz.");
	else if(ort>=50 && ort<60)
		printf("'DD' ile gectiniz");
	else if (ort>=60 && ort<70)
		printf("'CC' ile gectiniz.");
	else if (ort>=70 && ort<85)
		printf("'BB' ile gectiniz.");
	else
		printf("'AA' ile gectiniz.");
}
