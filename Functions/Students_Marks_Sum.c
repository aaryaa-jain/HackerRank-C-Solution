/*
Problem: Students Marks Sum (HackerRank)

Task:
Given the marks of students and a character indicating gender:
- If gender is 'b', calculate the sum of marks at even indices
- If gender is 'g', calculate the sum of marks at odd indices

Output:
Print the required sum of marks.
*/

#include <stdio.h>
#include <stdlib.h>

int marks_summation(int *marks, int number_of_students, char gender)
{
    int sum = 0;

    if (gender == 'b') {
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else {
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    return sum;
}

int main()
{
    int number_of_students;
    char gender;
    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    scanf(" %c", &gender);
    printf("%d", marks_summation(marks, number_of_students, gender));
    free(marks);
    return 0;
}
