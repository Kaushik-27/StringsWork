#include "class.h"
#include <string.h>

int main (int argc, char* argv[])
{
    CClass objLocal;

    char ** localarr = new char*[argc-1];  
    for (int i = 0; i < argc-1; i++)
         {
             localarr[i] = new char(strlen(argv[i+1]+1));
             strcpy(localarr[i],argv[i+1]);
         }

         argc--;

    printf("Given array is\n");
    for (int i = 0; i < argc; i++)
        printf("%d: %s \n", i, localarr[i]);

    objLocal.Execute(localarr,argc);

    printf("Array after short is\n");
    for (int i = 0; i < argc; i++)
        printf("%d: %s \n", i, localarr[i]);

    for (int i = 0; i < argc; i++)
        delete localarr[i];
        
    delete []localarr;
}