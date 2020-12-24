#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{

char ad[12];
char soyad[12];
int numara;

};

int main()
{

    struct ogrenci ogrenci1;
    struct ogrenci *tut;

    strcpy(ogrenci1.ad,"Utku");
    strcpy(ogrenci1.soyad,"Disci");
    ogrenci1.numara = 190601068;

    tut =&ogrenci1;

    printf("%s  %s  %d\n\n", ogrenci1.ad, ogrenci1.soyad, ogrenci1.numara);

    printf("Pointerla gosterim:\n%s   %s  %d", tut->ad,tut->soyad,tut->numara);

    return 0;
}
