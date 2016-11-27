#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "util.h"

using namespace std;

char * cc_string_duplicate(const char * src)
{
	int string_length = strlen(src) + 1;

	char* target = new char[string_length];
	int i = 0;

	while (target[i] = src[i])
	{
		i++;
	}

	return target;
}
