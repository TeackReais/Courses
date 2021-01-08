//accepted
#include <iostream>
#include <stdio.h>

int main()
{
	int break1;
	int ok;
	while (scanf("%d %d", &break1, &ok) != EOF)
	{
		int breaks[break1];
		int oks[ok];
		for (int i = 0; i < break1; i++)
		{
			scanf("%d", &breaks[i]);
		}
		for (int i = 0; i < ok; i++)
		{
			scanf("%d", &oks[i]);
		}
		bool judge = true;
		for (int i = 0; i < break1; i++)
		{
			int now = breaks[i];
			bool judge2 = false;
			for (int d = 0; d < ok; d++)
			{
				if (oks[d] == now)
				{
					judge2 = true;
				}
			}
			if (!judge2)
			{
				judge = false;
				break;
			}
		}
		if (judge)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}