/*
    Number Spiral Program
    Display 0 to 99 in spiral order
    From out to in

    Submitted to  https://code.golf/number-spiral#c

    Created by: amd
*/

// ---------------------------------
// Preprocessor Declaration


#define NUM_MAX 99
#define XMAX 10
#define YMAX 10

#include <stdio.h>

// *********************************
// ---------------------------------
// Progran  Entry Point
// ---------------------------------
// *********************************

int main(int argc, char *argv[])
{

    // ***********************
    // Variable Declaration
    int dis[XMAX][YMAX];

    int xdis;

    int i;
    int imin;
    int imax;
    int j;
    int jmin;
    int jmax;

    // ***********************
    // Actual Procedure

    // initialization of variables
    xdis=0;

    imin=0;
    imax=YMAX-1;
    jmin=0;
    jmax=XMAX-1;

    // initialization of number display

    for(i=0; i<=9; i++)
    {
        for(j=0; j<=9; j++)
        {
            dis[i][j]=0;
        };
    };

    // placing number for display

    while(xdis<=NUM_MAX)
    {
        // to right
        j=jmin;
        i=imin;
        while(j<=jmax && xdis<=NUM_MAX)
        {
            dis[i][j]=xdis;
            xdis++;
            j++;
        };

        // to down
        imin++;
        j=jmax;
        i=imin;
        while(i<=imax && xdis<=NUM_MAX)
        {
            dis[i][j]=xdis;
            xdis++;
            i++;
        };

        // to left
        jmax--;
        i=imax;
        j=jmax;
        while(j>=jmin && xdis<=NUM_MAX)
        {
            dis[i][j]=xdis;
            xdis++;
            j--;
        };

        // to up
        imax--;
        i=imax;
        j=jmin;
        while(i>=imin && xdis<=NUM_MAX)
        {
            dis[i][j]=xdis;
            xdis++;
            i--;
        };

        jmin++;


        
    };

    // Display the number on console screen

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%2i ", dis[i][j]);
        };
        printf("\n");
    };


    return 0;

};
