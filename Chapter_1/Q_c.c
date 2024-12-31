/* c) If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100. */


#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, tot_marks;
    float percentage;

    printf("Enter the marks of your 5 subjects (out of 100) :\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    tot_marks = (sub1 + sub2 + sub3 + sub4 + sub5);
    percentage = (tot_marks)/5;

    printf("Aggregate marks : %d\n", tot_marks);
    printf("Percantage : %.2f%%\n", percentage);

    return 0;
}