#ifndef inverted_H
#define inverted_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct node
{
    char filename[20];
    struct node*link;
}Slist;

char file_insert(Slist **head, char *file_name);
char print_list(Slist *head);
#endif