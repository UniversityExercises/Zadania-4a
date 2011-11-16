#include <iostream>
#include <math.h>
using namespace std;

struct Punkt
{
    double x;
    double y;
} ;

int main()
{
    const int k=5;
    Punkt tablica[k];

   for (int i=0; i<k; i++)
   {
       cout<<"wprowadz punkt "<<i<<":"<<endl;
       cin>>tablica[i].x;
       cin>>tablica[i].y;
   }

   //sortujemy tablice umieszczajac na poczatku
   //punkty lezace w odleg³osci mniejszej od 10 od srodka uk³adu wspó³rzednych,
   //a na koncu wiekszej.

   cout<<"x\t"<<"y\t"<<endl;

   for (int i=0; i<k; i++)
   {
       double z= pow( (tablica[i].x*tablica[i].x) + (tablica[i].y*tablica[i].y), 0.5 );
        if(z<10)
        {
            cout<<tablica[i].x<<"\t";
            cout<<tablica[i].y<<endl;
        }
   }

    for (int i=0; i<k; i++)
   {
       double z= pow( (tablica[i].x*tablica[i].x) + (tablica[i].y*tablica[i].y), 0.5 );
        if(z>=10)
        {
            cout<<tablica[i].x<<"\t";
            cout<<tablica[i].y<<endl;
        }
   }
   return 0;
}
