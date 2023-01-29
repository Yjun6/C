
//关于 const 修饰指针  指针常量
//int main()
//{
//	
//	int a = 10;
//	int b = 0;
////	const int* p = &a;
////	//*p = 13;//err *p 不能被修改
////	p = &b;
//
//	int* const p = &a;
//	*p = 13;
//	//p = &b;//err p 不能被修改
//	printf("%d", *p);//13
//	return 0;
//}

////关于 const 修饰变量
//int main()
//{
//	const  int a = 10;
//	/*a = 112;*///err a不能被修改
//	/*int arr[a] = { 0 };*///err a本质是变量
//	printf("%d ", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3.14e3;
//	printf("%d   ", a);//3140
//	a = 312e5;
//	printf("%d   ", a);//31200000
//
//	/*int a = 0;
//	scanf("%d", &a);*/
//	return 0;
//}