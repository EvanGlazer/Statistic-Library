/**
 *
 * @author Evan Glazer
 *
 */

#include <stdio.h>
#include <math.h>
#include "statlib.c"



int main()
{
	// data of array
	double input[] = {30.0, 90.0, 100.0, 84.0, 72.0, 40.0, 34.0, 91.0, 80.0, 62.0};
	// size of array
	int size = sizeof(input)/sizeof(double);

	// loop for unsorted info
	printf("This is the unsorted array: ");
	for(int i=0; i<size; i++)
	{
        printf("%.2f\t", input[i]);

	}

	// getting information from library based on data of array
	printf("\n");
	printf("The mean is: %.2f", calculateMean(size, input));

	printf("\n");
	printf("The population variance is: %.2f", calculateVariance(size, input));

	printf("\n");
	printf("The standard deviation is: %.2f", calculateStdDev(size, input));

    // sort data
	sort(size, input);
    printf("\n This is the sorted array: ");

	// print new sorted info
	for(int j=0; j<size; j++)
	{
		printf("%.2f\t" , input[j]);

	}

	printf("\n");
	printf("The min value is: %.2f", findMinValue(size, input));

	printf("\n");
	printf("The median value is: %.2f", findMedian(size, input));

	printf("\n");
	printf("The max value is: %.2f", findMaxValue(size, input));

    printf("\n");
	return 0;
}
