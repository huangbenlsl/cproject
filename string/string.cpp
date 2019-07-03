//#include <stdio.h>
//#include <stdint.h>
//#include <stdlib.h>
//#include "cstdlib"
#define MSG  "I am a symbolic string constant!!"
#define MAXLENGTH  81	
int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array!";
	const char* pt = "Something is pointing at me.";
	puts("here are some strings!");
	puts(MSG);
	puts(words);
	puts(pt);
	words[8] = '1';
	puts(words);
	return 0;
}

