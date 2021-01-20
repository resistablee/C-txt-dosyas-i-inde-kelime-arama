#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string kelime, aranacak, cumle, ara="";
	cout << "ifade: ";
	cin >> aranacak;
	ifstream asd;
	asd.open("dosya.txt");
	int ahmet=0;
	while (getline(asd,cumle))
	{
		for(int i = 0; i < cumle.length(); i++)
		{
			if(cumle[i] != ' ')
			{
				ara+=cumle[i];
			}
			else
			{
				if(ara == aranacak)
				{
					ahmet =1;
					cout << cumle;
				}
				ara ="";
			}
		}
	}
	if(ahmet==0)
	{
		cout << "veri bulunamadi\n";
	}
	return 0;
}
