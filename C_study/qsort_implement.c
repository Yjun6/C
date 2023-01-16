
int jadgment_size(void *str1,void *str2)
{
  return *((int *)str1) - *((int *)str2);
}

void exchange(char *str1, char *str2, unsigned int byte )
{
  unsigned int i = 0;
  for(i = 0; i < byte; i++)
  {
    char tmp = *(str1 + i);
    *(str1 + i) = *(str2 +i);
    *(str2 + i) = tmp;
  }
}

//ascending order
void bubble_sort(void *str, unsigned int sz, unsigned int byte, int (*cmp)(void *str1,void *str2))//address number byte jadgment_size
{
  unsigned int i = 0; 
  unsigned int j = 0;
  for(i = 0; i < sz - 1; i++)
  {
    for(j = 0; j < sz - i - 1; j++)
    {
      //jadgment size
      if(cmp((char *)str + byte * j, (char *)str + byte * (j + 1)) > 0)
        //exchange
        exchange((char *)str + byte * j, (char *)str + byte * (j + 1), byte );
    }
  }
}

void test1()
{
  //array
  int arr[] = {9,8,7,6,5,4,3,2,1};
  //number
  int sz = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, sz, sizeof(arr[0]), jadgment_size);
}

int main()
{
  test1();
  return 0;
}