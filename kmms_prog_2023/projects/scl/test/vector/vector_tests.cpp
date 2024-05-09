#include <gtest/gtest.h>

#include "vector.hpp"
#include "vector.cpp"

using IBusko::Vector;

TEST(default_constructor, empty) {
	Vector<int> v;
	ASSERT_EQ(0, v.get_size());
}

TEST(add_element, back_less_capacity) {
	Vector<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	ASSERT_EQ(6, v.arr[2]);
}
TEST(add_element, back_more_capacity) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	v.push_back(8);
	ASSERT_EQ(8, v.arr[11]);
}

TEST(has_element, vector_has_element) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	v.push_back(8);
	ASSERT_EQ(true, v.has_item(8));
}
TEST(has_element, vector_dosnt_has_element) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	v.push_back(8);
	ASSERT_EQ(false, v.has_item(9));
}

TEST(insert_element, insert_less_capacity) {
	Vector<int> v;
	for (int i = 0; i < 4; i++) {
		v.push_back(4);
	}
	v.push_back(8);
	v.insert(3, 6);
	ASSERT_EQ(v.arr[3],6 );
}
TEST(insert_element, insert_more_capacity) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	v.insert(3, 6);
	ASSERT_EQ(v.arr[3], 6);
}
TEST(insert_element, size_less_position) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	ASSERT_EQ(false, v.insert(20, 6));
}

TEST(remove_first, remove_true) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	v.push_back(8);
	ASSERT_EQ(true, v.remove_first(8));
}
TEST(remove_first, remove_false) {
	Vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(4);
	}
	v.push_back(8);
	ASSERT_EQ(false, v.remove_first(5));
}






int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}