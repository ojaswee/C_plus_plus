/*
Name: Ojaswee Dhungana
C++
Find target by brute force, if pairs/tuples from an array sum up to target
*/

#include <iostream> //for cout, endl
#include <cstdlib> // for rand function
using namespace std;

int const lengthofArray = 10;	//total number of elements in Array

//Find Tuples order of 3
void findTuples(int *n, int target) { // pass pointer and target value
	for (int i = 0; i< lengthofArray - 2; i++)
		for (int j = i + 1; j < lengthofArray - 1; j++)
			for (int k = j + 1; k < lengthofArray; k++) {
				int temp = n[i] + n[j] + n[k];
				if (temp == target) {
					cout << "(" << n[i] << "," << n[j] << "," << n[k] << ")\t\t ";
					cout << "(" << i << "," << j <<","<<k<< ")\t" << endl;
				}
				else continue;
			}
}
// Find pairs
void findPairs(int *n, int target) {
	cout << "Found Match \t Indexes\n";
	for (int i = 0; i< lengthofArray - 1; i++)
		for (int j = i + 1; j < lengthofArray; j++) {
			int temp = n[i] + n[j];
			if (temp == target) {
				cout << "(" << n[i] << "," << n[j] << ")\t\t ";
				cout << "(" << i << "," << j << ")" << endl;
			}
			else continue;
		}
	findTuples(n, target);
}

int main() {
	int n[lengthofArray], *numb;
	int target = 10; // a target number
	cout << "Random unique numbers {";
	for (int i = 0; i < lengthofArray; i++) {
		n[i] = rand() % 10;			//generate random numbers between 0 to 10
		cout << n[i] << " ";
	}cout << "}" << endl;
	numb = n;
	findPairs(numb, target);
	system("pause");
	return 0;

}
