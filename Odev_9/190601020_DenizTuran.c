#include <stdio.h>
#include <stdlib.h>
void Sifrele(char anahtarOkunan)
{

 fp1=fopen("orijinal.txt","r");
if(fp1==NULL){
    printf("Dosya bulunamadi...\n");
    exit(1);
 char x=fgetc(fp1);
 while(x!=EOF){
    x + char anahtarOkunan;
 }
}

void SifreCoz(char anahtarOkunan)
{
    fp4=fopen("yeniorijinal.txt","r");
    if(fp4==NULL){
    printf("Dosya bulunamadi...\n");
    exit(1);
    char y=fgetc(fp3);
    while(y!=EOF){
        y - char anahtarOkunan;
    }

}

int main()
{

char anahtarOkunan;

FILE*fp1;
fp1=fopen("orijinal.txt","r");
if(fp1==NULL){
    printf("Dosya bulunamadi...\n");
    exit(1);
}

FILE*fp2;
fp2=fopen("anahtar.txt","r");
if(fp2==NULL){
    printf("Dosya bulunamadi...\n");
    exit(1);
}

while(anahtarOkunan!=EOF){
anahtarOkunan=fgetc(fp2);
printf("%c",anahtarOkunan);
}

FILE*fp3;
fp3=fopen("sifreli.txt","w");
if(fp3==NULL){
    printf("Dosya bulunamadi...\n");
    exit(1);
}

Sifrele(char anahtarOkunan);

while((x != EOF)){
    fputc(x,fp3);
}

FILE*fp4;
fp4=fopen("yeniorijinal.txt","w");
if(fp4==NULL){
    printf("Dosya bulunamadi...\n");
    exit(1);

SifreCoz(char anahtarOkunan);

while((y != EOF)){
    fputc(y,fp4);
}

fclose(fp1);
fclose(fp2);
fclose(fp3);
fclose(fp4);
    return 0;
}

































