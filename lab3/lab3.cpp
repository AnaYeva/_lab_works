#include <iostream>
using std::endl;

/*¬ариант - 3. ƒана последовательность целых чисел{ Aj }.Ќайти произведение чисел, лежащих на отpезке[-2, 20], наименьшее из таких чисел и номер этого числа в последовательности.*/


int main()
{
	int n;
	std::cout << "Enter amount of numbers in array: ";
	std::cin >> n;
	std::cout << "Enter numbers one by one: ";
	long long int mult = 1;
	int min = 20;
	int max = -2;
	int count = 0;
	int x;
	for (int i = 0; i < n; i++) {
		std::cin >> x;
		if (x >= -2 and x <= 20) {
			mult *= x;
			if (x < min) min = x;
			if (x > max) max = x;
			count++;
		}
	}
	if (count > 0) {
		std::cout << "MUltiplicatiou result: " << mult << endl;
		std::cout << "Maximum in the interval: " << max << endl;
		std::cout << "Minimum in the interval: " << min << endl;
	}
	else std::cout << "No such numbers" << endl;
}
