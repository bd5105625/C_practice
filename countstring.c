#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[] = "tttstttt tes tet st te st tesest";
    char search[] = "st";
    int count = 0;
    int pos1 = 0 , pos2 = 0;
    while(pos1 != (strlen(str))){
        if(pos2 != (strlen(search))){
            if(str[pos1] == search[pos2]){
                pos1 = pos1 + 1;
                pos2 = pos2 + 1;
            }
            else{
                pos1 = pos1 - (pos2 - 1);
                pos2 = 0;
            }
        }
        else{
            pos1 = pos1 - (pos2 - 1);
            pos2 = 0;
            count = count + 1;
        }
    }
    printf("%d\n" , count);
}