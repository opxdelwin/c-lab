#include<stdio.h>

int main(void) {

    int marks;
    char grade;

    printf("Enter student's mark: ");
    scanf("%d", &marks);

    if(marks >= 90){
        grade = 'O';
    } else if(marks >= 80 && marks < 90) {
        grade = 'E';
    } else if (marks >= 70 && marks < 80) {
        grade = 'A';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else if (marks < 40) {
        grade = 'F';
    } else {
        printf("Error computing grade");
        return 0;
    }

    printf("Secured grade is %c\n", grade);

    return 0;
}