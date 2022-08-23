#include<stdio.h>
#include<string.h>

#pragma warning(disable : 4996)
//定义结构体
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char address[30];
};

struct Date
{
	int month;
	int day;
	int year;
};

void PrintStruct(struct Student* pStudent)
{
	printf("age = %d\n", pStudent->age);
	printf("name = %s\n", pStudent->name);
}

int main(void)
{
	// {
	//  //结构体实例化
	// 	struct Student student;
	// 	student.num = 1;
	// 	//student.name = "张三";
	// 	//修改string需要借助strcpy
	// 	strcpy(student.name, "张三");

	// 	student.sex = 'M';
	// 	student.score = 100.0f;
	// 	student.age = 20;
	// 	//student.address = "广州天河";
	// 	strcpy(student.address, "广州天河");
	// 	printf("%d\n", student.num);
	// 	printf("%s\n", student.name);
	// 	printf("%s\n", student.address);
	// }

	//=========================结构体指针==================
	// struct Student stu;
	// struct Student* pStudent = &stu;

	// pStudent->age = 10;
	// //pStudent->address = "上海浦东";
	// strcpy(pStudent->address, "上海浦东");

	// printf("%d\n", pStudent->age);
	// printf("%s\n", pStudent->address);
	//=========================结构体指针作为函数参数==================

	struct Student stu;
	stu.age = 10;
	strcpy(stu.name, "阿北");

	PrintStruct(&stu);
	return 0;
}