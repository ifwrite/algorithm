#include <stdio.h>

int main(void)
{
  //输入0-10之中的五个数排序
  int a[11], i, j, t;
  for (i = 0; i <= 10; i++) 
  {
    a[i] = 0;
  }

  for (i = 0; i < 5; i++) 
  {
    scanf("%d", &t);
    a[t]++;
  }

  //遍历数组，元素是几就出现几次，倒序遍历就是按大到小排序
  for(i = 10; i >= 0; i--)
  {
    for(j = 0; j < a[i]; j++)
    {
      printf("%d", i);
    }
  }
  printf("\n");
  return 0;
}
