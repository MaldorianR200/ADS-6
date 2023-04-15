// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

struct SYM {
  char ch;
  int prior;
  SYM* next;
};

template<typename T, int size>
class TPQueue {
 private:
  SYM* head;
  SYM* tail;
 public:
  TPQueue(): head(nullptr), tail(nullptr)
  ~TPQueue() {
    while (head) {
      pop();
    }
  }
};

#endif  // INCLUDE_TPQUEUE_H_
