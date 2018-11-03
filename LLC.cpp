#include <iostream>
#include <stdlib.h>
#include "LLC.h"
using namespace std;

// int main(int argc, char * argv[]) {
//   string vals[] = {
//     "a",
//     "b",
//     "c",
//     "d",
//     "e",
//     "f"
//   };
//   string arr[] = {
//     "g",
//     "h",
//     "i",
//     "j",
//     "k",
//     "l"
//   };
//   LLC link = *(new LLC());
//   int size = * ( & vals + 1) - vals;
//   for (int i = 0; i < size; i++) {
//     link.insert(vals[i]);
//   }
//   cout << "Testing <<\n";
//   cout << link;
//   cout<<"testing copy constructor\n";
//   LLC lilink = *(new LLC(link));
//   cout<<lilink;
//   cout << "testing head(3)\n";
//   link.head(3);
//   cout << "testing remove\n";
//   link.remove("c");
//   cout<<link;
//   cout << "testing len\n";
//   cout<< link.len() << endl;
//
//   LLC twofer = *(new LLC());
//   size = * ( & arr + 1) - arr;
//   for (int x = 0; x < size; x++) {
//      twofer.insert(arr[x]);
//   }
//   cout << "testing join\n";
//   link.join(twofer);
//   cout<<link;
//   cout<<"testing +\n";
//   twofer = link + lilink;
//   cout<<twofer;
//   cout<<"testing +=\n";
//   lilink+=2;
//   cout<<lilink;
//   cout<<"testing tail()\n";
//   twofer.tail();
//   cout<< "is the last value in twofer: " << twofer;
//   cout<<"testing contains: does "<< lilink<< "contain 'a'?: " << lilink.contains("a") << "\n";
//   cout<<"testing contains: does "<< lilink<< "contain 'q'?: " << lilink.contains("q") << "\n";
//
// }
// template <class T>
// Node<T> * LLC<T>::newNode(T d) {
//   Node<T>* n = new Node<T>;
//   n -> data = d;
//   n -> next = NULL;
//   return n;
// }
// template <class T>
// LLC<T>::LLC(const LLC<T> & list) {
//   if (list.first != NULL) {
//     first= newNode(list.first -> data);
//     last=first;
//     Node<T> * curr = list.first->next;
//     while (curr!= NULL) {
//       insert(curr -> data);
//       curr = curr -> next;
//
//     }
//   }
//
// }
// template <class T>
// LLC<T> & LLC<T>::operator = (const LLC<T> & other) {
//   LLC<T>* copy = new LLC<T>(other);
//   first = copy -> first;
//   last = copy -> last;
//   return *this;
// }
// template <class T>
// bool LLC<T>::insert(const T & d) {
//   Node<T>* ins = newNode(d);
//   if (first == NULL) {
//     first = ins;
//     last = ins;
//   } else {
//     last -> next = ins;
//     last = ins;
//   }
//   return true;
// }
// template <class T>
// LLC<T>::~LLC() {
//   Node<T> * current = first;
//   while (current != NULL) {
//     Node<T> * next = current -> next;
//     delete current;
//     current = next;
//   }
//   first = NULL;
//   last = NULL;
//
// }
// template <class T>
// bool LLC<T>::contains(const T & d) {
//   for (Node<T> * curr = first; curr != NULL; curr = curr -> next) {
//     if (curr -> data == d) return true;
//   }
//   return false;
// }
// template <class T>
// void LLC<T>::remove(const T & d) {
//   Node<T> * last = NULL;
//   for (Node<T> * curr = first; curr != NULL; curr = curr -> next) {
//     if (curr -> data == d) {
//       if (curr == first) {
//         first = curr -> next;
//       } else {
//         last -> next = curr -> next;
//       }
//     }
//     last = curr;
//   }
// }
// template <class T>
// ostream & operator << (ostream & os, LLC<T> & list) {
//   Node<T> * curr;
//   os << "[";
//   for (curr = list.first; curr -> next != NULL; curr = curr -> next) {
//     os << curr -> data << ",";
//   }
//   os << curr -> data << "]\n";
//   return os;
// }
// template <class T>
// void LLC<T>::head(int n) {
//   cout << "[";
//   Node<T> * curr = first;
//   if (curr != NULL) {
//     for (int i = 0; i < n - 1 && curr -> next != NULL; i++) {
//       cout << curr -> data << ",";
//       curr = curr -> next;
//     }
//     cout << curr -> data;
//     cout << "]\n";
//   }
// }
// template <class T>
// void LLC<T>::join(const LLC<T> &other){
//   if(other.first!=NULL){
//     Node<T>* curr = other.first;
//     while(curr!=NULL){
//       insert(curr->data);
//       curr = curr->next;
//     }
//
//   }
//
// }
// template <class T>
// LLC<T> LLC<T>::operator+(const LLC<T>& other){
//   LLC<T> retLLC = *(new LLC<T>(*this));
//   if(other.first!=NULL){
//     Node<T>* curr = other.first;
//     while(curr!=NULL){
//       retLLC.insert(curr->data);
//       curr = curr->next;
//     }
//   }
//     return retLLC;
// }
// template <class T>
// int LLC<T>::len(){
//   Node<T>* curr = first;
//   int retval = 0;
//   while(curr!=NULL){
//     retval++;
//     curr = curr->next;
//   }
//   return retval;
// }
// template <class T>
// LLC<T> LLC<T>::operator+=(int n){
//   LLC<T> retLLC = *(new LLC<T>(*this));
//   for(int i=0;i<n;i++){
//     last->next = first;
//     last = first;
//     first = first->next;
//     last->next = NULL;
//   }
//   return retLLC;
// }
// template <class T>
// T LLC<T>::tail(){
//   cout<<"["<<last->data<<"]";
//   return last->data;
// }
