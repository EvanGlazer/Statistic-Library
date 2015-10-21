/**
 *
 * @author Evan Glazer
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//returns the mean of data
double calculateMean(int totnum,  double data[])
{

    double total = 0;

	for(int i=0; i<totnum; i++)
    {
        total += data[i];

    }
    return (double)total/totnum;



	/*// recursively run function till size equal 0 then get mean
	if (totnum == 0) {
		double mean = total / size;
		return mean;
	}
	total += data[totnum];
	calculateMean(totnum - 1, data);
*/
}

//returns the variance
double calculateVariance(int totnum, double data[])
{
    double total = 0;
    double temp[totnum];
    double tempTotal = 0, square = 0;
	double mean = calculateMean(totnum, data);
	for(int i =0; i<totnum; i++)
	{
		total += data[i];
		temp[i] = (data[i] - mean);
		tempTotal += temp[i];
	}

    for(int j=0; j<totnum; j++)
    {
        double item = temp[j];
        square += pow(item, 2);
    }

    double result = (square / (totnum));
    return result;


}

//returns the standard deviation
double calculateStdDev (int totnum, double data[])
{
	double num = calculateVariance(totnum, data);
		return sqrt(num);
}

//sorts the array data
void sort(int totnum, double data[])
{
	// Bubble sort has been implemented
	double temp = 0;

	 for (int c = 0 ; c < ( totnum - 1 ); c++)
      {
        for (int d = 0 ; d < totnum- c - 1; d++)
        {
          if (data[d] > data[d+1])
          {
            /* Swapping */
            temp = data[d];
            data[d] = data[d+1];
            data[d+1] = temp;
          }
        }
          }

}

//returns the minimum value
double findMinValue(int totnum, double data[])
{
	sort(totnum, data);
	return data[0];
}

//returns the median value
double findMedian(int totnum, double data[])
{
	sort(totnum, data);
	if(totnum % 2 == 0)
    {
        return (data[totnum/2] + data[totnum/2 - 1])/2;
}

    else{
	return data[totnum/2];
}}

//returns the maximum value
double findMaxValue(int totnum, double data[])
{
	sort(totnum, data);
	return data[totnum-1];
}
