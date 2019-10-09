#include <bits/stdc++.h> 
using namespace std; 
// function to check if there is any vowel
bool is_vow(char c) 
{ 
	return (c == 'a') || (c == 'e') || 
		(c == 'i') || (c == 'o') || 
		(c == 'u'); 
} 

// if the string is having any vowel then it'll be removed using the below function'
void removeVowels(string str) 
{ 
	printf("%c", str[0]); 

	for (int i = 1; str[i]; i++) 

		if ((!is_vow(str[i - 1])) || 
			(!is_vow(str[i]))) 
			printf("%c", str[i]); 
} 

int main() 
{ 
	char str[] = " boom is boom"; 
	removeVowels(str); 
	// print the string after removing vowel
	printf("%s", str);
} 

