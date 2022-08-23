#include <stdio.h>
#pragma warning(disable : 4996)

// union Data
//{
//	int i;
//	char ch;
//	float f;
// }data1, data2, data3;

union Data
{
	int i;
	char ch;
	float f;
};

// union
//{
//	int a;
//	int b;
//	int c;
// };

struct Person
{
	int num;
	char name[10];
	char sex;
	char job;
	union PersonData
	{
		int class;
		char position[10];
	} personData;
};

int main(int argc, const char *argv[])
{
	/*union Data data1;
	data1.i = 1;
	data1.f = 1.0f;
	data1.ch = 'c';

	printf("%c\n", data1.ch);*/

	struct Person person[2];

	// union PersonData persionData;

	for (size_t i = 0; i < 2; i++)
	{
		scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);

		if (person[i].job == 's')
		{
			scanf("%d", &person[i].personData.class);
		}

		if (person[i].job == 't')
		{
			scanf("%s", person[i].personData.position);
		}
	}

	for (size_t i = 0; i < 2; i++)
	{
		if (person[i].job == 's')
		{
			printf("%d %s %c %c %d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].personData.class);
		}

		if (person[i].job == 't')
		{
			printf("%d %s %c %c %s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].personData.position);
		}
	}

	return 0;
}

// 100 张三 m s 105
// 101 李四 f t teacher
// 100 张三 m s 105101 李四 f t teacher请按任意键继续. . .
//
// 100 张三 m s 105
// 101 李四 f t teacher