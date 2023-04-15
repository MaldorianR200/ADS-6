// Copyright 2021 NNTU-CS
#include "tpqueue.h"
void push(SYM a) {
  SYM* temp = new SYM(a.ch, a.prior, nullptr);
  if (!head) {
    head = temp;
    tail = temp;
  } else if (a.prior > head->prior) {
    temp->next = head;
    head = temp;
  } else {
    SYM* current = head;
    while (current->next && a.prior <= current->next->prior)
      current = current->next;
    temp->next = current->next;
    current->next = temp;
  }
}
SYM pop() {
  SYM* temp = head;
  head = head->next;
  return *temp;
}
bool isEmpty() const {
  return head == nullptr;
}
