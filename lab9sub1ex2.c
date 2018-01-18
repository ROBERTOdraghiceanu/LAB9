#include <stdio.h>

#include <stdlib.h>



int *ar;

int i;

int length;

int noSearch;



int main()

{

    printf( "Enter the length of the string: \n" );

    scanf( "%d" , &length );



    ar = ( int* ) malloc( length * sizeof( int ) );



    printf( "Enter the string (sorted): \n" );

    for( i = 0; i < length; i++ )

        scanf( "%d" , (ar + i) );



    printf( "Enter the searched number: \n" );

    scanf( "%d" , &noSearch );



    int left = 0;

    int right = length - 1;



    while( left <= right )

    {

        int middle = (left + right) / 2;



        if( *(ar + middle) > noSearch )

            right = middle - 1;

        if( *(ar + middle) < noSearch )

            left = middle + 1;

        if( *(ar + middle) == noSearch )

        {

            printf( "The index is: %d\n" , middle );

            break;

        }

    }



    if( left > right )

        printf( "\nDon't exist\n" );



    free(ar);

    return 0;

}
