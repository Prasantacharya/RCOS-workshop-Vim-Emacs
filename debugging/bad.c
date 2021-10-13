#include <stdio.h>

int main(){
// TODO: write buggy c file
    char* text = "hello there,";
    text[0] = "H";
    printf("%s \n %s", text,"GENERAL KENOBE!");
// example of a seg fault
    return 0;
}
