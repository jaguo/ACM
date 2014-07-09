#include <stdio.h>
#include <string.h>

void A(char *s)
{
	char *p = s + strlen(s) - 1;
	if (strchr(s, '.'))
		while (*p == '0')
			*p-- = 0;
	if (*p == '.')
		*p = 0;
}
int main()
{
	char *pa, *pb;
	char a[12001], b[12001];
	while (scanf("%s%s", &a, &b) != EOF)
	{
		pa = a; pb = b;
		while (*pa == '0')
			pa++;
		while (*pb == '0')
			pb++;
		A(pa);
		A(pb);
		puts(strcmp(pa, pb) ? "NO" : "YES");
	}

	return 0;
}
