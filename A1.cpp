#include <stdio.h>
#include <math.h>

////1.ÅÜ²½ÑµÁ·
//int main()
//{
//    int minu = 0, second = 0, i;
//    for (i = 10000; i >= 0;)
//    {
//        minu++;
//        if (minu % 2 == 0)
//        {
//            i += 300;
//        }
//        else
//        {
//            i -= 600;
//        }
//    }
//    second = minu * 60;
//    printf("%d", second);
//    return 0;
//}

////2.ºÏ²¢¼ì²â
int main()
{
	int k=0, K=0;
	double max = 0, temp=0;
	for (k = 1;; k++)
	{
		temp = -1 + pow(0.99, k) * k;
		if (temp > max)
		{
			max = temp;
			K = k;
		}
		if ((k-K)>2)
			break;
	}
	printf("%d-->%6.00lf",k, max);
	return 0;
}