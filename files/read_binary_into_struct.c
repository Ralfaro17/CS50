// C program for writing
// struct to file
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// a struct to be read and written
typedef struct {
	int id;
	char primer_nombre[20];
	char apellido[20];
}persona;

int main()
{
	FILE* outfile;

	// Abrir archivo para escritura
	outfile = fopen("persona.bin", "rb");
	if (outfile == NULL) {
		printf("\nError al abrir el archivo\n");
		return 1;
	}

	persona input1;

	// Escribrir struct en el archivo
	int flag = 0;
	flag = fread(&input1, sizeof(persona), 1,
				outfile);
	if (flag) {
		printf("Contenido leido correctamente\n");
	}
	else
		printf("Error al momento de leer el archivo\n");

    printf("id: %d\nprimer nombre: %s\napellido: %s\n", input1.id, input1.primer_nombre, input1.apellido);

	// cierre del archivo
	fclose(outfile);

	return 0;
}
