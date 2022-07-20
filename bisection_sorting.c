/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. 
Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). 
Next, your program should iterate through the letters of the word and compare each letter with the one following it. 
If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. 
You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
*/

#include <stdio.h>

int main (void) {
    
    char word[50]; 
    char swap, aim; 
    scanf("%s", word); 
    int i, j, n, counter, initialized; 

    counter = 0; 
    n = 0; 
    while (word[n] != '\0') {
        n++; 
    } // Find the length of the string. 

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (word[j] > word[j+1]) {
                swap = word[j];
                word[j] = word[j+1];
                word[j+1] = swap;

            }
        }
    } // Bubble sorting the letters with their ASCII codes. 

    initialized = 0; // Equals zero until we find the first repeated letter at which point we initialize that letter to be our "aim". 
    for (i=0; i<n; i++) {
        if (word[i] == word[i+1] && !initialized) {
            counter ++;
            aim = word[i]; 
            initialized = 1; 
        } else if (initialized && word[i] == word[i+1] && word[i] != aim ) {
            counter ++;
            aim = word[i]; 
        }
    }

    printf("%d", counter); 

    return 0;
}