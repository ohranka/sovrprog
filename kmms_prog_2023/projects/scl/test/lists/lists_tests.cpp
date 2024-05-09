#include <gtest/gtest.h>

#include "doubly_linked_list.hpp"
#include "doubly_linked_list.cpp"

using IBusko::DoublyLinkedList;




int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	DoublyLinkedList<int> v;
	return RUN_ALL_TESTS();
}