#define _CRT_SECURE_NO_WARNINGS
#include "Recipe.h"
#include "generalFunctions.h"
#include "MainFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OFFSET 2 //includes null, etc


// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  Get Recipe from User


/////////// GET RECIPE ///////////

void GetRecipeName(RECIPE arr[], int num)
{
	//grab first name
	printf("\nPlease enter the name of the recipe: ");
	fgets(arr[num].recipeName, MAX, stdin);

	if (strlen(arr[num].recipeName) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[num].recipeName[strcspn(arr[num].recipeName, "\n")] = 0;
}

void GetPrice(RECIPE arr[], int num)
{
	printf("Insert a price: ");
	while (scanf("%d", &arr[num].price) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions
}

void GetRecipeAll(RECIPE arr[], int num)
{
	GetRecipeName(arr, num);
	GetPrice(arr, num);
}

//get type

/////////// GET INGREDIENTS ///////////

//get input and put into struct


/////////// GET COOK ///////////

void GetPrepTime(RECIPE arr[], int num)
{
	printf("Insert a prep-time: ");
	while (scanf("%d", &arr[num].cook.preptime) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

void GetReadyTime(RECIPE arr[], int num)
{
	printf("Insert a ready in time: ");
	while (scanf("%d", &arr[num].cook.readytime) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

void GetCookTime(RECIPE arr[], int num)
{
	printf("Insert a cook time: ");
	while (scanf("%d", &arr[num].cook.cooktime) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

void GetTemprature(RECIPE arr[], int num)
{
	printf("Insert a temprature: ");
	while (scanf("%d", &arr[num].cook.temp) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

void GetCookMethod(RECIPE arr[], int recipe)
{
	//grab first name
	printf("\nPlease enter cooking method: ");
	fgets(arr[recipe].cook.method, MAX, stdin);

	if (strlen(arr[recipe].cook.method) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[recipe].cook.method[strcspn(arr[recipe].cook.method, "\n")] = 0;
}

void GetCookAll(RECIPE arr[], int num)
{
	GetPrepTime(arr, num);
	GetReadyTime(arr, num);
	GetCookTime(arr, num);
	GetTemprature(arr, num);
	GetCookMethod(arr, num);
}