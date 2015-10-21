/**
 *
 * @author Evan Glazer
 *
 */

#include <stdio.h>
#include <math.h>
//#include <statlib.c>

#define SIZE 10
int main()
{
	double totX = 0 , totY = 0;
	double sumX = 0 , sumY = 0, multXY = 0;
	double temp, sdX, sdY, slope, intY;
	double meanX, meanY, tempX[SIZE], tempY[SIZE];


    	double input[][SIZE] = {{0, 5, 10, 15, 20, 25, 30, 35, 40, 45}, {0, 13, 22, 37, 54, 62, 64, 100, 112, 126}};

    // REGION WHERE WE GET TOAL VALUES OF x,y
	for(int x=0; x<SIZE; x++)
	{
     	  totX += input[0][x];
	}
	for(int y=0; y<SIZE; y++)
	{
          totY += input[1][y];
	}

    for(int i = 0; i< SIZE; i++)
    {
        multXY += ((input[0][i]) * (input[1][i]));
    }

	meanX = totX / SIZE;
	meanY = totY /SIZE;


	// REGION WHERE WE SQUARE X,Y
	for(int x=0; x<SIZE; x++)
	{
		temp = input[0][x];
		input[0][x] = pow(temp,2);
		sumX += input[0][x];
	}
	for(int y=0; y<SIZE; y++)
	{
		temp = input[1][y];
		input[1][y] = pow(temp,2);
		sumY += input[1][y];
	}

	// Get SD
	temp = sumX - (pow(totX,2)/10);
        sdX = multXY - ((totX*totY)/(SIZE)) ;
	sdY = sumY - (pow(totY,2)/10);

	// REGION CORRELATION
	intY = (sdX/temp);
	slope = meanY - (intY*meanX);


	// Print display of results
	printf("The value of v is : %.2f\n", intY);
	printf("The value of b is : %.2f", slope);

	return 0;
}
