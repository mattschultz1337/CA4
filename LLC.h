#ifndef LLC_H
#define LLC_H
#include "PlayingCard.h"
struct Node {
 PlayingCard data;
 Node *next;
};
class LLC {

    private:
      Node *first;
      Node *last;
    public:
        int main(int argc, char *argv[]);
        LLC(){
          first=NULL;
          last=NULL;
        }
        Node* newNode(PlayingCard d);
        LLC(const LLC &list);
        LLC& operator=(const LLC& other);
        ~LLC();
        friend std::ostream& operator<<(std::ostream&, LLC& list);
        bool contains(const PlayingCard &d);
        bool insert(const PlayingCard &d);
        void remove(const PlayingCard &d);
        void shuffle();
        LLC operator+(const LLC& other);
        void head(int n);
        PlayingCard tail();
        LLC operator+=(int n);
        int len();
        void join(const LLC &other);
};

#endif
