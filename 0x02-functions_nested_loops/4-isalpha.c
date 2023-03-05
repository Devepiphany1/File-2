#include "main.h"


	/**
	 * _isalpha - checks for alphabetic character
	 * @c: the character to be checked
	 * Return: 1 if c is a letter, 0 otherwise
	 */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}




=====================================

4-main.c CODE



#include "main.h"


	/**
	 * main - check the code.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    int r;


	    r = _isalpha('H');
	    _putchar(r + '0');
	    r = _isalpha('o');
	    _putchar(r + '0');
	    r = _isalpha(108);
	    _putchar(r + '0');
	    r = _isalpha(';');
	    _putchar(r + '0');
	    _putchar('\n');
	    return (0);
	}
