#include <stdio.h>

enum Week
{
	Mon, // 0
	Tue = 2,
	Wed,
	Thu,
	Fri,
	Sat,
	Sun
};

enum Year
{
	Spring = 1,
	Summer,
	Autumn,
	Winter
};

int main(void)
{
	enum Week day;
	day = Sun;

	printf("%d\n", day);
	return 0;
}