#include <iostream>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

char* MarkStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main()
{
	char* str = MarkStrAdr(20);
	strcpy(str, "I'm so happy~~");
	std::cout << str << std::endl;
	free(str);
	return 0;
}