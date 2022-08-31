#include<stdio.h>

int main (void) {
    int size, grade, current_grade; 
    int grade_array[20]; 
    FILE* file;

    scanf("%d", &current_grade);

    file = fopen("myGrades.txt", "r");

    size = 0;
    while (fscanf(file, "%d", &grade)!= EOF) {
        grade_array[size] = grade;
        size++;
        
    }
    fclose(file);

    size += -1;

    if (current_grade != grade_array[size]) {
        file = fopen("myGrades.txt", "a");
        fprintf(file, " %d", current_grade);
        fclose(file);
    }

    file = fopen("myGrades.txt", "r");
    while (fscanf(file, "%d", &grade)!= EOF) {
        printf("%d ", grade);
    }
    fclose(file); 

    return 0;
}