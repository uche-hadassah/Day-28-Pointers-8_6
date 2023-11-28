/*Use pointers to write a void function named remove() that deletes all occurrences of a 
character from a C-string. The function should use two parameters: the C-string and the 
character to be removed. For example if str contains the C-string Happy Holidays, the 
function call remove(str, ‘H’) should change the string str to appy olidays. 
Test your function.*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
void remove(char[], char);//Function prototype
int main()
{
	char str[MAX];
	char n;
	cout << "Enter the string:";
	cin.getline(str, MAX);
	cout << "Enter the character you want to remove:";
	cin >> n;
	remove(str, n);
}

void remove(char[], char)
{
}
