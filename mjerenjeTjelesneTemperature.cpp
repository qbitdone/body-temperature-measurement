#include <iostream>
#include <ctime>
#include <cstdlib>
#include <assert.h>
#include <iomanip>
#include <fstream>
using namespace std;

time_t rawtime;
struct tm * timeinfo;

float RandomFloat(float min, float max)
{
    assert(max > min); 
    float random = ((float) rand()) / (float) RAND_MAX;
    float range = max - min;  
    return (random*range) + min;
}


int main()
{
	double tjelesnaTemperatura;
	srand(time(NULL));
	rand();
	rand();
	rand();
	rand();
	rand();
	rand();
 	time ( &rawtime );
 	tjelesnaTemperatura = RandomFloat(35.5, 36.8);
  	cout << "Tjelesna temperatura iznosila je: " << setprecision(3) << tjelesnaTemperatura << " " <<  char(248) << "C"<<  " dana/mjeseca/datuma/vremena/godine: " << ctime(&rawtime) << endl;
  	

//	cout << setprecision(3) << RandomFloat(35.5, 36.8) << " " <<  char(248) << "C" << endl;
	ofstream objektZaUpis;
	objektZaUpis.open("evidencijaMjerenjaTemperature.txt", ios::app);
	objektZaUpis << "Tjelesna temperatura iznosila je: " << setprecision(3) << tjelesnaTemperatura << " °"  << "C"<<  " dana/mjeseca/datuma/vremena/godine: " << ctime(&rawtime) << endl;
  	objektZaUpis.close();
	return 0;
}
