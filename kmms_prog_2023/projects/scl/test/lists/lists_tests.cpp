#include <gtest/gtest.h>

#include "doubly_linked_list.hpp"
#include "doubly_linked_list.cpp"

using  ::DoublyLinkedList;

TEST(default_constructor, empty) {
    DoublyLinkedList<int> v;
    EXPECT_EQ(0, v.size());
}

TEST(add_element, push_back) {
    DoublyLinkedList<int> v;
    for (int i = 0; i < 4; i++) {
        v.push_back(2);
    };
    EXPECT_EQ(4, v.size());
}

TEST(has_element, list_has_item) {
    DoublyLinkedList<int>  v;
    for (int i = 0; i < 4; i++) {
        v.push_back(2);
    };
     EXPECT_EQ(true, v.has_item(2));
}
TEST(has_element, list_hasn_item) {
    DoublyLinkedList<int>  v;
    for (int i = 0; i < 4; i++) {
        v.push_back(1);
    };
    EXPECT_EQ(false,v.has_item(4));
}

TEST(remove_element, remove_true) {
    DoublyLinkedList<int>  v;
    for (int i = 0; i < 4; i++) {
        v.push_back(1);
    };
     v.remove_first(1);
    EXPECT_EQ( 3, v.size());
    EXPECT_EQ(true,v.has_item(1));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}