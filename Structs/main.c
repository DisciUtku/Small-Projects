#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address{
char il[12];
char ilce[12];
char mahalle[12];

};

struct Musteri{

char ad[20];
char soyad[20];
int numara;
int yas;
struct Address adres;
};

int main()
{
  struct Musteri musteri1;

  strcpy(musteri1.ad, "Utku");
  strcpy(musteri1.soyad, "Disci");
  musteri1.numara=249;
  musteri1.yas=20;
  strcpy(musteri1.adres.il, "Izmir");
  strcpy(musteri1.adres.ilce, "Bornova");
  strcpy(musteri1.adres.mahalle, "Evka-3");

  printf("Musteri bilgileri:\n");
  printf("Ad:%s\n", musteri1.ad);
  printf("Soyad:%s\n", musteri1.soyad);
  printf("Numara:%d\n", musteri1.numara);
  printf("Yas:%d\n", musteri1.yas);
  printf("Adres:%s\n%s\n%s\n", musteri1.adres.il,musteri1.adres.ilce,musteri1.adres.mahalle);






    return 0;
}
