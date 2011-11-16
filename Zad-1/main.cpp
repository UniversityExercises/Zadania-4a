#include <iostream>

using namespace std;


struct Auto
{
    string marka;
    double cena;
    int rocznik;
};

int main()
{
    const int n=3;

    Auto tablica_samochod[n];

    tablica_samochod[0].marka = "Mercedes";
    tablica_samochod[0].cena = 25.654;
    tablica_samochod[0].rocznik = 2004;

    tablica_samochod[1].marka = "Reno";
    tablica_samochod[1].cena = 2.555;
    tablica_samochod[1].rocznik = 1987;

    tablica_samochod[2].marka = "Ford";
    tablica_samochod[2].cena = 20.974;
    tablica_samochod[2].rocznik = 2005;


    //tworzymy menu wyboru
    cout<<"Sortuj wedlug:"<<endl;
    cout<<"Ceny - 1"<<endl;
    cout<<"Marki - 2"<<endl;

    double wybor;

    do
    {
        cin>>wybor;
    }
    while (wybor != 1 && wybor != 2);

    if (wybor == 1)
    {

    //sortujemy wedlug ceny

        for (int i = 0; i< n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (tablica_samochod[j].cena < tablica_samochod[i].cena)
                {
                    Auto temp;
                    temp = tablica_samochod[i];
                    tablica_samochod[i] = tablica_samochod[j];
                    tablica_samochod[j] = temp;
                }
            }


        }

        cout<<"cena: "<<tablica_samochod[0].cena<<" marka: "<<tablica_samochod[0].marka<<" rok: "<<tablica_samochod[0].rocznik<<endl;
        cout<<"cena: "<<tablica_samochod[1].cena<<" marka: "<<tablica_samochod[1].marka<<" rok: "<<tablica_samochod[1].rocznik<<endl;
        cout<<"cena: "<<tablica_samochod[2].cena<<" marka: "<<tablica_samochod[2].marka<<" rok: "<<tablica_samochod[2].rocznik<<endl;

    }

    if (wybor == 2)
    {
        //sortujemy wedlug marki
        for (int i = 0; i< n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (tablica_samochod[j].marka < tablica_samochod[i].marka)
                {
                    Auto temp;
                    temp = tablica_samochod[i];
                    tablica_samochod[i] = tablica_samochod[j];
                    tablica_samochod[j] = temp;
                }
            }
        }

        cout<<"marka: "<<tablica_samochod[0].marka<<" cena: "<<tablica_samochod[0].cena<<" rok: "<<tablica_samochod[0].rocznik<<endl;
        cout<<"marka: "<<tablica_samochod[1].marka<<" cena: "<<tablica_samochod[1].cena<<" rok: "<<tablica_samochod[1].rocznik<<endl;
        cout<<"marka: "<<tablica_samochod[2].marka<<" cena: "<<tablica_samochod[2].cena<<" rok: "<<tablica_samochod[2].rocznik<<endl;
    }



        return 0;
    }
