#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[] = "How to cut string in C";
    char *delim = " ";
    char *cut = NULL;
    char arr[50][50];
    int count = 0;
    cut = strtok(str , delim);
    while(cut != NULL){
        strcpy(arr[count] , cut);
        cut = strtok(NULL , delim);
        printf("%s\n" , arr[count]);
        count = count + 1;
    }
    return 0;    
}