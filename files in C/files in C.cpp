// files in C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning(suppress : 4996)

int main()
{
	FILE * fPointer;
	fPointer = fopen("bacon.txt", "w");
	fprintf_s(fPointer, "bacon is okay\n");

	fclose(fPointer);//This just gives back memeory too the computer. Good practice
    return 0;
}

