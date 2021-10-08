//Write a program to read n number of strings using two-dimensional character array, sort them and display the sorted list of strings on the screen. (use strcmp and strcpy library functions)

#include <stdio.h>
    #include <string.h>
    void main()
    {
 
        char a[20][20], b[20][20], temp[20];
        int i, j, n;
 
        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names n \n", n);
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", a[i]);
            strcpy(b[i], a[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(a[i], a[j]) > 0) 
                {
                    strcpy(temp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", b[i], a[i]);
        }
 
        printf("------------------------------------------\n");
 
    }
