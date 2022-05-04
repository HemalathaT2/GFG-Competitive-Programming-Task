#include <stdio.h>

int main()
{
    char str[8] = "A string";
    char *ptr = str;

    printf("%c ",str[0]); /*to print the letter on index 0*/
    
    printf("%c ",*ptr); /*to print the ptr allocated value*/
    
    printf("%c \n",ptr[3]); /*to print alphabet t*/
    
    ptr+=2;
    
    printf("%c ",*ptr); /*To print current value of the pointer location*/
    
    printf("%c ",ptr[2]);/*To print r*/
    
    printf("%c ",ptr[5]);/*To print g*/
    return 0;
}
