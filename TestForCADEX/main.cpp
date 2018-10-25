#pragma once

#include "AllHeader.h"
#include <random>

#include <tbb/parallel_sort.h>

// tbb sort
void ParallelArraySort(Circle** curv, int length);
// simple bubble sort
void ArraySort(Circle** curv, int length);

void printVector(std::vector<double> vect);



int main() {
	int random_n;
	std::vector<double> vect(3);

	Curves** curv = new Curves*[20];

	// �������� �� ������� ���� ����� ������
	bool* CurvType = new bool(3);
	for (int i = 0; i < 3; i++)
		CurvType[i] = false;

	srand(time(NULL));
	// ���������� �������
	for (int i = 0; i < 20; i++) {
		random_n = rand() % 3;

		switch (random_n) {
		case 0: {
			curv[i] = CircleFactory::Create();
			CurvType[0] = true;
			break;
		}
		case 1: {
			curv[i] = EllipseFactory::Create();
			CurvType[1] = true;
			break;
		}
		case 2: {
			curv[i] = HelixeFactory::Create();
			CurvType[2] = true;
			break;
		}
		default: break;
		}
		printVector(*curv[i]->GetValue(PI / 4));
		std::cout << " ";
		printVector(*curv[i]->GetDerivative(PI / 4));
		std::cout << std::endl;

	}

	// �������� �� ������� ���� ����� ������

	for (int i = 0; i < 3; i++)
		std::cout << CurvType[i] << " ";
	std::cout << std::endl;
	// part 4:
	
		int j = 0;
		Circle** curv2 = new Circle*[20];
		
		for (int i = 0; i < 20; i++) {
			curv2[i] = nullptr;
		}

		// ���������� ������� �������
		for (int i = 0; i < 20; i++) {
			if (curv[i]->GetType() == circle) {
				curv2[j] = (Circle*)curv[i];
				j++;
			}
		}
		//part 5

		std::cout << "Number of circle: " << j << std::endl;
		ParallelArraySort(curv2, j);

		// part 6
		double summ = 0.0;
		for (int i = 0; i < j; i++) {
			std::cout << curv2[i]->GetRadius() << " " << std::endl;
			summ += curv2[i]->GetRadius();
		}
		
		std::cout << "Summ of radius: " << summ << std::endl;
	system("pause");
}

void printVector(std::vector<double> vect) {
	std::cout << "{ " << vect[0] << ", " << vect[1] << ", " << vect[2] << " }";
}

void ArraySort(Circle** curv, int length) {
	Circle* point = nullptr;
	for (int i = 0; i < length - 1; i++)
		for (int j = i + 1; j <= length - 1; j++) 
			if (curv[i]->GetRadius() > curv[j]->GetRadius()) {
				point = curv[i];
				curv[i] = curv[j];
				curv[j] = point;
				//swap<Circle*>(curv[i], curv[j]);
		}
				
}


// tbb
void ParallelArraySort(Circle** curv, int length) {

	tbb::parallel_sort(curv[0], curv[length]);

}

