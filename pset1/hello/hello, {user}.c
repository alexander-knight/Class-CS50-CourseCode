#include <cs50.h> 
/*This is a CS50 specifiic module theyre importing for the class, and this doenst exist outside of the CS50 sandbox used in the class
the IDE can be found on https://ide.cs50.io */
#include <stdio.h>


int main(void)
{
    string answer = get_string("What is your name? ");
    /*both object class id "string" and function "get_string are from the cs50.h module importable in the IDE in the link in the previous comment*/
    printf("Hello, %s\n" , answer);
}
