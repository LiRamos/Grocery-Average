//=============================================
// Program Written by: Lissette Ramos
// Program made on: 6/19/2017
// Program purpouse: Use user input prices for groceries to return commentary on their totals."
//===================================================================================================
#include <stdio.h>
#include <stdlib.h>

main(void) {
	double bill1;
	double bill2;
	double bill3;
	double average;
	printf("I'll use how much you spent the last three weeks on groceries to judge how well you're eating.Alright, so, how much was your first week of groceries?");
	scanf("%lf", &bill1);
	if (bill1 < 50) {
		printf("You must be starving if this is how little you are spending: \n", bill1);
	}
	if (50 <= bill1 && bill1 < 200) {
		 printf("You're eating well: \n ", bill1);
}
	if (bill1 >= 200) {
	printf("You are going to get fat, \n  ", bill1);
	}
	printf("OK, now what was the price of your second week of groceries? \n");
	scanf("%lf", &bill2);
	if (bill2 < 50) {
	printf("You must be starving if this is how little you are spending: \n ", bill2);
	}
	if (50 <= bill2 && bill2 < 200) {
	printf("You're eating well  \n ", bill2);
}
	if (bill2 >= 200) {
	printf("You are going to get fat \n ", bill2);
	}
	if (bill2 > bill1) {
	printf("Huh, are you eating more? \n ");
	}
	printf("Nice, now what was the price of your third week of groceries? \n ");
	scanf("%lf", &bill3);
	if (bill3 < 50) {
	printf("You must be starving \n ", bill3);
}
	if (50 <= bill3 && bill3 < 200 ) {
	printf("You're eating well \n   ", bill3);
}
	if (bill3 >= 200) {

		printf("You are going to get fat \n ", bill3);
	}
	if (bill3 < bill1 && bill3 < bill2) {
	printf("Are you now on a diet?");
	}
	average = ((bill1 + bill2 + bill3)/3);
	printf("Your average amount spent on groceries is %.2lf \n" , average);
system("pause");



	


}