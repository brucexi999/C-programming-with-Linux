#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

void copy_str (char*, char*);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge) {
    struct student* indi_ptr; // Pointer to the address that stores an indivaidual student's info. 
    indi_ptr = (struct student *) malloc (sizeof(struct student));
    copy_str(studentName, indi_ptr->name);
    indi_ptr->age = studentAge; 
    
    return indi_ptr; 
}

void copy_str (char* from, char* to) {
    int i= 0;
    
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
    }
    
    to[i] = '\0';
}