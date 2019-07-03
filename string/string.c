#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//#define MSG  "I am a symbolic string constant!!"
#define MAXLENGTH  81

void test1(void)
{
	char words[MAXLENGTH] = {"I am a string in an array!"};
	const char* pt = "Something is pointing at me.";
	puts("here are some strings!");
//	puts(MSG);
	puts(words);
	puts(pt);
	puts(words);
}
#define MSG  "I'm special"

void test2(void)
{
	char ar[] = MSG;
	const char* pt = MSG;
	printf("1:%p\n", "I'm special");
	printf("2:%p\n", pt);
	printf("3:%p\n", ar);
	printf("4:%p\n","I'm special");
	printf("5:%p\n", MSG);
}
void test3(void)
{
	int i;
	char heart[] = "I love Tillie!";
	const char* head = "I love Tille!";
	char *test = "I love Tille!";
	for (i = 0; i < 6; i++)
		putchar(*(heart+i));
	putchar('\n');
	for (i = 0; i < 6; i++)
		putchar(*(head+i));
	putchar('\n');
	putchar('\n');
	putchar('\n');
	putchar('\n');
	while (*(head) != '\0')
		putchar(*(head++));
	head= heart;
	heart[0] = 'u';
	while (*(head) != '\0')
		putchar(*(head++));
	putchar('\n');
	while (*(test) != '\0')
		putchar(*(test++));
	putchar('\n');
	printf("1:%p\n", head);
	printf("2:%p\n", heart);
	printf("3:%p\n", test);

	const char* mytalent[5] = { "hello","world","!","huang","ben" };
	printf("%d %p\n", sizeof(mytalent),mytalent);
}

void test4(void)
{
	const char* mesg = "Don't be a fool!";
	const char* copy = mesg;

	printf("%s\n", copy);
	printf("mesg =%s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
	printf("copy =%s; &copy = %p; value = %p\n",copy, &copy, copy);

}
void test5(void)
{
	char words[81];
	puts("Enter a string, please!");
	gets_s(words,81);
	printf("your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done.");

}
int main(void)
{
	test5();
	return 0;
}

