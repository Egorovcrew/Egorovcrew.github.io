#define LINE_LENGTH 512
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: cat filename [filename ...]\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        FILE* file = fopen(argv[i], "r");

        if(file == NULL)
        {
            perror(argv[i]);
            return 1;
        }
        else
        {
            printf("%s:\n", argv[i]);
            char line[LINE_LENGTH];
            while(fgets(line, LINE_LENGTH, file) != NULL)
            {
                printf("%s", line);
            }
            printf("\n");
        }
    }

    return 0;
}

