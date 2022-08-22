#include <stdio.h>

#define PI 3.1415926
#define ARRAY_SIZE 1000
#define G 9.8
#define S(a, b) a *b
#define S(r) PI *r *r
#define CIRCLE(r, L, S, V) \
	L = 2 * PI * r;        \
	S = PI * r * r;        \
	V = 4.0 / 3 * PI * r * r * r
#define LETTER 1

int main(void)
{
	/*int myArray[ARRAY_SIZE];

	float l;
	float s;
	float r;
	float v;
	printf("输入半径：");

	scanf("%f", &r);
	l = 2.0 * PI * r;
	s = PI * r * r;
	v = 4.0 / 3 * PI * r * r * r;

	printf("l = %f\ts = %f\tv = %f\n", l, s, v);*/

	char str[20] = "C Language";
	char c;

	int i = 0;

	while ((c = str[i]) != '\0')
	{
		i++;
#if LETTER
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
		}
#else
		if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;
		}

#endif // letter
		printf("%c", c);
	}

	printf("\n");

	return 0;
}