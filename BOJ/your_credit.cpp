#include <iostream>
#include <string>
using namespace std;

int main() {
	double avg = 0, sum1 = 0, sum2 = 0;
	
	for (int i = 0; i < 20; i++) {
        string obj, cre;
        double sco = 0;
        
		cin >> obj >> sco >> cre;
		
        if (cre == "A+") {
            sum1 += sco * 4.5;
            sum2 += sco;
        }
        else if (cre == "A0") {
            sum1 += sco * 4.0;
            sum2 += sco;
        }
        else if (cre == "B+") {
            sum1 += sco * 3.5;
            sum2 += sco;
        }
        else if (cre == "B0") {
            sum1 += sco * 3.0;
            sum2 += sco;
        }
        else if (cre == "C+") {
            sum1 += sco * 2.5;
            sum2 += sco;
        }
        else if (cre == "C0") {
            sum1 += sco * 2.0;
            sum2 += sco;
        }
        else if (cre == "D+") {
            sum1 += sco * 1.5;
            sum2 += sco;
        }
        else if (cre == "D0") {
            sum1 += sco * 1.0;
            sum2 += sco;
        }
        else if (cre == "F") {
            sum2 += sco;
        }
	}
	
	avg = sum1 / sum2;

	cout << avg << '\n';

	return 0;
}

