#include<stdio.h>
#include <stdlib.h>


int main() {

    FILE *arch;

    arch = fopen("../Textos.txt", "r");

    if (arch == NULL)
    {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }
    char string[500];


    while(fgets(string, 500, arch))
    {
        printf("%s", string);
    }

    fclose(arch);

    return EXIT_SUCCESS;
}
