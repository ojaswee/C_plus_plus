<<<<<<< HEAD
# include <iostream>

using namespace std;

//Using recurssion
int fibonacci(int num) {
	//num cannot be negative number
	if (num < 0) {
		cout << "Please enter a possitive number\n";
		return 0;
	}
	else if (num < 2) {
			return num;
		}
	return (fibonacci(num - 1) + fibonacci(num - 2));
}

//dynamic programing
int dynamic_fib(int num) {
	int *arr = new int[num + 1], sum = 0 ;
	arr[0] = 0;
	arr[1] = 1; 
	for (int i = 2; i <= num; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		sum = arr[i];
	}
	return sum;
}


int main() {
	int n =7; 
	//cout << "Enter a number:" << n; 
	cout<< "Fibonacci number: " <<fibonacci(n)<<endl;
	cout << "Fibonacci number: " << dynamic_fib(n) << endl;
	system("pause");
=======
# include <iostream>

using namespace std;

//Using recurssion
int fibonacci(int num) {
	//num cannot be negative number
	if (num < 0) {
		cout << "Please enter a possitive number\n";
		return 0;
	}
	else if (num < 2) {
			return num;
		}
	return (fibonacci(num - 1) + fibonacci(num - 2));
}

//dynamic programing
int dynamic_fib(int num) {
	int *arr = new int[num + 1], sum = 0 ;
	arr[0] = 0;
	arr[1] = 1; 
	for (int i = 2; i <= num; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		sum = arr[i];
	}
	return sum;
}


int main() {
	int n =7; 
	//cout << "Enter a number:" << n; 
	cout<< "Fibonacci number: " <<fibonacci(n)<<endl;
	cout << "Fibonacci number: " << dynamic_fib(n) << endl;
	system("pause");
>>>>>>> 0dc6c7d747753305bd5262ea300db8b239bf51b9
}