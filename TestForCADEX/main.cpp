#pragma once

#include "AllHeader.h"
#include <random>
#include "Vector.h"

#include <tbb/parallel_sort.h>


void printVector(std::vector<double> vect);

void CheckHelixe(Helixe* hel);

template<class T>
void ArraySort(MyVector<T>, int length);

void ParallelSort(MyVector<Circle*> curv, int length);

int main() {

	int random_n;
	std::vector<double> vect(3);

	MyVector<Curves*> curv(20);

	// �������� �� ������� ���� ����� ������
	bool* CurvType = new bool(3);
	for (int i = 0; i < 3; i++)
		CurvType[i] = false;

	srand(time(NULL));
	// ���������� �������
	for (int i = 0; i < 20; i++) {
		random_n = rand() % 3;
		CurvType[random_n] = true;
		curv.AddNote(i, (type)random_n);

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
		int length = 0;
		for (int i = 0; i < 20; i++)
			if (curv[i]->GetType() == circle)
				length++;

		MyVector<Circle*> curv2(length);
		
		for (int i = 0; i < length; i++) {
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
		
		std::cout << "Number of circle: " << length << std::endl;

		ArraySort(curv2, length);

		// part 6
		double summ = 0.0;
		for (int i = 0; i < length; i++) {
			std::cout << curv2[i]->GetRadius() << " " << std::endl;
			summ += curv2[i]->GetRadius();
		}
		
		std::cout << "Summ of radius: " << summ << std::endl;
	system("pause");
}

void printVector(std::vector<double> vect) {
	std::cout << "{ " << vect[0] << ", " << vect[1] << ", " << vect[2] << " }";
}

template<class T>
void ArraySort(MyVector<T> curv, int length) {
	Circle* point = nullptr;
	for (int i = 0; i < length - 1; i++)
		for (int j = i + 1; j <= length - 1; j++) 
			if (curv[i]->GetRadius() > curv[j]->GetRadius()) {
				point = curv[i];
				curv[i] = curv[j];
				curv[j] = point;				
		}
				
}

void ParallelSort(MyVector<Circle*> curv, int length) {

	tbb::parallel_sort(curv[0], curv[length]);

}

void CheckHelixe(Helixe* hel) {
	std::cout << std::endl << std::endl;
	printVector(*(hel->GetValue(0.0)));
	std::cout << std::endl;
	printVector(*(hel->GetValue(2 * PI)));
	std::cout << std::endl;
	printVector(*(hel->GetValue(4 * PI)));
	std::cout << std::endl << std::endl;
}
