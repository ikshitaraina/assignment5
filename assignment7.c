
#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    int marks1, marks2, marks3;
    int total;
    float percentage;
};

void accept(struct student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;

        s[i].percentage = s[i].total / 3.0;
    }
}

void display(struct student s[], int n)
{
    int i;

    printf("\nRoll No\tName\tSubject1\tSubject2\tSubject3\tTotal\tPercentage\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n",
        s[i].rollno, s[i].name, s[i].marks1,
        s[i].marks2, s[i].marks3,
        s[i].total, s[i].percentage);
    }
}

int main()
{
    struct student s[100];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    accept(s, n);
    display(s, n);

    return 0;
}
