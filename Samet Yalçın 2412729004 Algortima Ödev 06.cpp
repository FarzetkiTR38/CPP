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

// int atamam gereken yerlere double atama sebebim garip bir bug oluşması, bunu double atayarak düzelttim açıklamış olayım.

	int sayilar[500];
	double ortalama;
	double enkucuk;
	double enbuyuk;
	double tumsayilar[100];
	double tek[500];
	double cift[500];
	double ortalamadankucukler[500];
	double ortalamadanbuyukler[500];
	// int ve float kullandığımda çok garip bir bug oluyor o yüzden double kullandım.
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
		cout << j << " sayısından " << tumsayilar[j] << " adet var." << endl;
	}

	cout << "Çift Sayılar: ";
	for (int l = 0; l < 500; l++) {
		cout << "--> " << cift[l] << endl;
	}
	
	cout << "Tek Sayılar: ";
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
    
// bu kısımda hata aldığım için chatgpt yardımı aldım ve fixledim int kucukindex ve int buyukindex'i oluşturttu 
// ve for'un içine onları yazdı ben farklı yapmıştım ve 0x6fee20 gibi çıktılar vermişti.
// hatamım sebebi: Dizilerin Sıfırlanması: ortalamadankucukler ve ortalamadanbuyukler dizileri başlangıçta sıfırlanır.

    cout << "Ortalamadan Küçükler = ";
    for (int i = 0; i < kucukIndex; i++) {
        cout << "--> " << ortalamadankucukler[i] << endl;
    }

    cout << "Ortalamadan Büyükler = ";
    for (int i = 0; i < buyukIndex; i++) {
        cout << "--> " << ortalamadanbuyukler[i] << endl;
    }
    
    ////////////////////////////////////////////////////////////////////
	
	cout << "En küçük sayı = " << enkucuk << endl;
	cout << "En büyük sayı = " << enbuyuk << endl;
	cout << "Ortalama = " << ortalama / 500 << endl;

	
return 0;
}


