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

// int atamam gereken yerlere double atama sebebim garip bir bug olu�mas�, bunu double atayarak d�zelttim a��klam�� olay�m.

	int sayilar[500];
	double ortalama;
	double enkucuk;
	double enbuyuk;
	double tumsayilar[100];
	double tek[500];
	double cift[500];
	double ortalamadankucukler[500];
	double ortalamadanbuyukler[500];
	// int ve float kulland���mda �ok garip bir bug oluyor o y�zden double kulland�m.
	for (int i = 0; i<500; i++) {
		sayilar[i] = rand() % (100 - 0 + 1)+ 0; 
		ortalama += sayilar[i];
		cout << (i+1) << ". eleman = " << sayilar[i] << endl;
	
		if (enkucuk > sayilar[i]) {
			enkucuk = sayilar[i];
		} 
		if (enbuyuk < sayilar[i]) {
			enbuyuk = sayilar[i];
		}
		
		for (int j = 0; j < 100 ; j++) {
			if (j == sayilar[i]) {
				tumsayilar[j]++;
			} 
		}
		
		if (sayilar[i] % 2 == 0) {
			cift[i] = sayilar[i];
		} else if (sayilar[i] % 2 == 1) {
			tek[i] = sayilar[i];
		}
		
	}
	
	for (int j = 0; j < 100 ; j++) {
		cout << j << " say�s�ndan " << tumsayilar[j] << " adet var." << endl;
	}

	cout << "�ift Say�lar: ";
	for (int l = 0; l < 500; l++) {
		cout << "--> " << cift[l] << endl;
	}
	
	cout << "Tek Say�lar: ";
	for (int m = 0; m < 500; m++) {
		cout << "--> " << tek[m] << endl;
	}
	
	//////////////////////////////////////////////////////////////////////
    int kucukIndex = 0;
    int buyukIndex = 0;
    for (int i = 0; i < 500; i++) {
        if (sayilar[i] < ortalama) {
            ortalamadankucukler[kucukIndex++] = sayilar[i]; 
        } else if (sayilar[i] > ortalama) {
            ortalamadanbuyukler[buyukIndex++] = sayilar[i];
        }
    }
    
// bu k�s�mda hata ald���m i�in chatgpt yard�m� ald�m ve fixledim int kucukindex ve int buyukindex'i olu�turttu 
// ve for'un i�ine onlar� yazd� ben farkl� yapm��t�m ve 0x6fee20 gibi ��kt�lar vermi�ti.
// hatam�m sebebi: Dizilerin S�f�rlanmas�: ortalamadankucukler ve ortalamadanbuyukler dizileri ba�lang��ta s�f�rlan�r.

    cout << "Ortalamadan K���kler = ";
    for (int i = 0; i < kucukIndex; i++) {
        cout << "--> " << ortalamadankucukler[i] << endl;
    }

    cout << "Ortalamadan B�y�kler = ";
    for (int i = 0; i < buyukIndex; i++) {
        cout << "--> " << ortalamadanbuyukler[i] << endl;
    }
    
    ////////////////////////////////////////////////////////////////////
	
	cout << "En k���k say� = " << enkucuk << endl;
	cout << "En b�y�k say� = " << enbuyuk << endl;
	cout << "Ortalama = " << ortalama / 500 << endl;

	
return 0;
}


