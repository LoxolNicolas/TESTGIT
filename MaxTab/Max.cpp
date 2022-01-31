#include "Max.h"

int MaxFromTab(int tab[], const int taille)
{
	if (taille == 0)
	{
		return -1;
	}
	else
	{
		int max = tab[0];
		for (int i = 1; i < taille - 1; ++i)
		{
			if (tab[i] > max)
			{
				max = tab[i];
			}
		}

		return max;
	}
}