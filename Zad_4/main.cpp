#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

struct Punkt_3D
{
    double x, y, z, r;
};

int main()
{
    srand(time(0));

    const int k=100;
    Punkt_3D tablica[k];

    //wypelniamy tablice

    for (int i=0; i<k; i++)
    {
        double x = (10.0 * rand()/RAND_MAX )+5;
        double y = (10.0 * rand()/RAND_MAX )+2;
        double z = (10.0 * rand()/RAND_MAX );

        if( pow( ( pow(x-5, 2) + pow(y-2, 2)  + pow(z, 2) ) , 0.5 ) < 25 )
        {
            tablica[i].x=x;
            tablica[i].y=y;
            tablica[i].z=z;
            tablica[i].r= sqrt(pow(x-5,2)+pow(y-2,2)+pow(z,2));
        }
    }

    //sortujemy tablice wzgledem odleglosci punktow za pomoca algorytmu "przez wstawianie"
    for(int i=0; i<k; i++)
    {
        int j=i;
        double temp = tablica [j].r;

        while (j>0 && temp<tablica[j-1].r)
        {
            tablica[j].r=tablica[j-1].r;
            j=j-1;
        }
        tablica[j].r = temp;

    }

    //wyswietlamy tablice
    cout<<"x\t\ty\t\tz\t\tr\n";
    for (int i=0; i<k; i++)
    {
       cout<<tablica[i].x<<"\t\t"<< tablica[i].y<<"\t\t"<<tablica[i].z<<"\t\t"<<tablica[i].r<<endl;

    }

    return 0;
}
