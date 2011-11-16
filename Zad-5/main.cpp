#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Punkt_3D
{
    int x, y, z;
};

int main()
{
    srand(time(0));

    const int w = 5;
    const int k = 5;

    Punkt_3D tablica_punktow [w][k];
    bool tablica_spr [k];

    for(int i=0; i<k; i++)
    {
        tablica_spr[i]= false;
    }

    cout<<"wczytane punkty:"<<endl;

    for(int i=0; i<w; i++)
    {
        for (int j=0; j<k; j++)
        {
            tablica_punktow[i][j].x= 10*(rand()/double (RAND_MAX) );
            tablica_punktow[i][j].y= 10*(rand()/double (RAND_MAX) );
            tablica_punktow[i][j].z= 10*(rand()/double (RAND_MAX) );

            cout<<tablica_punktow[i][j].x<<","<<tablica_punktow[i][j].y<<","<<tablica_punktow[i][j].z<<"  ";
        }
        cout<<endl;
    }

    cout<<"kolumny w ktorych choc jeden punkt lezy na osiach ukladu:"<<endl;

    for (int j=0; j<k; j++)
    {
        for(int i=0; i<w; i++)
        {
           if( (tablica_punktow[i][j].x==0 && tablica_punktow[i][j].y==0) || (tablica_punktow[i][j].x==0 && tablica_punktow[i][j].z==0) || (tablica_punktow[i][j].y==0 && tablica_punktow[i][j].z==0)  )
           {
               tablica_spr[j] = true;
           }
        }
        cout<<tablica_spr[j]<<" ";
    }



    return 0;
}
