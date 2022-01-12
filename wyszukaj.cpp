#include"header.h"
void Samochod::wyszukaj ()	
	{
	string fraza1; //fraza dla typu string
	int fraza2,wybor; //fraza dla typu int
	for(;;) //pêtla nieskoñczona wyœwietlaj¹ca menu
		{
	cout<<'\n'<<"Wybierz pierwszy  parametr do wyszukania:"<<endl;
    cout<<"1.Marka \n2.Model \n3.Rocznik \n4.Przebieg \n5.Zakoncz dzialanie programu"<<endl;
    cin>>wybor; //wpisanie wartosci z klawiatury      
    switch(wybor) //instrukcja realizuj¹ca wybor wyszukiwania
    {
    	case 1:	//wyszukaj po marce	
	cout<<"Podaj szukana fraze: ";
	cin>>fraza1;
	cout<<"Nr"<<"\t"<<"Marka"<<"\t"<<"Model"<<"\t"<<"Rocznik"<<"\t"<<"Przebieg [km]"<<endl;
	for(int i=0;i<marka.size();i++)
	{
		//jesli szukana fraza pasuje do marki lub modelu wyswietl wszystkie rekordy które ja zawieraj¹
		if (fraza1==marka[i])				
		cout<<i+1<<"\t"<<marka[i]<<"\t"<<model[i]<<"\t"<<przebieg[i]<<"\t"<<rocznik[i]<<endl;		 	 
    }
    break;
    	case 2:	//wyszukaj po modelu	
	cout<<"Podaj szukana fraze: ";
	cin>>fraza1;
	cout<<"Nr"<<"\t"<<"Marka"<<"\t"<<"Model"<<"\t"<<"Rocznik"<<"\t"<<"Przebieg [km]"<<endl;
	for(int i=0;i<marka.size();i++)
	{
		//jesli szukana fraza pasuje do marki lub modelu wyswietl wszystkie rekordy które ja zawieraj¹
		if (fraza1==model[i])				
		cout<<i+1<<"\t"<<marka[i]<<"\t"<<model[i]<<"\t"<<przebieg[i]<<"\t"<<rocznik[i]<<endl;		 	 
    }
    break;
	case 3:	//wyszukaj po roczniku		
	cout<<"Podaj szukana fraze: ";
	cin>>fraza2;
	cout<<"Nr"<<"\t"<<"Marka"<<"\t"<<"Model"<<"\t"<<"Rocznik"<<"\t"<<"Przebieg [km]"<<endl;
	for(int i=0;i<marka.size();i++)
	{
		//jesli szukana fraza pasuje do rocznika lub przebiegu wyswietl wszystkie rekordy które ja zawieraj¹
		if (fraza2==rocznik[i])		
		cout<<i+1<<"\t"<<marka[i]<<"\t"<<model[i]<<"\t"<<przebieg[i]<<"\t"<<rocznik[i]<<endl;   		 	 	        
	}
	break;
	case 4:	//wyszukaj po przebiegu 		
	cout<<"Podaj szukana fraze: ";
	cin>>fraza2;
	cout<<"Nr"<<"\t"<<"Marka"<<"\t"<<"Model"<<"\t"<<"Rocznik"<<"\t"<<"Przebieg [km]"<<endl;
	for(int i=0;i<marka.size();i++)
	{
		//jesli szukana fraza pasuje do rocznika lub przebiegu wyswietl wszystkie rekordy które ja zawieraj¹
		if (fraza2==przebieg[i])		
		cout<<i+1<<"\t"<<marka[i]<<"\t"<<model[i]<<"\t"<<przebieg[i]<<"\t"<<rocznik[i]<<endl;   		 	 	        
	}
	break;
	case 5: //po wpisaniu 3 zakoncz dzialanie programu
		{
		exit(0); // funkcja konczaca dzialanie programu
		}
	}
}
}
