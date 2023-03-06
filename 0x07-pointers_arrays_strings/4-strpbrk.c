#include "main.h"

/**
 * _strpbrk() - a  function locates the first occurrence in the string
 *
 * @s: the first occurrence in the string
 *
 * @accept: of any of the bytes in the string
 *
 * Return: a pointer to the byte
 */

 char *_strpbrk(char *s, char *accept);
 {
  	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
