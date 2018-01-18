#include <stdio.h>

#include <stdlib.h>



typedef struct rando{

    int no;

    struct rando *next;

};



int i;

void display( struct rando * p );



int main()

{

    struct rando * p = (struct rando *)malloc( sizeof( struct rando) );

    p -> next = NULL;

    p -> no = rand() % 33;



    struct rando * head = p;



    for ( i = 0; i < 7 ; i++ )

    {

        struct rando * newEl = (struct rando *)malloc( sizeof( struct rando) );

        newEl -> no = rand() % 33;

        p -> next = newEl;



        newEl -> next = NULL;

        p = newEl;

    }



    printf ( "The numbers are : ");

    display( head );





    p = head;



    while( p )

    {

        struct rando * arrow = p;

        while( arrow )

        {

            if( arrow -> no  <  p -> no )

            {

                int aux = arrow -> no;

                arrow -> no = p -> no;

                p -> no = aux;

            }



            arrow = arrow -> next;

        }



        p = p -> next;

    }



    printf( "\n\nAfter sorting:" );

    display( head );



    while( head )

    {

        struct rando * nw = head -> next;

        free(head);

        head = nw;

    }



    return 0;

}



void display( struct rando * p )

{

    while ( p )

    {

        printf( "\n %d ", p -> no );

        p = p -> next;

    }

}
