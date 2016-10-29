// Zadanie23.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		cout << "argument[" << i << "] = " <<  argv[i] << endl;
	}

    return 0;
}

