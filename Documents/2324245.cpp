#include<stdio.h>
typedef struct {
	char name[100];
	char id[20];
	int age;
	float score;
}student;
int main(){
	student s={"×Ş¿¡½Ü","122",14,33.01};
	printf("%s %s %d %f",s.name,s.id,s.age,s.score);
	return 0;
	}
