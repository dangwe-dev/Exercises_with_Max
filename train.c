#include <stdio.h>
#include <string.h>

void PrintMessage()
{
	printf("Hello, World!\n");
}
void PrintInt(int value)
{
	printf("The integer value is: %i\n", value);
}
 void IntSum (int a, int b)
{ 
	int sum = a + b;
	printf("The sum of these Integers is: %i\n", sum);
}
 int IntSum2(int a, int b)
 {
	 int sum2 = a + b;
	 return sum2;
 }
 float ArrFunction(float arr[], int size)
 {
	 float sum3 = 0;
	 for (int i = 0; i < size; i++)
	 {
		 sum3 += arr[i];
	 }
	 return sum3 / size;
 }
 void PrintFloat(float value)
 {
	 printf("the float value showcased is: %.2f\n", value);
 }
 int goliath(int arr[], int size)
 {
	 int largest = arr[0];
	 for (int i = 0; i <= size; i++)
	 {
		 if (arr[i] > largest)
		 {
			 largest = arr[i];
		 }
	 
	 }
	 return largest;
 }


int main()
{

	PrintMessage();
	int number1 = 7;
	int number2 = 22;
	int number3 = 2;
	int number4 = number1 += number2 * number3;

	PrintInt(number1);
	PrintInt(number2);
	PrintInt(number3);
	PrintInt(number4);
	IntSum(number1, number2);
	IntSum(number1, number3);
	int result = IntSum2(number4, number2);
	PrintInt(result);

	float classnotes[10] = { 70, 65, 87, 35, 97, 46, 78, 58, 88, 78 };
	
	float average = ArrFunction(classnotes, 10);
	PrintFloat(average);
	
	int exercise6[11] = { 20, 34, 56, 67, 38 ,38, 28, 29, 68, 39, 97,};
	
	int goliathresult = goliath(exercise6, 11);
	PrintInt(goliathresult);

	return 0;
}