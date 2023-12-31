#include "main.h"

/**
  * create_file - function that creates a file
  * @filename:
  * @text_content:
  *
  * Return: Always success
  */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
	{
		return (-1);
	}
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		write(f, text_content, _strlen(text_content));
	}
	close(f);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: Always success
  */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
