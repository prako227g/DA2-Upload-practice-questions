#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
    float gpa;
    int total;
};

void calculate_total(struct Student *s) {
    int i, total = 0;
    for(i = 0; i < 5; i++) {
        total += s->marks[i];
    }
    s->total = total;
}

void calculate_gpa(struct Student *s) {
    int i;
    float grade_points = 0;
    for(i = 0; i < 5; i++) {
        if(s->marks[i] >= 90) {
            grade_points += 4.0;
        } else if(s->marks[i] >= 80) {
            grade_points += 3.0;
        } else if(s->marks[i] >= 70) {
            grade_points += 2.0;
        } else if(s->marks[i] >= 60) {
            grade_points += 1.0;
        }
    }
    s->gpa = grade_points / 5.0;
}

int main() {
    struct Student students[5];
    int i, j;
    
    // input student information
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter marks in 5 subjects for student %d: ", i+1);
        for(j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
        calculate_total(&students[i]);
        calculate_gpa(&students[i]);
    }
    
    // sort students by GPA
    struct Student temp;
    for(i = 0; i < 5; i++) {
        for(j = i+1; j < 5; j++) {
            if(students[i].gpa < students[j].gpa) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    
    // print student information with rank
    printf("\nRank\tName\t\tTotal Marks\tGPA\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%d\t\t%.2f\n", i+1, students[i].name, students[i].total, students[i].gpa);
    }
    
    return 0;
}
