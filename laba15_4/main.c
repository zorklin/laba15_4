#include <stdio.h>

int main() {

	//типізація даних, масив на десять елементів і для циклу та сума масиву
	int array[10], i, sum_of_array = 0;

	//вивести дані про те що потрібно зробити користувачу
	printf("Enter 10 number:\n");


	//ввід десяти єлементів масиву
	for (i = 0; i < 10; i++) {

		scanf_s("%d", &array[i]);

	}

	//сума елементів масиву
	for (i = 0; i < 10; i++) {

		sum_of_array += array[i];

	}

	//вивести результат
	printf("Sum:%d\n", sum_of_array);

	//повернути 0
	return 0;
}