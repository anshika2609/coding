// A quickly written program for reversing a string 
// using reverse() 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,str1;
	cin>>str; 

	// Reverse str[begin..end] 
	str1=reverse(str.begin(), str.end()); 

	cout << str1; 
	return 0; 
} 
