#include <iostream> //biblioteka strumienia we/wy
#include <fstream> //obsluga pauzy
#include <string> //
#include <cstdlib> //
#include <vector> //
using namespace std;
//utworzenie klasy Samochod
class Samochod
{
	public:
	//atrybuty
	vector <string> marka;
	vector <string> model;
	vector <int> rocznik;
	vector <int> przebieg;
	//metody
	//metoda wczytuje i wyswietla kolejne rekordy bazy danych z pliku
	void wczytaj();	
	//metoda na podstawie podanej frazy wyswietla wszystkie informacje o samochodach, ktorych dana fraza dotyczy
	void wyszukaj ();
};



