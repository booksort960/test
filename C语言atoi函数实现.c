#include <stdio.h>
#include <ctype.h>
int my_atoi(const char* arr)
{
	int sum = 0;
	int flag = 0;
	if (arr == NULL)
		return 0;
	while (*arr)
	{
		if (isspace(*arr) || (!isdigit(*arr)))
		{
			if (flag != 0)
				break;
			arr++;
			continue;
		}
		else if (isdigit(*arr))
		{
			flag += 1;
			sum = sum * 10 + (*arr - '0');
			arr++;
		}
	}
	return sum;
}
int main(void)
{
	char arr[] = "  asd 1234.5";
	int ret = my_atoi(arr);
	printf("%d", ret);
	return 0;
}