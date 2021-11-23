#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>

/**
 * error_handle - handle with exit error code and dprintf msg
 *
 * @f: char
 * @err_code: codigo error
 * @fd: pointer to int
 */
void error_handle(char *f, int err_code, int *fd)
{
	switch (err_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err_code);

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(err_code);

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(err_code);

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd);
		exit(err_code);
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
		error_handle(NULL, 97, NULL);

	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
		error_handle(argv[1], 98, NULL);

	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto < 0)
		error_handle(argv[2], 99, NULL);

	r = read(filefrom, buffer, 1024);
	if (r < 0)
		error_handle(argv[1], 98, NULL);

	while (r > 0)
	{
		w = write(fileto, buffer, r);
		if (w != r)
			error_handle(argv[2], 98, NULL);
	}

	c = close(fileto);

	if (c < 0)
		error_handle(NULL, 100, &fileto);

	c = close(filefrom);

	if (c < 0)
		error_handle(NULL, 100, &filefrom);

	return (0);
}
