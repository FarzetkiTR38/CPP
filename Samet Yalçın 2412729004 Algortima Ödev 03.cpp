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

	int sayilar2[500];
	for (int i = 0; i<500; i++) {
		sayilar2[i] = rand() % (100-0+1) + 0; 
		cout << (i+1) << ". eleman = " << sayilar2[i] << endl;
	}


return 0;
}


