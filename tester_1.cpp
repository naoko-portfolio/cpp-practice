#include <iostream>
#include "cstring.h"
using namespace std;

int main() {

	//strCpy
	char str4[20];
	const char* str5= "Apple";
	strCpy(str4, str5);
	cout << str4 << endl;
	


	//strnCpy
	char str6[20];
	const char* str7 = "Banana";
	int count = 4;
	strnCpy(str6, str7, count);
	cout << str6 << endl;

	//strCmp
	const char* str4 = "Oimo";
	const char* str5 = "Imo";
	int result3 = strCmp(str4, str5); //79 - 73 == 6
	cout << result3 << endl;


	//strnCmp
	const char* str1 = "Apple";
	const char* str2 = "Banana";
	int c=3;
	int result1 = strnCmp(str1, str2, c);
	cout << result1 << endl;



	//for strLen
	const char* str3 = "AppleBanana";
	int result2 = strLen(str3);
	cout << result2 << endl;



	//for strStr
	const char* st1 = "Apple";
	const char* st2 = "le";
	const char* result = strStr(st1, st2);

	if (result != nullptr) {
		cout << "Found: " << result << endl;
	}
	else {
		cout << "Not found" << endl;
	}




	//for strCat
	char a[20] = "Hello";
	char b[] = "World!";
	strCat(a, b);

	cout <<"Concatenated: "<< a << endl;

	return 0;
}