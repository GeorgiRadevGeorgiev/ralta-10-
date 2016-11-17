#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	/* 

	int rnd;

	srand(time(NULL));
	
	rnd = (rand() % 1000) + 1 ;

	for (int i = 0; i < 1000000; i++) {
		rnd = (rand() % 1000) + 1;
		cout << rnd << endl;
	}

	*/


	 // zadacha 1 

	/* 

	int n, max, min;
	int const  maxs = 10000;
	cout << "input n : ";
	cin >> n;
	int masiv[maxs] = {};

	for (int i = 0; i < n; i++) {
		cout << "\nInput the " << i + 1 << " number :";
		cin >> masiv[i];
	}

		min = masiv[0];
		max = min;

	for (int q = 1; q < n; q++) {

		

		if (masiv[q] > max)
			max = masiv[q];

		if (masiv[q] < min)
			min = masiv[q];
	}
	cout << "\nMax : " <<  max << endl;
	cout << "Min : "<<  min << endl;

*/

	// zadacha 2 

	/* 

	int n, max, min, maxp, minp, cont;
	int const  maxs = 10000;
	cout << "input n : ";
	cin >> n;
	int masiv[maxs] = {};

	for (int i = 0; i < n; i++) {
		cout << "\nInput the " << i + 1 << " number :";
		cin >> masiv[i];
	}

	min = masiv[0];
	max = min;

	for (int q = 1; q < n; q++) {

		if (masiv[q] > max) {
			max = masiv[q];
			maxp = q;
		}

		if (masiv[q] < min) {
			min = masiv[q];
			minp = q;
		}

	}

	cont = max;
	max = min;
	min = cont;
	masiv[maxp] = max;
	masiv[minp] = min;

	for (int m = 0; m < n; m++) {
		cout << "\nThe " << m + 1 << " number is : " << masiv[m];
	}
	cout << endl;

*/

	// zadacha 3

	/* 

	int n, counter = 0;
	int const  maxs = 10000;
	cout << "input n : ";
	cin >> n;
	int masiv[maxs] = {};

	for (int i = 0; i < n; i++) {
		cout << "\nInput the " << i + 1 << " number :";
		cin >> masiv[i];
		int copy = masiv[i], sum = 0, a;

			while (copy >= 1) {
				a = (copy % 10);
				sum += a;
				copy /= 10;

			}

			if (sum == 1)
				counter++;
	}

	if (counter == 0)
		cout << "\nThere are no such numbers!" << endl;
	else
		cout << "\nThere are " << counter <<  " such numbers!" << endl;

*/

// zadacha 4 

int n, sum = 0, index = -1;
int const  maxs = 10000;
bool flag = false;
cout << "input n : ";
cin >> n;
int masiv[maxs] = {};

for (int i = 0; i < n; i++) {
	cout << "\nInput the " << i + 1 << " number :";
	cin >> masiv[i];
}

for (int i = 0; i < n; i++) {
		if (masiv[i] >= 0) {
			flag = true;
			index = i;
		}		
	}

	for (int q = index + 1; q < n; q++)
		sum += masiv[q];

	if (flag)
		cout << "\nThe sum is " << sum << endl;
	else
		cout << "\nThere is no positove number" << endl;

	


	


	system("pause");
	return 0;
}