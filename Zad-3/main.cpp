#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

struct Punkt
{
    double x, y, r;
};

int main()
{
    const int n=100;
    Punkt tablica [n];

    srand(time(0));

    int ilosc=0;

    //wypelniamy tablice punktami nalezacymi do wnetrza okregu, oraz odleglosciami tych punktów od srodka okregu

    while (ilosc<n)
    {
        double x = 10*(rand()/ double(RAND_MAX))+5;
        double y = 10*(rand()/ double(RAND_MAX));

        if ( ((x-10)*(x-10) + (y-5)*(y-5)) < 25 )
        {
            tablica[ilosc].x = x;
            tablica[ilosc].y = y;
            tablica[ilosc].r = pow( ( (10-tablica[ilosc].x)*(10-tablica[ilosc].x) ) + ( (5-tablica[ilosc].y)*(5-tablica[ilosc].y) ), 0.5 );
            ilosc=ilosc+1;

        }
    }

    //sortujemy punkty od tych lezacych najblizej srodka do tych lezacych najdalej

    for (int i = 0; i< n-1; i++)
        {
            int minimalna=i;

            for (int j = i+1; j < n; j++)
            {
                if (tablica[j].r < tablica[minimalna].r)
                {
                    minimalna=j;
                }
            }

            Punkt temp;
            temp = tablica[i];
            tablica[i] = tablica[minimalna];
            tablica[minimalna] = temp;

        }

   //wyswietlamy posortowana tablice

   cout<<"x\ty\tr"<<endl;

   for (int i=0; i<n; i++)
   {
       cout<<tablica[i].x<<"\t";
       cout<<tablica[i].y<<"\t";
       cout<<tablica[i].r<<endl;
   }


}
