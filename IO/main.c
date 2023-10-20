#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    w  : write only, dosya sistemde olsa bile eskiyi siler yeniyi olusturur
    r  : read only, dosyanýn onceden var olmasi gerekir
    a  : append, var olan bir dosyanin sonuna ekleme yapar
    r+ : hem okuma hem yazma yapilabilir, dosyanin onceden olmasi gerekir
    w+ : hem okuma hem yazma yapabilir. dosyanýn var olmasi gerekmez yeniden olusturur
    a+ : onceden var olan bir dosyanin sonuna veri ekleme ve okuma islemlerini
    */

    FILE *fp = fopen("operations.txt","w");
    if(fp == NULL)
        printf("Dosya olusuturulmadi");
    else
    {
        printf("Dosya olusturma islemi basarili");
        char metin[40] = "software development\n";
        char metin2[40] = "compart software\n";
        char metin3[40] = "Ozgur VURGUN\n";


        //fputc => dosyaya tek bir karakter yazar
        /*
          char metin[40] = "software development";
          for(int i=0; i<strlen(metin); i++){
              fputc(metin[i], fp);
          }
          printf("\n\n'%s' basariyla dosyaya yazildi",metin);

        */


        fputs(metin, fp);
        fputs(metin2, fp);
        fputs(metin3, fp);
    }



    fclose(fp);
    return 0;
}
