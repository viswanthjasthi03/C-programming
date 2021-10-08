/*Write a C program with a function any (s1, s2). This function returns the first location (index of location) in the string s1 which matches with any string in s2 otherwise return NULL. Do not use string library functions(strstr)*/

#include <stdio.h>
#include <string.h>

int any(char s1 [], char s2 []);

int main(void){
    char s1 [] = "This is fun";
    char s2 [] = "fin";

    int loc = any(s1, s2);

    if ( loc == -1 ){ printf("Null\n"); }
    else { printf("%d\n", loc); }

    return 0;
}

int any(char s1 [], char s2 []){

    int i = 0, j = 0;

    for ( i = 0; i < strlen(s1); i++ ){
        for ( j = 0; j < strlen(s2); j++ ){
            if (s1[i] == s2[j]){
               printf("They are same\n");
            }
        }
        j=0;
    }

    return -1;

}
