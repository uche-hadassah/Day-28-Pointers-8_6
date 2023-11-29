/*Use pointers to write a void function named remove() that deletes all occurrences of a 
character from a C-string. The function should use two parameters: the C-string and the 
character to be removed. For example if str contains the C-string Happy Holidays, the 
function call remove(str, ‘H’) should change the string str to appy olidays. 
Test your function.*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
void remove(char*, const char);//Function prototype
int main()
{
	char str[MAX];
	char n;
	cout << "Enter the string:";
	cin.getline(str, MAX);
	cout << "Enter the character you want to remove:";
	cin >> n;
	remove(str, n);
	cout << "the new string is " << str;
}

void remove(char* Str, const char let)
{
	char* newPtr = Str;//Initialize a new pointer to the first position
	while (*Str != '\0')//While the character at that position is not equal to the null character
	{
		if (*Str != let)//If the character at the position in the original string isn't the letter
		{
			*newPtr = *Str;//Copy the character to the new string if its not to be removed
			newPtr++;//Increment the new pointer location to the next 
		}
		Str++;//Increment the pointer location to the next
	}
	*newPtr = '\0';//Terminate the new string
}
