/*
Owner : Pavan Chavan 
Title : Reading txt file and printing in on console output
*/
#include<stdio.h>
void main()
{
    FILE *fp=fopen("sample.txt","r");   //r-> read
    if(fp==NULL)
    {
        printf("file not found...\n");  //cheking is file created or not
    }
    else
    {
        char ch;
        puts("===File information===");
        puts("----------------------");
        while((ch=fgetc(fp))!=EOF)      // priting data until it get to EOF i.e ctrl+z
        {
            putchar(ch);
        }
    }
    fclose(fp);
}