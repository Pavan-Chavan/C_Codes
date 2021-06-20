/*
Owner : Pavan Chavan 
Title : Printing current file code on console
*/
#include<stdio.h>
void main()
{
    FILE *fp=fopen("PrintingSrcFileOnConsole.c","r");
    if(fp==NULL)
    printf("File not Found");           //checking is file is open or not
    else
    {
        char ch;
        puts("Your Entered file is:");
        while((ch=fgetc(fp))!=EOF)              // priting data until it get to EOF i.e ctrl+z
        putchar(ch);
    }
    fclose(fp);
}
