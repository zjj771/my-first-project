#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct student
 {
    char name[20];
    int EnglishScore;
    int mathScore;
    struct student *next;
} Student;



int main()
 {
    Student *student1 = (Student *)malloc(sizeof(Student));
    Student *student2 = (Student *)malloc(sizeof(Student));
    Student *student3 = (Student *)malloc(sizeof(Student));
    strcpy(student1->name, "张三");
    student1->EnglishScore = 80;
    student1->mathScore = 90;
    student1->next = student2;
    strcpy(student2->name, "李四");
    student2->EnglishScore = 75;
    student2->mathScore = 85;
    student2->next = student3;
    strcpy(student3->name, "王五");
    student3->EnglishScore = 90;
    student3->mathScore = 95;
    student3->next = NULL;
    Student *current = student1;
    while (current!= NULL)
	 {
        printf("姓名: %s, 英语成绩: %d, 高数成绩: %d\n", current->name, current->EnglishScore, current->mathScore);
        current = current->next;
    }
    free(student1);
    free(student2);
    free(student3);
    return 0;

}
