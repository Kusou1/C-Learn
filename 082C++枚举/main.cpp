#include<stdio.h> 
#include<iostream>

typedef char NAME[20];
NAME a1, a2, s1, s2;

// 类型定义typedef
typedef int INT;

using namespace std;

enum 季节
{
	春,
	夏,
	秋,
	冬,
};

typedef enum Season
{
	Spring,
	Summer,
	Autumn,
	Winter
} SEASON;

enum Weekday
{
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
} myWeek;

int main(void)
{
	int a = 10;
	enum Weekday week;
	
	Weekday weekday = sun;
	weekday = mon;
	weekday = fri;
	
	cout << "weekday = " << weekday << endl;

	myWeek = sun;
	cout << "myWeek = " << myWeek << endl;

	INT INTa = 10;
	cout << "INTa = " << INTa << endl;

	SEASON season = Spring;
	cout << "season = " << season << endl;


	return 0;
}