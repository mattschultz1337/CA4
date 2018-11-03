#ifndef LLC_H
#define LLC_H

#include <iostream>
#include <stdlib.h>
#include <string>
template<typename T>
struct Node {
 T data;
 Node<T> *next;
};
template <class T>

class LLC {

    private:

      Node<T> *first;
      Node<T> *last;
    public:

      Node<T> * newNode(T d) {
        Node<T>* n = new Node<T>;
        n -> data = d;
        n -> next = NULL;
        return n;
      }

      LLC(const LLC<T> & list) {
        if (list.first != NULL) {
          first= newNode(list.first -> data);
          last=first;
          Node<T> * curr = list.first->next;
          while (curr!= NULL) {
            insert(curr -> data);
            curr = curr -> next;

          }
        }

      }

      LLC<T> & operator = (const LLC<T> & other) {
        LLC<T>* copy = new LLC<T>(other);
        first = copy -> first;
        last = copy -> last;
        return *this;
      }

      bool insert(const T & d) {
        Node<T>* ins = newNode(d);
        if (first == NULL) {
          first = ins;
          last = ins;
        } else {
          last -> next = ins;
          last = ins;
        }
        return true;
      }
      ~LLC() {
        Node<T> * current = first;
        while (current != NULL) {
          Node<T> * next = current -> next;
          delete current;
          current = next;
        }
        first = NULL;
        last = NULL;

      }
      bool contains(const T & d) {
        for (Node<T> * curr = first; curr != NULL; curr = curr -> next) {
          if (curr -> data == d) return true;
        }
        return false;
      }
      void remove(const T & d) {
        Node<T> * last = NULL;
        for (Node<T> * curr = first; curr != NULL; curr = curr -> next) {
          if (curr -> data == d) {
            if (curr == first) {
              first = curr -> next;
            } else {
              last -> next = curr -> next;
            }
          }
          last = curr;
        }
      }
      friend std::ostream & operator<<(std::ostream& os, LLC<T>& list) {
        Node<T> * curr;
        os << "[";
        for (curr = list.first; curr -> next != NULL; curr = curr -> next) {
          os << curr -> data << ",";
        }
        os << curr -> data << "]\n";
        return os;
      }
      void head(int n) {
        std::cout << "[";
        Node<T> * curr = first;
        if (curr != NULL) {
          for (int i = 0; i < n - 1 && curr -> next != NULL; i++) {
            std::cout << curr -> data << ",";
            curr = curr -> next;
          }
          std::cout << curr -> data;
          std::cout << "]\n";
        }
      }
      void join(const LLC<T> &other){
        if(other.first!=NULL){
          Node<T>* curr = other.first;
          while(curr!=NULL){
            insert(curr->data);
            curr = curr->next;
          }

        }

      }
      LLC<T> operator+(const LLC<T>& other){
        LLC<T> retLLC = *(new LLC<T>(*this));
        if(other.first!=NULL){
          Node<T>* curr = other.first;
          while(curr!=NULL){
            retLLC.insert(curr->data);
            curr = curr->next;
          }
        }
          return retLLC;
      }
      int len(){
        Node<T>* curr = first;
        int retval = 0;
        while(curr!=NULL){
          retval++;
          curr = curr->next;
        }
        return retval;
      }
      LLC<T> operator+=(int n){
        LLC<T> retLLC = *(new LLC<T>(*this));
        for(int i=0;i<n;i++){
          last->next = first;
          last = first;
          first = first->next;
          last->next = NULL;
        }
        return retLLC;
      }
      T tail(){
        std::cout<<"["<<last->data<<"]";
        return last->data;
      }
};

#endif
