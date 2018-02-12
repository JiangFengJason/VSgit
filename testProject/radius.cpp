// testProject.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int radiusplus;
	float radius;
	int result = 0;
	scanf("%d", &radiusplus);
	radius = sqrt(radiusplus);
	for (int i = 1; i*i < radiusplus; i++)
	{
		int n = (int)sqrt(radiusplus - i*i);
		if (i*i+n*n == radiusplus)
			result += 4;
	}
	if (radius-(int)radius==0)
		result += 4;
	printf("%d", result);
    return 0;
}

