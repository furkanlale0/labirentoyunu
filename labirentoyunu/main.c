#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  double oklid(double kendix, double kendiy, double x, double y) {
    return sqrt(pow((x - kendix), 2) + pow((y - kendiy), 2));
     }

int main()
{
    int genislik;
    int yukseklik;
    int kisisayisi;

    int i;
    printf("-------OYUNUMUZA HOSGELDINIZ--------\n\n\n\n");
    printf("labirent genisiligini giriniz: ");
    scanf("%d",&genislik);
    printf("labirent yuksekligini giriniz: ");
    scanf("%d",&yukseklik);


   while(1){

    printf("labirente yerlestirmek istediginiz kisi sayisi: ");
    scanf("%d",&kisisayisi);
    if(kisisayisi<0){
        printf("kisi sayisi pozitif degerli bir sayi olmalidir,lutfen tekrar giris yapiniz! \n");
        continue;
    }else{
        break;
    }
    }
    int genis[kisisayisi],yuksek[kisisayisi];
    printf("labirente yerlestirdiginiz kisileirn koordinatlarini giriniz: \n");
    for(i=1;i<=kisisayisi;i++){
        printf("\n%d . kisinin koordinatlari:\nx: ",i);
        scanf("%d",&genis[i]);
        printf("y: ");
        scanf("%d",&yuksek[i]);
        if(genis[i]>=genislik || yuksek[i]>=yukseklik){
            printf("hatali giris yaptiniz lutfen sinirlara dikkat ederek tekrar giris yapiniz!!:");
            i--;
        }else{
        printf("kisinin yeri basariyla tanimlandi\n");
        }
    }
int kendix, kendiy;

    do {
        printf("kendi konumunuzu giriniz:\n");
        printf("x: ");
        scanf("%d", &kendix);
        printf("y: ");
        scanf("%d", &kendiy);

        if (kendix < 0 || kendix >= genislik || kendiy < 0 || kendiy >= yukseklik) {
            printf("hatali giris yaptiniz lutfen sinirlara dikkat ederek tekrar giris yapiniz!!:\n");
        } else {
            printf("Koordinatlariniz basariyla kaydedildi\n");
            break;
        }
    } while (1);
    printf("simdi ise tespit mesafesi girmeniz gerekiyor,tespit mesafeniz:\n ");
   int tespit;
    scanf("%d",&tespit);

    printf("uzaklik metodu seciniz\n1-Oklid\n2-Manhattan\n");
    int secim;
    scanf("%d",&secim);

    if(secim==1){
            for(int a = 1 ; a<=kisisayisi ;  a++){
       double sonuc ;
       sonuc = oklid(kendix,kendiy,genis[a],yuksek[a]);
       printf("%d. kisinin uzakligi: \n%2f\n",a,sonuc);
       if (sonuc <= tespit) {
                printf("%d. kisi, tespit mesafesi içinde. (Koordinatlar: %d, %d)\n", a + 1, genis[a], yuksek[a]);

            }
            }
    }
    else if(secim==2){
         for(int b = 1; b<=kisisayisi;b++){
             int sonuc2 = abs(kendix - genis[b]) + abs(kendiy - yuksek[b]);
             printf("%d. kisinin uzakligi : \n%d\n",b,sonuc2);
             if (sonuc2 <= tespit) {
                printf("%d. kisi, tespit mesafesi icinde. (koordinatlar: %d, %d)\n", b + 1, genis[b], yuksek[b]);

         }
         }
    }else{
    printf("hatali giris yaptiniz lutfen kurallara uyarak tekrar giris yapiniz:  ");

    }



    return 0;
}
