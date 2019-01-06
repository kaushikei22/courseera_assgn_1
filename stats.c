/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.c 
 * @brief  Analyse the unsigned char data type array
 *
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, 
                        mean, and median.
 * print_array()      - Given an array of data and a length, prints the array to the screen
 * find_median()      - Given an array of data and a length, returns the median value
 * find_mean()        - Given an array of data and a length, returns the mean
 * find_maximum()     - Given an array of data and a length, returns the maximum
 * find_minimum()     - Given an array of data and a length, returns the minimum
 * sort_array()       - Given an array of data and a length, sorts the array from largest to smallest.
                        (The zeroth Element will be the largest value, and the last element (n-1)   
                         will  be the smallest value. )
 *
 * @author Kaushik Sivanandam
 * @date   28th, December 2018
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int minimum;    /* Return the minimun value of the array 'test' in integer formate  */
int maximum;    /* Return the maximun value of the array 'test' in integer formate  */
float mean=0;   /* Return mean value of the array 'test' in the float formate */
float median=0; /* Return median value of the array 'test' in the float formate */

void main()
{
  unsigned char test[SIZE] = {34,201,190,154,8,194,2,6,
                              114,88,45,76,123,87,25,23,
                              200, 112, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};
  
  int size = sizeof(test);    /* Calculate the size of the array 'test' and return the value in  
                                 integer formate */
  

  print_statistics(test,size);
  print_array(test,size);
  sort_array(test,size);
}

/* Prints the statistics of an array 'test', minimum and maximum of integer type & mean and median of float type */
int print_statistics(unsigned char test[],int size)
{
    find_mean(test, size);
    find_median(test,size);
    find_maximum(test,size);
    find_minimum(test,size);
    printf("\n\nThe following are the value of mean, median, maximum and minimum for the given\n unsigned  char array 'test'\n\n");
    printf("The value of mean is = %.2f \n\n",mean);
    printf("The value of median is = %.2f \n\n",median);
    printf("The maximum value is = %d \n\n",maximum);
    printf("The minimum value is = %d \n\n",minimum);
    printf("*********************************************************************\n\n");
}


/* Prints the elements of the array 'test'and its size on the screen
   Return the size of the array in integer formate  */

char print_array(unsigned char test[],int size)
{
    /* Print the elements in the array 'test; */
    printf("The elements in the array 'test' of type unsigned char \n\n");

    for(int i=0;i< SIZE;i++)
    {
        printf("The element %d  in the array 'test' is %d\n\n",i+1,test[i]);
    }
    

    /* Prints the size of the array 'test' */
    
    
    printf("\nThe size of the array 'test' is %d \n\n",size);

    printf("*********************************************************************\n\n");
}

/* To find the mean value of the given array of type unsigned char test and the size of the array is 
   40
   Return the mean value of type float and decimal point rounded to zero */

float find_mean(unsigned char test[],int size)
{
  int sum=0;        /* To store the total value of the elements in array */
  

  for(int i=0;i<=SIZE;i++)
  {
    sum=sum+test[i];
  }
    return(mean=sum/SIZE);

}


/* To find the median value of the given array of type unsigned char test and the size of the array  
   is 40
   Return the median value of type float and decimal point rounded to zero */

float find_median(unsigned char test[] , int size)
{

  
    
  /* if number of elements are even */
  
    if(SIZE%2 == 0) /* Finds the numerator of the division process and check it value is zero */

       median = (test[(SIZE-1)/2] + test[SIZE/2])/2;
  
  /* if number of elements are odd */
  
    else
        median = test[SIZE/2];

    return median;
}

/* To find the maximum value of the given array of type unsigned char test and the size of the array  
   is 40
   Return the maximum value of array of type integer */

int find_maximum(unsigned char test[],int size)
{
    
    
    maximum=test[0];

    for(int i=1;i<size;i++)
    {
        if(test[i]>maximum)   /* Each ith element value is compared to 0th element */ 
        {
            maximum=test[i];  /* New maximum value in the ith element will be updated */ 
            i++;
        }
    }
    return(maximum);
}


/* To find the minimum value of the given array of type unsigned char test and the size of the array  
   is 40
   Return the minimum value of array of type integer */

int find_minimum(unsigned char test[],int size)
{
    
    
    
    minimum=test[0];

    for(int i=1;i<size;i++)
    {
        if(test[i]<minimum)  /* Each ith element value is compared to 0th element */
        {
            minimum=test[i]; /* New minimum value in the ith element will be updated */
            i++;
        }
    }
    return(minimum);
}

/* To sort the given array of type unsigned char test in descending order and the size of the array  
   is 40
   Prints the each element of array in descending order in integer formate */

unsigned char sort_array(unsigned char test[], int size)
{
  int a;
  for (int i = 0; i < SIZE; i++)  /* first element of array is taken */
        {
            for (int j = i + 1; j < SIZE ; j++)  /* Next element to i is taken for the comparison */
            {
                if (test[i] < test[j])   /* Check whether 1st element in array is least when compare 
                                            to the next element in array */
                {
                    a = test[i];         /* Assign ith element in a */
                    test[i] = test[j];   /* Assign jth element to ith element */
                    test[j] = a;         /* Assign the value of a to jth element */
                }
            }
         }

  printf("The elements in the array after sorting process in descending order\n\n");

  for(int i=0;i< SIZE;i++)
    {

        printf("The element %d  in the array 'test' is %d\n\n",i+1,test[i]);
    }

  printf("*********************************************************************\n\n");

}


