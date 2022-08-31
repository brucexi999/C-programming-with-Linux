#include <stdio.h>

void main (void) {
    double my_score, other_score;
    int count = 2;
    int highest = 1;
    FILE* infile; 
    infile = fopen("gradeComparison.txt", "r");
    fscanf(infile, "%lf", &my_score);
    while (fscanf(infile, "%lf", &other_score) != EOF) {
        if (other_score <= my_score) {
            count++;
        } else {
            highest = 0;
            break;
        }

    }

    if (highest) {
        printf("Yes\n");
    } else {
        printf("No %d\n", count);
    }

}