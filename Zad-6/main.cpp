#include <iostream>

using namespace std;

struct zwierze
{
    string nazwa;
    int waga;
    int wiek;
    string data;
};

int main()
{
    const int ilosc = 5;
    zwierze tablica[ilosc];

    tablica[0].nazwa="krowa";
    tablica[0].waga=300;
    tablica[0].wiek=52*5;
    tablica[0].data="24.04.08";

    tablica[1].nazwa="koza";
    tablica[1].waga=50;
    tablica[1].wiek=52*4;
    tablica[1].data="23.02.09";

    tablica[2].nazwa="kura";
    tablica[2].waga=2;
    tablica[2].wiek=52*1;
    tablica[2].data="23.02.09";

    tablica[3].nazwa="pies";
    tablica[3].waga=15;
    tablica[3].wiek=52*12;
    tablica[3].data="06.05.02";

    tablica[4].nazwa="swinia";
    tablica[4].waga=200;
    tablica[4].wiek=52*6;
    tablica[4].data="24.04.08";

    for (;;)
    {


        cout<<"\nMenu:\n1 - Wyswietl wszystkie dane\n2 - Wyswietl dane o konkretnym zwierzeciu\n3 - Wyjscie\n";

        double x;
        do
        {
            cin>>x;
        }
        while(x!=1 && x!=2 && x!=3);

        if(x==1)
        {
            cout<<"nazwa  waga(kg) wiek(tyg) data\n";
            for (int i=0; i<ilosc; i++)
            {
                cout<<tablica[i].nazwa<<"\t";
                cout<<tablica[i].waga<<"\t";
                cout<<tablica[i].wiek<<"\t";
                cout<<tablica[i].data<<"\n";
            }
        }

        if(x==2)
        {
            string nazwa_zwierzecia;
            cout<<"wprowadz nazwe zwierzecia: krowa, koza, kura, pies, swinia\n";
            cin>>nazwa_zwierzecia;
            cout<<endl;

            if(nazwa_zwierzecia=="krowa")
            {
                cout<<"nazwa  waga(kg) wiek(tyg) data\n";
                cout<<tablica[0].nazwa<<"\t";
                cout<<tablica[0].waga<<"\t";
                cout<<tablica[0].wiek<<"\t";
                cout<<tablica[0].data<<"\n";
            }

            if(nazwa_zwierzecia=="koza")
            {
                cout<<"nazwa  waga(kg) wiek(tyg) data\n";
                cout<<tablica[1].nazwa<<"\t";
                cout<<tablica[1].waga<<"\t";
                cout<<tablica[1].wiek<<"\t";
                cout<<tablica[1].data<<"\n";
            }

            if(nazwa_zwierzecia=="kura")
            {
                cout<<"nazwa  waga(kg) wiek(tyg) data\n";
                cout<<tablica[2].nazwa<<"\t";
                cout<<tablica[2].waga<<"\t";
                cout<<tablica[2].wiek<<"\t";
                cout<<tablica[2].data<<"\n";
            }

            if(nazwa_zwierzecia=="pies")
            {
                cout<<"nazwa  waga(kg) wiek(tyg) data\n";
                cout<<tablica[3].nazwa<<"\t";
                cout<<tablica[3].waga<<"\t";
                cout<<tablica[3].wiek<<"\t";
                cout<<tablica[3].data<<"\n";
            }

            if(nazwa_zwierzecia=="swinia")
            {
                cout<<"nazwa  waga(kg) wiek(tyg) data\n";
                cout<<tablica[4].nazwa<<"\t";
                cout<<tablica[4].waga<<"\t";
                cout<<tablica[4].wiek<<"\t";
                cout<<tablica[4].data<<"\n";
            }
        }
        if(x==3)
        {
            return 0;
        }
    }
    return 0;
}
