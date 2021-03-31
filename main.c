#include <stdio.h>
#include <stdlib.h>
int nr;
float raza,lungime,latime,a,b,c,d,h;
int main()
{
    printf("Alege o figura:\n");
    printf("*alege cifra aferenta figurii*\n");
    printf("1. cerc\n");
    printf("2. dreptunghi\n");
    printf("3. trapez\n");
    printf("Raspunsul dumneavoastra este:");
    scanf("%d",&nr);
    if(nr==1)
    {
      printf("Raza este:");
      scanf("%f",&raza);
      float calcul=raza*raza;
      printf("Aria este: PI*%.2f\n",calcul);
      calcul=raza*2;
      printf("Circumferinta este: PI*%.2f",calcul);

    }
    else if(nr==2)
    {
      printf("Lungimea este:");
      scanf("%f",&lungime);
      printf("Latimea este:");
      scanf("%f",&latime);
      printf("Aria este: %.2f\n",lungime*latime);
      printf("Perimetrul este: %.2f\n",2*(lungime+latime));

    }
    else if(nr==3)
    {
      printf("AB(baza) este:");
      scanf("%f",&a);
      printf("BC(latura) este:");
      scanf("%f",&b);
      printf("CD(baza) este:");
      scanf("%f",&c);
      printf("AD(latura) este:");
      scanf("%f",&d);
      printf("Inaltimea este:");
      scanf("%f",&h);
      printf("Aria este: %.2f\n",(a+c)*h/2);
      printf("Perimetrul este: %.2f\n",a+b+c+d);

    }
    else printf("Nu exista figura");
    return 0;
}
