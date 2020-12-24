#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char oku[100], temp[100]="";
    fp=fopen("deneme.txt","r");

    if(fp==NULL){
        printf("Dosya okunamadi.");
    }

    fgets(oku,73,fp);
    strcpy(temp,oku);
    fputs(oku,fp);

    fclose(fp);

    puts(temp);

    FILE *fp2;
    fp2=fopen("hedef.txt","w");

    fputs(temp,fp2);

    fclose(fp2);
    return 0;
}
