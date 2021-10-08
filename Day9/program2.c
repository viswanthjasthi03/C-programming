/*Write a menu driven C program to implement “wc” utility of Linux. Take file as an input and print the following:
a)	Number of characters
b)	Number of lines
c)	Number of words*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    char path[100];

    char ch;
    int characters=0, words=0, lines=0;
   fp = fopen("file2.txt", "r");

    if (fp == NULL)
    {
        printf("\nerror in opening file\n");

        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fp);

    return 0;
}

