#include "inverted.h"

int main(int argc, char *argv[])
{
    Slist *head=NULL;
    int i,j;

    for(i=0;i<argc;i++)
    {
        if(argc<=2)
        {
            printf("Pass at least 3 arguments !\n");
            return FAILURE;
        }
        if (strrchr(argv[i], '.') == NULL || strcmp(strrchr(argv[i], '.'), ".txt") != 0)
        {
            printf("this not a valid file ! %s \n",argv[i]);
            continue;
        }
        FILE *fp=fopen(argv[i],"r");
        if(fp==NULL)
        {
            printf("there is no file existing !\n");
            continue;
        }
        if(fgetc(fp)==EOF) //if file is empty it will returns EOF
        {
            printf("the file is empty !\n"); // if file not empty it wil returns the starting address of the first character.
            continue;
        }
        fclose(fp);
        
        if(strcmp(argv[i], argv[i])!=0)  //validation for checking the existence of multiple file.
        {
            //we have to pass the files into single linked list.
            file_insert(&head, argv[i]); 
        }
    }
    print_list(head);
}