#pragma once

#include "Helixe.h" 

template<class T>
class MyVector {

private:
	T* arr;
	int _size;

public:

	MyVector(int size) {
		_size = size;
		arr = new T[_size];
	}

	T* GetArrayLink() {
		return arr;
	}

	T& operator[](int position) {
		return arr[position];
	}
	
	void AddNote(int position, type curvT) {
		// There is no protection because I will not break my code ( position < _size )
		switch (curvT)
		{
		case circle: {
			arr[position] = (T)new Circle();
			break;
		}
		case helixe: {
			arr[position] = (T)new Helixe();
			break;
		}
		case ellipse: {
			arr[position] = (T)new Ellipse();
			break;
		}
		default:
			break;
		}

	}

	~MyVector() {
		delete[] arr;
	}

};
/*
template <class T>
int std::begin(MyVector<T> myVec) {
	return myVec.GetArrayLink()[0];
}

template <class T>
int std::end(MyVector<T> myVec) {
	return myVec.GetArrayLink()[];
}*/
