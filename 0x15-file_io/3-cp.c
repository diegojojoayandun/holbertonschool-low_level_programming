#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

/**
 * err_handler - error handler and print msg
 * @fd: File descriptor of the file
 * @err_code: error exit code
 * @f: char pointer
 */
void err_handler(char *f, int err_code, int fd)
{
	switch (err_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - ejemplo de una funcion que toma parametros desde
 * linea de comandos
 * @argc: contador de tipo entero que almacena numero de argumentos
 * ingresados, teniendo en cuenta que el de indice 0 es el nombre
 * del programa
 * @argv: array que contiene los argumentos
 * Return: 0 si es exitoso cualquier otro valor en caso de error
 */
int main(int argc, char *argv[])
{
	int fileto, filefrom, r, w, c;
	char buffer[1024];

	if (argc != 3)
		err_handler(NULL, 97, 0);

	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
		err_handler(argv[1], 98, 0);

	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto < 0)
		err_handler(argv[2], 99, 0);
	r = read(filefrom, buffer, 1024);
	if (r < 0)
		err_handler(argv[1], 98, 0);
	while (r > 0)
	{
		w = write(fileto, buffer, r);
		if (w != r)
			err_handler(argv[2], 99, 0);

		r = read(fileto, buffer, 1024);
	}
	c = close(fileto);
	if (c < 0)
		err_handler(NULL, 100, fileto);

	c = close(filefrom);
	if (c < 0)
		err_handler(NULL, 100, filefrom);

	return (0);
}
