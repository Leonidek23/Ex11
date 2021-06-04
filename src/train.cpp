// Copyright Leonidek23 2021
#include"train.h"

void Train::addCage(const bool dl) {
    Cage *newCage = new Cage(dl);
    first->prev = newCage;
    last->next = newCage;
    this->last = newCage;
    newCage->next = this->first;
    newCage->prev = this->last;

}

unsigned int Train::getlen() {
    first->on();
    int n = 0;
    Cage *currCage{first->next};
    while (true) {
        while (!currCage->get()) {
            n++;
            currCage = currCage->next;
        }
        currCage->off();
        if (!first->get()) {
            break;
        }
    }
    return n;
}

Train::Train(int a) {
    Cage *cage = new Cage(rand() % 2);
    first = cage;
    last = cage;
    for (int i = 0; i < a; ++i) {
        addCage(rand() % 2);
    }
    last->next = first;
    first->prev = last;
}
