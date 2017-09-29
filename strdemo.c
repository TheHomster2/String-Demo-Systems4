#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 3 : strchr/strstr

int main(){
// First c fxn: strchr
// strchr is used to locate the first occurance of a character in a given string
// However you can also use this fxn to find each occurance of a character in a string
// The null termination bytes are not compared

	char str[256] = "Hello world";
	char *p;
	p = strchr(str, 'w');
	printf("Character w is found at %d\n", p - str + 1);
	printf("First occurance of i is found at %s\n", p);
	//-----------------------------

// Second c fxn: strstr
// strstr is used to locate the first occurance of a string in a given string. 
// Pointer is returned at the first occurance 

	char memo[55] = "I recommend watching Classroom of the Elite!";
	char *c;
	c = strstr(memo, "Classroom of the Elite!");
	printf("First occurance of the the anime in the string \"%s \" is at \" %s \"\n", memo, c);
	//c = strstr(memo, "I recommend watching Classroom of the Elite!");
	//printf("First occurance of the string in %s is at \" %s \"\n", memo, c);
	return 0;
}