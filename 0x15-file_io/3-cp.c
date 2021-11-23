#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}

	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	r = read(filefrom, buffer, 1024);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}



	while (r > 0)
	{
		w = write(fileto, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			exit(98);
		}
		r = read(fileto, buffer, 1024);
	}

	c = close(fileto);

	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}

	c = close(filefrom);

	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}


	return (0);
}
