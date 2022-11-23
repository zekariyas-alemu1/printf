#include "main.h"
#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
	printf("String:[%s]\n", "I am a string");
	_printf("String:[%s]\n", "I am a string");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	printf("Let's print a simple sentence.\n");
	_printf("Let's print a simple sentence.\n");
	printf("%c", 'S');
	_printf("%c", 'S');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("Lets see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("Lets see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("%s", "This is a sentence retrieved from va_args!\n");
	_printf("%s", "This is a sentence retrieved from va_args!\n");
	printf("Complete this. You %s nothing, Jon.\n", "know");
	_printf("Complete this. You %s nothing, Jon.\n", "know");
	printf("Complete this. You %s nothing, Jon.\n", (char *)0);
	_printf("Complete this. You %s nothing, Jon.\n", (char *)0);
	printf("%c%cth %s%sa%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%c%cth %s%sa%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%%");
	_printf("%%");
	printf("%c", '\0');
	_printf("%c", '\0');
	printf("%");
	_printf("%");
	return (0);
}
