#include "main.h"

/**
  * main - program that copies the content of a file to another file.
  * @argc: The counting argument
  * @argv: The vector argument
  *
  * Return: Success Always
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - function that copy file.
  * @src: sourced argument
  * @dest: destination argument
  *
  * Return: Success Always
  */
void copy_file(const char *src, const char *dest)
{
	int original, new, red;
	char buff[1024];

	original  = open(src, O_RDONLY);
	if (!src || original == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	new = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((red = read(original, buff, 1024)) > 0)
	{
		if (write(new, buff, red) != red || new == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (red == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(original) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", original);
		exit(100);
	}

	if (close(new) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", new);
		exit(100);
	}
}
