#include "stdafx.h"
#include <string.h>

char* c_string_duplicate(const char *src) {
	int string_length = strlen(src) + 1;
	char * target = new char[string_length];
	int i = 0;
	while (target[i] = src[i])
	{
		i++;
	}
	return target;
}