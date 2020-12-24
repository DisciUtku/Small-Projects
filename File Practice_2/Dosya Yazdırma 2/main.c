#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[256];
    FILE *p;

    p=fopen("Epic.txt","w");

    if(p==NULL)
        printf("Dosya olusturulamadi");
    else{
        printf("Yazdirmak istediginiz cumleyi yaziniz.");
        fgets(text,256,stdin);
        fputs(text,p);
        printf("Dosya olusturuldu.");
    }
    return 0;
}
