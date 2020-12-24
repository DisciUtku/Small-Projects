#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void siralaveyazdir(int dizi[], int a){
int temp;
int i, j;

   for (i = 0; i < a; i++)
    {

       for (j = 0; j < a-i-1; j++)
       {
           if (dizi[j] > dizi[j+1])
            {   temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;}

            }
   }

           printf("En kucuk sayi:%d\n",dizi[0]);
            printf("En buyuk sayi:%d\n",dizi[6]);
}

int main()
{
   int sayi[7];
    int i;

   FILE *fp;

   fp = fopen("sayilar.txt","r");

   if(fp== NULL){
    printf("Dosya okunamadi.");
    return 0;
    }

    else{

        for(i=0; i<7; i++){
        fscanf(fp,"%d", &sayi[i]);

        }
   siralaveyazdir(sayi,7);
    }

    return 0;
}
