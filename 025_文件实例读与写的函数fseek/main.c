#include <stdio.h>
#pragma warning(disable : 4996);

// fscanf, fprintf 从硬盘上读取文件

struct Student
{
	char name[20];
	int num;
	int age;
	float score;
};

int main(void)
{
	struct Student boys[3];
	struct Student boy;
	struct Student *pBoys;
	FILE *fp;
	pBoys = boys;

	fp = fopen("Text.txt", "wb+");

	if (fp == NULL)
	{
		printf("文件读取失败\n");

		getch();
		exit(1);
	}

	printf("请输入学生的相关数据:\n");

	for (size_t i = 0; i < 3; i++)
	{
		scanf("%s %d %d %f", pBoys->name, &pBoys->num, &pBoys->age, &pBoys->score);
		pBoys++;
	}

	fwrite(boys, sizeof(struct Student), 3, fp);

	// 第三个参数设定从文件的哪里开始偏移
	// 可能取值为：SEEK_CUR、 SEEK_END、SEEK_SET. SEEK_SET：文件开头;
	// SEEK_CUR：当前位置  ;SEEK_END：文件结尾
	fseek(fp, sizeof(struct Student), SEEK_SET);

	fread(&boy, sizeof(struct Student), 1, fp);

	printf("%s %d %d %f\n", boy.name, boy.num, boy.age, boy.score);

	fclose(fp);

	return 0;
}

// A 1 10 95.0
// B 2 20 50.0
// C 3 30 56.0
// B 2 20 50.000000