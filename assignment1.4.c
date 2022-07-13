#include<stdio.h>
#include<string.h>
void main()
{

    char a[20];
    int length;
    printf("Enter the string=");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
        length++;
    printf("%d",length);
}
