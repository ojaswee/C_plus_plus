/*
Name: Ojaswee Dhungana
C++
Find the length of the longest substring without repeating characters
*/


#include <string>  // for string
#include <iostream> //for cout, endl

using namespace std;

bool checkChar(string inputvector, char c) {
	int found = 0;
	for (int k = 0; k < inputvector.size(); k++) {
		if (inputvector[k] == c ) {
			found++;
		}
	}
	return found;
}

void longestSubstring(string inputstring) {
	cout << "You have entered: " << inputstring << endl;

	string tempString, uniqueString = "";

	for (int i = 0; i < inputstring.length(); i++) {
		for (int j = i; j < inputstring.length(); j++) {
			char testchar = inputstring[j];
			//check for char in the input string
			bool test = checkChar(tempString, testchar);
			if (test == 0) { //if char is not found in string
				tempString += testchar;
			}
			else if (test == 1)  // if char is found in string break out of loop
				break;
		}
		if (tempString.length() > uniqueString.length()) { // if current string is longer then stored 
			uniqueString = tempString;		   // copy current string to stored string
		}
		tempString = "";
	}
	cout << "SubString for this input is ";
	for (int i = 0; i < uniqueString.length(); i++)
		cout << uniqueString[i];
	cout << endl << "Length of substring: " << uniqueString.length() << endl;
}

int main() {
	string input;

	//input = "aabcdefgbbcdafr"; 

	std::cout << "Please input your value:" << endl;
	getline(cin, input);

	longestSubstring(input);
	system("pause");
	return 0;
}
