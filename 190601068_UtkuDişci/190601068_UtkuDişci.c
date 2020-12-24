#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   FILE *ftek;
   FILE *fcift;

    int arr[100];
    int i;
    int *parr;
    parr=arr;

    srand(time(NULL));

    for(i=0;i<100;i++)
    {
        parr[i]=rand()%100;
    }

    ftek=fopen("tekadres.txt","w");

    if(ftek==NULL)
        printf("Dosya acilamadi");

    fcift=fopen("ciftadres.txt","w");

    if(fcift==NULL)
        printf("Dosya acilamadi.");


    for(i=0;i<100;i++)
    {
     if(parr[i]%2 == 0)
    {
        fprintf(fcift,"%p\n",parr[i]);
    }

    else
    {
        fprintf(ftek,"%p\n",parr[i]);
    }
    }


    return 0;
}
