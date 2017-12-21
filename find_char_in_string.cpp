/*
Name: Ojaswee Dhungana
C++ 
Find char int the given string
*/

#include <string>  // for string
#include <iostream> //for Cout, endl
using namespace std;

void print(string x, int y) {     // to print
	for (int i = 0; i < y; i++) {
	 cout<<x[i];
	}
	cout << endl
		<< "Length of unique characters are: "<<y <<endl;
}
void deleteSpace(string a) {// after repeted char are replaced with space remove space
	int count = a.length();
	int i = 0, j = 0;
	char *inChar = new char[count + 1];// new variable to 
	for (i; i < count; i++) {
		if (isspace(a[i])) { // if there is space skip this char
			continue;
		}
		else { //if no space keep int the array
			inChar[j] = a[i];
			++j;
		}
	}
	print(inChar, j);
}

void checkRepetion(string a) { // check if the charecters are repeted
	int size = a.length();
	cout << "Your input was: " << a << endl; // show user their input
	for (int i = 0; i < size; i++) {
		char c = a[i]; //c represents the value in the array
		for (int j = i + 1; j < size; j++){ 
			if (c == a[j]) //if c equals a[j]
				a[j] = ' '; //replace j with a space
		}
	}
	deleteSpace(a);
}

int main() {
	string input = "abcabcbb";
	//cout << "Please input your value:" << endl;
	//getline(cin, input);

	checkRepetion(input);

	system("pause");
	return 0;
}
