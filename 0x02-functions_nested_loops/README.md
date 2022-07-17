A function is a group of statements that together perform a task.

void sum();  //function defination
{
	int a, b, sum=0;
	printf("Enter number:");
	scanf("%d %d", &a, &b);
	sum = a+b;
	printf("sum = %d", sum);
}

main()
{
	sum();  //function calling
	....
	....
	....
}	
