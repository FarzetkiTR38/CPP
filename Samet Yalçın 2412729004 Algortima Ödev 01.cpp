#include <iostream> 
#include <clocale> 
#include <string>
#include <conio.h>
#include <vector>
#include <cmath> 
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
system("Color 0A");

	//	randmax = rand() % (b�y�ksayi - k���ksayi + 1) + k���ksayi    // +1 ekleme sebebimiz en b�y�k say�y� dahil etmek.
	srand(time(0));
	
	double ciro[5][12];
	double ortciro[5];
	double toplam[5];
	int girilensayi;
	int girilensayi2;
	int ortciro3ay;
	
	for (int i = 0; i<5 ; i++) {
		for (int j = 0; j<12 ; j++) {
			ciro[i][j] = rand() % (5000-100+1) + 100;
			toplam[i] += ciro[i][j];
			cout << (i+1) << ". y�l�n " << (j+1) << ". ay�n�n cirosu = " << ciro[i][j] << endl;
		}
	}
	
	for (int i = 0; i<5; i++) {
		ortciro[i] = toplam[i] / 12;
	}
	
	for (int i = 0; i<5 ; i++) {
		cout << (i+1) << ". y�l ortalama ciro = " << ortciro[i] << endl;
	}
	
	cout << "Ciro ortalamas�ndan fazla olan aylar� g�rmeyi istedi�iniz y�l� giriniz (1-2-3-4-5) = " << endl;
	cin >> girilensayi;
	
	cout << girilensayi << " y�l�ndaki ortalama cirodan fazla cirosu olan aylar = " << endl;
	cout << girilensayi << " y�l�ndaki (ciro ortalamas�) " << ortciro[girilensayi] << endl;
	
	for (int i = 0; i<12 ; i++) {
		if (ciro[girilensayi-1][i] > ortciro[girilensayi-1]) {
			cout << (i+1) << ". aydaki ciro = " << ciro[girilensayi-1][i] << endl;
		}
	}
	
	cout << "�lk 3 ay�n ciro ortalamas�n� bulmak istedi�iniz y�l� giriniz (1-2-3-4-5) = " << endl;
	cin >> girilensayi2;
	
	for (int i = 0; i<3 ; i++) {
		cout << (i+1) << ". aydaki ciro = " << ciro[girilensayi2-1][i] << endl;
		ortciro3ay += ciro[girilensayi2-1][i];
	}
	
	cout << girilensayi2 << " y�l�ndaki ilk 3 ay�n ciro ortalamas� " << ortciro3ay / 3 << endl;
	
		
return 0;
}


