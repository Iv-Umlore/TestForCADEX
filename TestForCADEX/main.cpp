#pragma once

#include <random>
#include "Ellipse.h"
#include <ctime>

using namespace std;

double double_rand(int integer) {
	return (double)rand() / RAND_MAX + integer % 100;
}

bool cmp(Curves* left, Curves* right) {
	return left->GetArea() < right->GetArea();
}

int main() {
	srand(unsigned(std::time(0)));
	int random = rand() % 30 + 1;
	int SecondRand;

	double SummArea = 0;

	vector<Curves*> Arr(random); // создать контейнер

	for (int i = 0; i < random; i++) {
		SecondRand = rand() % 2;
		switch (SecondRand)
		{
			case 0: {
				Arr[i] = (Curves*)new Circle(double_rand(rand()));
				SummArea += Arr[i]->GetArea();
				break;
			}
			case 1: {
				Arr[i] = (Curves*)new Ellipse(double_rand(rand()), double_rand(rand()));
				break;
			}
		default:
			break;
		}
	}

	for (int i = 0; i < random; i++)
		Arr[i]->Print();

	// заполнить его случайными фигурами со случайными параметрами
		

	sort(Arr.begin(), Arr.end(), cmp);// отсортировать в порядке возрастания площадей
	
	cout << "SORT\n\n\n";

	for (int i = 0; i < random; i++)
		Arr[i]->Print();

	cout << "Summ of All circle = " << SummArea << endl;// Вычислить полную площадь кругов

	system("pause");

	return 0;

}
