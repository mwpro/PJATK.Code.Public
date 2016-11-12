#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

char getKeyForNthChar(string key, int charNumber)
{
	if (charNumber < key.length())
		return key[charNumber];
	
	do 
	{
		charNumber -= key.length();
	} while (charNumber >= key.length());

	return key[charNumber];
}

string xorEncrypt(string input, string key)
{
	string output = "";

	for (int i = 0; i < input.length(); i++)
	{
		output += input[i] ^ getKeyForNthChar(key, i);
	}

	return output;
}

string xorDecrypt(string input, string key)
{
	return xorEncrypt(input, key); // :-)
}

int main(int argc, char *args[])
{
	string key = (argc > 1) ? args[1] : "kotyToZlo"; // get key from args or use hardcoded one if not present
	
	string input = "Ala ma kota";

	string encrypted = xorEncrypt(input, key);

	cout << encrypted << " " << xorDecrypt(encrypted, key) << endl;

	return 0;
}

