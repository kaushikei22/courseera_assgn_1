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
 * @file stat.h 
 * @brief  Analyse the unsigned char data type array
 
  Analyze the an of array of unsigned char data items and report analytics on the maximum, minimum, 
  mean and median of the data set. In addition, this redorder this data set from large to small.
 
 * @author Kaushik Sivanandam
 * @date   28th, December 2018
 
 */

#ifndef __STATS_H__

#define __STATS_H__


float find_mean(unsigned char test[],int size);

float find_median(unsigned char test[],int size);

int find_maximum(unsigned char test[],int size);

int find_minimum(unsigned char test[],int size);

unsigned char sort_array(unsigned char test[], int size);

int print_statistics(unsigned char test[],int size);

char print_array(unsigned char test[], int size);

/*
 * @brief Analyse the unsigned char data type array using following subfunctions

 * print_statistics() 
 * print_array()      
 * find_median()      
 * find_mean()        
 * find_maximum()     
 * find_minimum()     
 * sort_array()       
 
 * @param  print_statistics() - A function that prints the statistics of an array including minimum, 
                                maximum, mean, and median.
   @return Value of mean, median, maximum and minimum value of 32 bit

 * @param  print_array()      - Given an array of data and a length, prints the array to the screen
   
 * @param find_median()       - Given an array of data and a length, returns the median value
   @return Value of the median in 32 bit float type
 
 * @param find_mean()         - Given an array of data and a length, returns the mean
   @return Value of the mean in 32 bit float type
 
 * @param find_maximum()      - Given an array of data and a length, returns the maximum
   @return Value of the maximun in 32 bit integer type

 * param find_minimum()       - Given an array of data and a length, returns the minimum
 * @return Value of the minimum in 32 bit integer type

 * param sort_array()         - Given an array of data and a length, sorts the array from largest to 
                                smallest.
                                (The zeroth Element will be the largest value, and the last element
                                (n-1) will  be the smallest value. )
 */


#endif /*__STATS_H__*/
