#include <stdio.h>
#include <stdlib.h>

int carp(int matris[], int size){

int carpim =1;
int i=0;

for(;i<size;i++){
    carpim*=matris[i];
}

return carpim;
}




int main()
{
int sayilar[5]= {};
int i;
printf("Bes sayilik bir dizi olusturun.");

for(i=0; i<5; i++){
    scanf("%d", &sayilar[i]);
}


printf("Dizideki tum sayilarin carpimi = %d", carp(sayilar, 5));





    return 0;
}
