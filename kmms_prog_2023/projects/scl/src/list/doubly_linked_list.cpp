#include "doubly_linked_list.hpp"

#include <iostream>

using IBusko::DoublyLinkedList;

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList() noexcept {
    Node* actual = begin;
    while (actual != nullptr) 
    {
        Node* next = actual->next;
        delete actual;
        actual = next;
    }
}

template<typename T>
void DoublyLinkedList<T>::push_back(const T& value) noexcept {
    Node* node = new Node(value);
    if (begin == nullptr) {
        begin = node;
        end = node;
    }
    else {
        end->next = node;
        node->prev = end;
        end = node;
    }
}

 template<typename T>
 bool DoublyLinkedList<T>::has_item(const T& value) const noexcept {
     Node* actual = begin;
     while (actual != nullptr) {
         if (actual->value == value) {
             return true;
         }
         actual = actual->next;
     }
     return false;
 }

template<typename T>
void DoublyLinkedList<T>::print() const noexcept {
    Node* actual = begin;
    while (actual != nullptr) {
        std::cout << ' ' << actual->value;
        actual = actual->next;
    }
    std::cout << std::endl;
}

template<typename T>
bool DoublyLinkedList<T>::remove_first(const T& value) noexcept {
    Node* actual = begin;
    while (actual != nullptr) {
        if (actual->value == value) {
            if (actual == begin) {
                begin = begin->next;
                if (begin != nullptr) {
                    begin->prev = nullptr;
                }
                else {
                    end = nullptr;
                }
            }
            else if (actual == end) {
                end = end->prev;
                end->next = nullptr;
            }
            else {
                actual->prev->next = actual->next;
                actual->next->prev = actual->prev;
            }
            delete actual;
            return true;
        }
        actual = actual->next;
    }
    return false;
}

template<typename T>
std::size_t DoublyLinkedList<T>::size() const noexcept {
    int count = 0;
    Node* actual = begin;
    while (actual != nullptr) {
        ++count;
        actual = actual->next;
    }
    return count;
}
