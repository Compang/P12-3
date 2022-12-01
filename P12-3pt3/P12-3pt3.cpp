#include <iostream>

using namespace std;

int strcompare(const char* s1, const char* s2);

unsigned long strlength(const char* str);

int main(void) {
	char* s1 = new char[80];
	char* s2 = new char[80];
	cout << "Enter string 1: ";
	cin.getline(s1, 80, '\n');
	cout << endl << "Enter string 2: ";
	cin.getline(s2, 80, '\n');
	cout << endl << "string 1 is " << strlength(s1) << " characters long.";
	cout << endl << "string 2 is " << strlength(s2) << " characters long.";
	int longstr = strcompare(s1, s2);
	if (longstr < 0) cout << endl << "string 1 lexicographically comes before string 2.";
	else if (longstr > 0) {
		cout << endl << "string 2 lexicographically comes before string 1.";
	}
	else if (longstr == 0) {
		cout << endl << "string 1 and 2 are lexicographically equal. ";
	}



}

unsigned long strlength(const char* str) {
	int count = 0;
	while (*str++) {
		count++;
	}
	return count;
}

int strcompare(const char* s1, const char* s2) {
	int s1len = strlength(s1);
	int s2len = strlength(s2);
	int s1val = 0;
	int s2val = 0;

	for (int i = 0; i <= s1len; i++) {
		s1val = s1val + s1[i];
	}
	for (int i = 0; i <= s2len; i++) {
		s2val = s2val + s2[i];
	}
	return s1val - s2val;

}

