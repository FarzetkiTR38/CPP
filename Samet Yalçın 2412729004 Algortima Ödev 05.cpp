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

	//	randmax = rand() % (büyüksayi - küçüksayi + 1) + küçüksayi    // +1 ekleme sebebimiz en büyük sayıyı dahil etmek.
	srand(time(0));

	int sayilar3[500]; 
	int ortalama3 = 0;
	int toplam3 = 0;
	for (int i = 0; i<500; i++) {
	
		sayilar3[i] = rand() % (35-10+1) + 10; 
		toplam3 += sayilar3[i];
		ortalama3 = toplam3 / (i+1);
		while (ortalama3 > 30 || ortalama3 < 20) {
			toplam3 -= sayilar3[i];
			sayilar3[i] = rand() % (35-10+1) + 10;
			toplam3 += sayilar3[i];
			ortalama3 = toplam3 / (i+1);
		}
		 
		
		cout << (i) << ". eleman = " << sayilar3[i] << endl;
	}
	
return 0;
}


