//Write a c program to count the frequency of each number in a 1-D array.All the elements in the array are integers.

#include <stdio.h>    
     
int main()    
{    
int a[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};        
int length = sizeof(a)/sizeof(a[0]);       
int fr[length];    
int visited = -1;            
for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(a[i] == a[j]){    
                count++;
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }        
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", a[i]);      
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}    
