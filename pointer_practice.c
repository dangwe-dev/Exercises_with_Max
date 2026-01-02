#include <stdio.h>
#include <stdlib.h>

float modifymyfloat(float* convertedatadress, float newfloat)
{
	*convertedatadress = newfloat;

	return *convertedatadress;
}
struct vector
{

	float X;

	float Y;
};

struct vector* CreateVector(float X, float Y)
{
	struct vector* DynamicPtrVector = malloc(sizeof(struct vector));

	if (DynamicPtrVector != NULL)
	{	
		DynamicPtrVector->X = X;
		DynamicPtrVector->Y = Y;

    }


	return DynamicPtrVector;
}

int main()
{
	//Exercise 1 create a float value and print its memory adress.

	float priceofcoffee = 5.75;

	printf("\nThis is the price of coffee at this adress \n%p", &priceofcoffee);

	//Exercise 2 create a pointer whose use is to store the adress of the previously created float.

	float* coffeeshopadress = &priceofcoffee;


	printf("\n Here is written the adress of the coffee shop I told you about \n%p", coffeeshopadress);


	//Exercise 3 Use a function to modify the value of your float and print that new float using that same function

	modifymyfloat(&priceofcoffee, 4.25);

	printf("\n There is a discount at the coffee shop coffee is now \n%.2f", *coffeeshopadress);

	//Exervise 4 Modify an Int value with the help of a pointer.

	int coffeeordered = 0;

	int* ordercoffee = &coffeeordered;

	*ordercoffee += 100;

	printf("\nYou have ordered %d coffees", *ordercoffee);


	//Exercise 5 Using the same pointer, output two different float values.

	float deca;

	float icosa;

	float* ptrtofloat = NULL;

	ptrtofloat = &deca;

	*ptrtofloat = 10.f;

	printf("\nThe first float value printed is %.2f", *ptrtofloat);

	ptrtofloat = &icosa;

    *ptrtofloat = 20.f;

	printf("\nThe second float value printed is %.2f", *ptrtofloat);

	//Exercise 6 Allocate Memory Dynamically using Malloc.Store the memory adress inside a pointer.
	//Use that same pointer to allocate the value '32' to the int and free memory.
	
	int DynamicMemoryInt = 0;
	
	int *DynamicPtr = malloc(sizeof(DynamicMemoryInt));

	if (DynamicPtr == NULL)
	{
		return 1;
	}

	*DynamicPtr = 32;
	
	printf("\nThe value contained inside the DynamicMemory int is \n%d", *DynamicPtr);
	  
	free(DynamicPtr);
	
	
	


	//Exercise 7 print the X and Y float values created in my structure using a printf.

	struct vector MyVector = {100.f, 200.f};

	

	printf("\nThe vector values printed are \n%.2f and %.2f", MyVector.X, MyVector.Y);

	//Exercise 8 Create a function from the "struct" create at the previous exercise. This function must...
	// -Allocate dynamic memory for a new vector
	// -Have an 'X' and a 'Y' Value as parameters.
	// -Return a pointer towards the vector.
	
	struct vector* VectorEx8 = CreateVector(11.f, 22.f);

	printf("\nThe Vector values printed with a pointer are \nX:%.2f and Y:%.2f", VectorEx8->X, VectorEx8->Y);

	free(VectorEx8);


	return 0;
}
