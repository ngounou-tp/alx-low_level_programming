#include "main.h"
#include <sys/type.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcnt1.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file
 * @filename: the name of the file 
 * @letters: the size of the letters it contain 
 * Return: the size of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int f1, f2, f3;
    char *file;
    
    if (filename == NULL)
         return (0);
    
    file = malloc(sizeof(char) * letters);
    if (file == NULL)
        return (0);
    
    f1 = open(filename, O_RDONLY);
    if (f1 < 0)
    {
        free(file);
        return (0);
    }

    f2 = read(f1, file, letters);
    if (fdr < 0)
    {
        free(file);
        return (0);
    }

    f3 = write(STDOUT_FILENO, file, f2);
    free(file);
    close(f1);

    if (f3 < 0)
       return (0);
    return ((ssize_t)f3);
        
}