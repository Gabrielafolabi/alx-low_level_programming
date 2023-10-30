#include "main.h"

/**
  * read_textfile - function that reads a text file and prints 
  * @filename: The source file
  * @letters: Number of letter
  *
  * Return: Success alway
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, rd;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}
	f = open(filename, O_RDONLY, 0600);
	if (f == -1)
	{
		return (0);
	}
	rd = read(f, buff, letters);
	write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(f);
	return (rd);
}
