#include <stdio.h>

#include <stdlib.h>



typedef struct node

{

    int info;

    struct node * next;

    struct node * prev;

};

int i;



void display( struct node * p );

int lengthSearch( struct node * p );

void swap( int *a , int *b );

void insertionSort( struct node * p );



int main()

{



    struct node * p = (struct node *) malloc( sizeof( struct node) );

    p -> next = NULL;

    p -> prev = NULL;

    p -> info = rand() % 23;



    struct node * head = p;



    for( i = 0 ; i < 6 ; i++ )

    {

        struct node * newEl = (struct node *) malloc( sizeof( struct node) );

        newEl -> next = NULL;

        newEl -> prev = p;

        newEl -> info = rand() % 23;



        p -> next = newEl;

        p = newEl;

    }

    printf( "In this moment, the list looks like: " );

    display( head );







    p = head;





    int length = lengthSearch( p );

    struct node * arrow;



    for( i = 1 ; i < length ; i++ )

    {

        p = p -> next;

        arrow = p;



        while( arrow -> prev  &&  (arrow -> prev -> info) >  (arrow -> info) )

        {

            int aux;

            aux = arrow -> prev -> info;

            arrow -> prev -> info = arrow -> info;

            arrow -> info = aux;



            arrow = arrow -> prev;

        }

    }



    display( head );



    return 0;

}



void display( struct node * p )

{

    while( p )

    {

        printf( "\n%d", p -> info );

        p = p -> next;

    }

}



int lengthSearch( struct node * p )

{

    int length = 0;

    while( p )

    {

        length++;

        p = p -> next;

    }

    return length;

}
