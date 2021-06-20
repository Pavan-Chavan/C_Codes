/*
Owner : Pavan Chavan 
Title : Reading input from console and storing user entered data in txt file 
*/
#include<stdio.h>
void main()
{
    FILE *fp = fopen("sample.txt","a");     // a-> append apply at the end
    if(fp==NULL)
        printf("File not created...\n");
    else
    {
        char ch;
        puts("Enter your data (Enter Ctrl+z to end data)");
        puts("-----------------"); 
        while((ch=getchar())!=EOF)  //EOF -> end of file  
            fputc(ch,fp);
        fclose(fp);
        puts("One file created...");
    }
}