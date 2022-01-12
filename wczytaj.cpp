#include"header.h"
void Samochod::wczytaj()
{
	string ma,mo; //zmienne potrzebne do wczytania marki i modelu
	int prze,ro; //zmienne potrzebne do wczytania przebiegu i rocznika
	//Wyœwietl nag³owek bazy danych
	cout<<"Nr"<<"\t"<<"Marka"<<"\t"<<"Model"<<"\t"<<"Rocznik"<<"\t"<<"Przebieg [km]"<<endl;
	fstream plik; //tworzy plik przy pomocy klasy fstream	
	plik.open("auta.txt",ios::in); //otwatcie pliku auta.txt	
	int i=0; //iterator	
	while( true ) //dopóki istniej¹ linie z danymi  w pliku
    {
        plik >>ma>>mo>>ro>>prze; //wczytaj strumien danych z pliku
        //zapisz wartosci kolejno jako atrybuty klasy Samochod w wektorach		 
        if( plik.good() ){
        marka.push_back(ma);
		model.push_back(mo);
		przebieg.push_back(prze);
		rocznik.push_back(ro);
		//wyswietl atrybuty 
        cout<<i+1<<"\t"<<marka[i]<<"\t"<<model[i]<<"\t"<<rocznik[i]<<"\t"<<przebieg[i]<<endl; 			
		i++; //zwieksz indeks tablicy o 1 dla kazdej nowej linii		  
		}
		//jesli nastapi koniec wczytywania przerwij
        else
             break;       
    }
    // zamknij plik
	plik.close();
}
