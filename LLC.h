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
        int main(int argc, char *argv[]);
        LLC(){
          first=NULL;
          last=NULL;
        }
        Node<T>* newNode(T d);
        LLC(const LLC &list);
        LLC& operator=(const LLC& other);
        ~LLC();
        friend std::ostream& operator<<(std::ostream&, LLC& list);
        bool contains(const T &d);
        bool insert(const T &d);
        void remove(const T &d);
        void shuffle();
        LLC operator+(const LLC& other);
        void head(int n);
        T tail();
        LLC operator+=(int n);
        int len();
        void join(const LLC &other);
};

#endif
