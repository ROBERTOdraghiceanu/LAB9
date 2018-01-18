#include <stdio.h>

#include <stdlib.h>



int *arr;

int length;

int i;



void swap( int *a, int *b );

void quickSort( int *arr , int first , int last );



int main()

{

    printf( "Enter the length: \n" );

    scanf( "%d" , &length );



    arr = (int *) malloc( length * sizeof( int ) );



    printf( "Enter the numbers: \n" );

    for( i = 0 ; i < length ; i++ )

        scanf( "%d" , arr + i );



    quickSort( arr , 0 , length - 1 );



    printf( "\n" );

    for( i = 0 ; i < length ; i++ )

        printf( "%d " , *(arr + i ) );



    return 0;

}

void swap( int *a, int *b )

{

    int aux;



    aux = *a;

    *a = *b;

    *b = aux;

}



void quickSort( int *arr , int first , int last )

{

    int i;

    int j;

    int arrow;



    i = first;

    j = last;

    arrow = arr[(first + last) / 2];



    while( i <= j )

    {

        while( arr[i] < arrow )

            i++;

        while( arr[j] > arrow )

            j--;



        if( i <= j )

        {

            swap( (arr + i) , (arr + j) );

            i++;

            j--;

        }

    }



    if( first < j )

        quickSort( arr , first , j );

    if( i < last )

        quickSort( arr , i , last );

}
