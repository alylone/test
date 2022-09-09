#include<stdio.h>
int fun(char *a ,char b ,int c) {
	for (int i = 0; i < c; i++)
	{
		if (a[i]==b)
		{
			return i + 1;
		}
	}
}
int main() {
	char a[] = "Thisisastring";
	int c = 13;
	char b = 'i';
	printf("%d", fun(a, b, c));
}