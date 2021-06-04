// Copyright Leonidek23 2021
#include<iostream>
#include"train.h"

int main() {

    Train train(50);
    Cage *cage = train.first;
    for (int i = 0; i < 50; ++i) {
        std::cout << (cage->get() ? "o" : "_");
        cage = cage->next;
    }
    std::cout << train.getlen();
}