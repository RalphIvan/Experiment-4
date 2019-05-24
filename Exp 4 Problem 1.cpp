#include <iostream>

using namespace std;

int add(int a, int b)
{
	int answer;
	answer=a+b;
	return answer;
}

int subtract(int a, int b)
{
	int answer;
	answer=a-b;
	return answer;
}

int multiply(int a, int b)
{
	int answer;
	answer=a*b;
	return answer;
}

int divide(int a, int b)
{
	int answer;
	answer=a/b;
	return answer;
}

int rem(int a, int b)
{
	int answer;
	answer=a%b;
	return answer;
}

int main()

{
	int a, b, choice, answer;
	char c;
	
	cout << "MENU: \n\t 1. Add \n\t 2. Subtract \n\t 3. Multiply \n\t 4. Divide \n\t 5. Modulus" << endl;
	cout << "Enter your choice: "; cin >> choice;
	
	do {
		
		switch (choice)
		
		{
			
			case 1: 
				cout << "Enter your two numbers: \n"; cin >> a >> b;
				answer = add(a,b); 
				cout << "Result: " << answer << endl;
				break;
			
			case 2: 
				cout << "Enter your two numbers: \n"; cin >> a >> b;
				answer = subtract(a,b); 
				cout << "Result: " << answer << endl;
				break;
				
			case 3: 
				cout << "Enter your two numbers: \n"; cin >> a >> b;
				answer = multiply(a,b); 
				cout << "Result: " << answer << endl;
				break;
			
			case 4: 
				cout << "Enter your two numbers: \n"; cin >> a >> b;
				answer = divide(a,b); 
				cout << "Result: " << answer << endl;
				break;
				
			case 5: 
				cout << "Enter your two numbers: \n"; cin >> a >> b;
				answer = rem(a,b); 
				cout << "Result: " << answer << endl;
				break;
		}
		
	cout << "Continue? ";
	cin >> c;
	} while (c == 'y' || c == 'Y');
	
	return 0;
}
