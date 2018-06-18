
#include <stdio.h>

int		g_scope = 0;
int		f(void)
{
	return 1;
}

namespace test1
{
	int		g_scope = 2;
	int		f(void)
	{
		return 3;
	}
}

int		main()
{
	printf("g_scope =\t[%d]\n", g_scope);
	printf("function =\t[%d]\n", f());
	printf("test1::g_scope =\t[%d]\n", test1::g_scope);
	printf("test1::function =\t[%d]\n", test1::f());
	return 0;
}
