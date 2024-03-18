#include "long_number.hpp"

namespace IBusko {
	LongNumber::LongNumber() {
		length = 1;
		numbers = new char;
		sign = ZERO;
	}
	
	LongNumber::LongNumber(const char* const str) {
		int i = 0;
		length = 0;
		while (str[i] != '\0') {
			length++;
			i=i+1;
		}
		if (str[0] == MINUS) {
			sign = NEGATIVE;
		}
		else {
			if (str[0] == ZERO) {
				sign = ZERO;
			}
			else {
				sign = POSITIVE;
			}
		}
		numbers = new char [length];
		for (int i = 0; i < length; i++) {
			*(numbers+i) = str[i];
		}
	}
	
	LongNumber::LongNumber(const LongNumber& x) {
		LongNumber x2;
		LongNumber* xptr2 = new LongNumber;
		x2.length = x.length;
		x2.sign = x.sign;
		x2.numbers = new char;
		for (int i = 0; i < x.length; i=i+1) {
			 *(x2.numbers) = *(x.numbers + i);
		}

	}
	
	LongNumber::LongNumber(LongNumber&& x) {
		LongNumber x2;
		LongNumber* xptr = new LongNumber;
		x2.numbers = new char;
		for (int i = 0; i < x.length; i=i+1) {
			*(x2.numbers + i) = *(x.numbers + i);
		}
		x.numbers = x2.numbers;
		delete x2.numbers;
	}
	
	LongNumber::~LongNumber() {
		delete [] numbers;
	}
	
	LongNumber& LongNumber::operator = (const char* const str){
			sign = LongNumber(str).sign;
			length = LongNumber(str).length;
			for (int i = 0; i < LongNumber(str).length; i=i+1) {
				*(numbers + i) = *(LongNumber(str).numbers + i);
			}
		return *this;
	}
	
	LongNumber& LongNumber::operator = (const LongNumber& x) {
		length = x.length;
		sign = x.sign;
		numbers = new char;
		for (int i = 0; i < x.length; i=i+1) {
			*(numbers + i) = *(x.numbers + i);
		}
		return *this;
	}
	
	LongNumber& LongNumber::operator = (LongNumber&& x) { 
		return *this;
	}
	
	bool LongNumber::operator == (const LongNumber& x) {
		int y = 1;
		for (int i = 0; i < x.length; i=i+1) {
			if (*(numbers + i) != *(x.numbers + i)) {
				y = 0;
			}
		}
		if (y == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	
	bool LongNumber::operator > (const LongNumber& x) {
		int y = 1;
		for (int i = 0; i < x.length; i=i+1) {
			if (*(numbers + i) < *(x.numbers + i)) {
				y = 0;
				break;
			}
		}
		if (y == 1) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
	
	bool LongNumber::operator < (const LongNumber& x) {
		int y = 1;
		for (int i = 0; i < x.length; i=i+1) {
			if (*(numbers + i) > *(x.numbers + i)) {
				y = 0;
				break;
			}
		}
		if (y == 1) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
	
	LongNumber LongNumber::operator + (const LongNumber& x) {
		// TODO
		LongNumber result;
		return result;
	}
	
	LongNumber LongNumber::operator - (const LongNumber& x) {
		// TODO
		LongNumber result = x;
		return result;
	}
	
	LongNumber LongNumber::operator * (const LongNumber& x) {
		// TODO
		LongNumber result;
		return result;
	}
	
	LongNumber LongNumber::operator / (const LongNumber& x) {
		// TODO
		LongNumber result;
		return result;
	}
	
	LongNumber LongNumber::operator % (const LongNumber& x) {
		// TODO
		LongNumber result;
		return result;
	}
	
	int LongNumber::get_digits_number() const {
		if (sign == NEGATIVE) {
			return length-1;
		}
		else {
			return length;
		}
	}
	
	bool LongNumber::is_positive() const {
		return sign == POSITIVE;
	}
	
	// ----------------------------------------------------------
	// PRIVATE
	// ----------------------------------------------------------
	int LongNumber::get_length(const char* const str) const {
		return LongNumber(str).length;
	}
	
	// ----------------------------------------------------------
	// FRIENDLY
	// ----------------------------------------------------------
	std::ostream& operator << (std::ostream &os, const LongNumber& x) {
		// TODO
		return os;
	}
}
