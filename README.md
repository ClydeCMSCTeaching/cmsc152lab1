# cmsc152lab1

## Lab 1
In this lab you will complete a series of exercises.

#### exercise 1: print numbers (10 points)
In this exercise, you will write a function that takes a number between 0 and 99, and print the English word(s) of that number, like following:

* 0: zero
* 7: seven
* 12: twelve
* 32: thirty-two
* 98: ninety-eight

First write a function that takes an integer between 0 and 99 and prints out the written version of the number.

In addition, this function returns 0 if it prints out the English version of the number successfully.

If the user enters any number out of the range between 0 and 99, print out an error "error (print_number): [description of error]". Remember, as described in hw1, to use fprintf rather than printf and send the output to stderr. Return -1 to indicate that an improper input was received.

Note: You may not use an array for this exercise. This is an exercise in choosing proper control structures, not choosing proper data structures. That will come later!
The function header must be as follows:

Don't forget to complete this portion, test it, and commit it before moving on!


#### exercise 2: (15 points)
Context: We are used to a decimal number system, i.e., a number system with base 10. However, there are other number systems as well. For example, binary numbers (numbers with base 2) are commonly used in computers. Hexadecimals are numbers that based on number 16.

Read [this post](https://www.mathsisfun.com/hexadecimals.html) to learn hexadecimal numbers.

To summarize what a hexadecimal number system is, instead of using digits 0 to 9, it uses digits 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F. A hexadecimal number 10 is decimal number 16

In this exercise, you will write a function that converts a decimal number to a hexadecimal number. There is a nice recursive algorithm for this purpose.

Read [this page](https://www.permadi.com/tutorial/numDecToHex/) to learn the algorithm converting decimal numbers to hexadecimal numbers.

To summarize, the algorithm works as follows:

Given a decimal number n, you divide this number by 16, and write down the result as well as the remainder.
Now the result becomes n, and you repeat step 1, until the result becomes 0.
Output the remainders in the reverse order, this will be the hexadecimal number representation of the decimal number n.
For example, decimal number 31 is hexadecimal number 1F, decimal number 145 is hexadecimal number 91, etc. Verify this is true with the algorithm we provide.

The function skeleton is provided as follows:

void print_hex(unsigned int number);
You may assume that the input number is non negative.

Note: You may not use arrays or loops for this exercise. You must use recusion. Remember that recursion is a problem-solving technique, not just a solution. This is the key to this problem. If you can't figure it out, please come into to office hours! I'm happy to help you!
You must clearly label your base case, smaller case, and general case in comments

Don't forget to complete this portion, test it, and commit it before moving on! If you get stuck, you may move on. Otherwise, make sure you go through all steps.

#### exercise 3: (10 points)
It is pretty limiting to only print one letter per line. We want to support writing words, as such:
```
****  *   * ***** 
*   * *   *   *   
****  *   *   *   
*  *  *   *   *   
*   *  ***    *   
```
There is a single space between each letter (or column of spaces, to be more accurate).
The function prototype is as follows:
void print_asterisk_word(char word[], unsigned int length);
You already wrote a print_asterisk_letter function in the warmup. You are now using an array, which you saw in class on Friday. I have provided skeleton code for you to test it. Think about whether or not you can use that function for this part. At its heart, this an exercise in function decomposition, not coding. The way you break down this exercise is going to greatly influence the readability of your solution. Think about how the computer is going to print it out, then think about giving that information in such a way that divides nicely into functions. You should have helper functions, but not necessarily the ones you think.


#### exercise 4: (10 points)
Write a function to print the following asterisk shape with parameter h = 5.
```
*        *
**      **
***    ***
****  ****
**********
**********
**********
**********
**********
**********
**********
 ******** 
  ******  
   ****   
    **    
```
At the top are two isosceles right triangles, with side height and width of h. In the middle is a rectangle with height h and width 2h. At the bottom is an upside-down isosceles triangle with base width 2h and height h. You can view it as "moving" a triangle from the top to the bottom.

Please write the function with the following function signature.

`void print_asterisk_shape(unsigned int h);`
When we change the value of h, your function should be able to print shapes with corresponding length of h. Accept any intput between 1 and 40, inclusive.

Don't forget to complete this portion, test it, and commit it before moving on!


#### exercise 5 (20 points)
Sorting is an algorithm that puts elements of an array in order. It is one of the most fundamental algorithms we will learn in an algorithm course. People have invented many good sorting algorithms, some of which are very efficient.

In this exercise, we will implement one of the less efficient, but simple, sorting algorithms. The most efficient algorithms are "quick sort" and "merge sort", which we will learn later in the course. However, the purpose of this exercise is to get you familiar with array operations, so efficiency is not a big concern here.

This sort we are doing takes a set of unordered numbers and inserts them, one at a time, into an array in sorted order. That is, after 1 iteration, 1 item is in the array. After 2 iterations, 2 items are in the array, and they are sorted. After 3 iterations, 3 items are in the array, and they are sorted. This continues until all n items have been inserted into the array, leaving us with a sorted array. More specifically, the algorithm is decomposed as follows:

            void sort(int source_array[], 
                int dest_array[], unsigned int size);

We maintain two arrays, one source_array contains a random sequence of numbers to be sorted, and another dest_array is empty initially, and will be filled with sorted array numbers.
Loop over each element of source_array from the beginning, and insert that number to dest_array, gradually building a larger sorted array.
We need a helper function to perform that insertion of a single value into the array.
void insert_into_array(int array[], unsigned int cur_size,
unsigned int total_size, int value)

You may assume that array currently holds cur_size items, stored in locations 0 through cur_size-1, in it in sorted order. Furthermore, it is large enough to hold total_size items. To perform the insertion, cur_size must be less than total_size. At the end of this function, there are now cur_size+1 items in sorted order - the original ones and value.


#### Exercise 6 (15 points)
In this exercise you will need to locate a c function using Google (or any source of your choosing) which 
generates a random number uniformly. This function, when called, will return a uniform random number between 0 and 1, `uniform_random`.

In the second part of this exercise, you need to, utilizing the first function you wrote, generate a random integer between the provided parameters, `uniform_random_int_range`.

In the third part of this exercise, you need to, utilizing the first function you wrote, generate a random double between the two provided bounds, `uniform_random_int_range`

#### Exercise 7 (20 points)
In this exercise you will use the previous function `uniform_random` to create a normal distribution generator. 
Recall, that a uniform distribution uniformly samples the range 0 to 1 while a normal distribution samples around a mean, mu, with a standard deviation.

Using this link, read about the ways of transforming a uniform random number generator to a normal random number generator here: [here](https://en.wikipedia.org/wiki/Normal_distribution#Generating_values_from_normal_distribution)

For the last function in this exercise, `normal_random_number`, you can choose from any of the three methods you code to utilize. 


### Requirements
For every function, you must create tests in the main function. You will have points taken away if there is not proper testing included in your submission. 

For exercises 6 and 7, you will need to be creative to come up with some tests (and correspoindgly, will not lose points if the tests for these two exercises are not sufficient)

#### Bonus 2 points for working with a partner using git to properly commit and manage working together
