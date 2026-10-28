#include "inverted.h"
char file_insert(Slist **head, char *file_name)
{
    Slist *temp;
    temp=*head;

    Slist *ptr=malloc(sizeof(Slist));
    strcpy(ptr->filename, file_name); // reason is this 'filename' is array.
    ptr->link=NULL;

    if(*head==NULL)
    {
        *head=ptr;
        return SUCCESS;
    }
    while(temp!=NULL)
    {
        if(temp->link==NULL)
        {
            temp->link=ptr;
            return SUCCESS;
        }
        temp=temp->link;
    }
    return FAILURE;
}


char print_list(Slist *head)
{
    Slist *temp;
    temp=head;

    if(head==NULL)
    {
        printf("no files existed !\n");
        return FAILURE;
    }
    while(temp!=NULL)
    {
        printf("%s\n",temp->filename);
        temp=temp->link;
    }
    return FAILURE;
}