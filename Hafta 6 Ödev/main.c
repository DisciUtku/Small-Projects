#include <stdio.h>
#include <stdlib.h>


/*Merhabalar hocam. Ödevimde küçük bir sýkýntý var onu buraya not alayým dedim.
Diziyi fonksiyona gönderirken call by reference tekniðini kullanmayý denedim ancak
bir türlü baþaramadým. Sanýrým bu yüzden de en büyük elemaný istediðimde bana rastgele bir adres veriyor.
Bunun dýþýnda kodda bir problem olmadýðýný düþünüyorum. Teþekkürler.    */


double *maxAdr (double a[], int size);


int main(){
    int i;
    double array[6]={1.1,3.3,7.1,5.4,0.2,-1.5};

    printf("Value \t\t Adress\n");
    printf(" ****\t\t********\n");

    for(i=0; i<6; i++){
        printf("array[%d] %.1f    %u\n", i, array[i], &array[i]);
    }

    printf("\n\n\nThe address of the largest element: %u\n\n\n", maxAdr(array, 6));


    return 0;
}

double *maxAdr(double a[], int size){

    int temp, i, j;
    int *address;

    for(i=0; i<size; i++){

        for(j=0; j<size-i-1; j++){

        if(a[j]>a[j+1])
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }


 address = &a[6];


    return address;
}
