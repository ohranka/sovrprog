#include "vector.hpp"

#include <algorithm>
#include <stdexcept>

using IBusko::Vector;

template <typename T>
Vector<T>::Vector() {
	arr = new T[capacity];
}


template <typename T>
Vector<T>::~Vector() noexcept  {
	delete[] arr;
}

template <typename T>
void Vector<T>::push_back(const T& value) noexcept {
	if (size + 1 == capacity) {
		T* arr2;
		arr2 = new T[capacity * 2];
		for (std::size_t i = 0; i < size; i++) {
			arr2[i] = arr[i];
		}
		arr = arr2;
		capacity = capacity*2;
		arr2=nullptr;
		arr[size] = value;
		size++;
	}
	if (size + 1 < capacity) {
		arr[size] = value;
		size++;
	}
}

template <typename T>
bool Vector<T>::has_item(const T& value) const noexcept {
	for (std::size_t i = 0; i < size; i++) {
		if (arr[i] == value) {
			return true;
		}
	}
	return false;
}
template <typename T>
bool Vector<T>::insert(const int position, const T& value) {
	if (position > size) {
		return false;
	}
	if (size + 1 == capacity) {
		T* arr2;
		arr2 = new T[capacity * 2];
		for (std::size_t i = 0; i < position-1; i++) {
			arr2[i] = arr[i];
		}
		arr2[position] = value;
		for (std::size_t i = position+1; i < size+1; i++) {
			arr2[i] = arr[i];
		}
		arr = arr2;
		capacity = capacity * 2;
		arr2 = nullptr;
		size++;
		return true;
	}
	if (size + 1 < capacity) {
		T* arr2;
		arr2 = new T[capacity];
		for (std::size_t i = 0; i < position - 1; i++) {
			arr2[i] = arr[i];
		}
		arr2[position] = value;
		for (std::size_t i = position + 1; i < size + 1; i++) {
			arr2[i] = arr[i];
		}
		arr = arr2;
		capacity = capacity;
		arr2 = nullptr;
		size++;
		return true;
	}
	return false;
}
template <typename T>
void Vector<T>::print() const noexcept {
	for (std::size_t i = 0; i < size; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
template <typename T>
bool Vector<T>::remove_first(const T& value) noexcept {
	if (this->has_item(value) == true) {
		T* arr2;
		arr2 = new T[capacity];
		for (std::size_t i = 0; i < size; i++) {
			int k = 0;
			if (arr[i] != value || k == 1) {
				arr2[i - k] = arr[i - k];
			}
			if (arr[i] == value && k == 0) {
				k = 1;
			}
		}
		arr = arr2;
		arr2 = nullptr;
		size++;
		return true;
	}
	else {
		return false;
	}
}