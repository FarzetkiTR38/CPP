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

	float sayilar4[500]; 
	float tamsayilar[500];
	float kesirlisayilar[500];
	for (int i = 0; i<500; i++) {
		tamsayilar[i] = rand() % (100-0+1)-0;
		kesirlisayilar[i] = (float)rand() / (float)RAND_MAX;
		sayilar4[i] = tamsayilar[i] + kesirlisayilar[i];
		cout << (i+1) << ". üretilen kesirli sayı --> " << sayilar4[i] << endl; 
	}
	
return 0;
}


