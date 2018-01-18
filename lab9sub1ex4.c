#include <stdio.h>

#include <stdlib.h>



int *ar;

int length;

int i;

int j;



void swap( int * a, int * b );



int main()

{

    printf("Enter the length: \n");

    scanf( "%d" , &length );



    ar = (int *) malloc( length * sizeof( int ) );



    printf( "Enter the sequence: \n" );

    for( i = 0 ; i < length ; i++ )

        scanf( "%d" , (ar + i) );



    for( i = 0 ; i < length ; i++ )

        for( j = i + 1 ; j < length ; j++ )

        {

            if( *(ar + i) > *(ar + j) )

                swap( (ar + i) , (ar + j) );

        }



    printf( "The sequence sorted: \n" );

    for( i = 0 ; i < length ; i++ )

        printf( "%d " , *(ar + i) );



    return 0;

}



void swap( int * a, int * b )

{

    int aux;



    aux = *a;

    *a = *b;

    *b = aux;

}
