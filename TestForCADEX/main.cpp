#pragma once

#include <random>
#include "Ellipse.h"
#include <ctime>

using namespace std;

double double_rand(int integer) {
	return (double)rand() / RAND_MAX + integer % 100;
}

bool cmp(Circle* left, Circle* right) {
	return left->GetArea() < right->GetArea();
}

int main() {
	srand(unsigned(std::time(0)));
	int random = rand() % 30 + 1;
	int SecondRand;

	double SummArea = 0.0;
	double SecondSumm = 0.0;
	double ALLSUMM = 0.0;
	vector<Circle*> Arr(random); // create container

	for (int i = 0; i < random; i++) {
		SecondRand = rand() % 2;
		switch (SecondRand)
		{
			case 0: {
				Arr[i] = new Circle(double_rand(rand()));
				SummArea += Arr[i]->GetArea();		// standard of summ
				break;
			}
			case 1: {
				Arr[i] = new Ellipse(double_rand(rand()), double_rand(rand()));				
				break;
			}
		default:
			break;
		}
		ALLSUMM += Arr[i]->GetArea();
	}

	// fill it with random figures with random parameters

	for (int i = 0; i < random; i++)
		Arr[i]->Print();
			

	sort(Arr.begin(), Arr.end(), cmp); // Sort
	
	cout << "SORT\n\n\n";

	for (int i = 0; i < random; i++) {
		Arr[i]->Print();
		if (!dynamic_cast<Ellipse*>(Arr[i]))	// If ellipse - skip			
			SecondSumm += Arr[i]->GetArea();	// My summ.
	}
	
	if (SecondSumm == SummArea)	// compare with checksum
		cout << "Summ Areas of All circle = " << SecondSumm << endl; // tadam

	system("pause");

	return 0;

}
