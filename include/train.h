// Copyright Leonidek23 2021
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_
#include<iostream>

class Cage
{
    bool light; // Свет (вкл/выкл)
public:
    Cage* next; // следующий вагон
    Cage* prev; // предыдущий вагон
    explicit Cage(const bool dl) : light(dl), next(nullptr), prev(nullptr) {}
    void on()  { light=true;    }
    void off() { light = false; }
    bool get() const  { return light;  }
};

class Train{

public:
    void addCage( bool);
    explicit Train(int);
    void print();
    unsigned int getlen();
    Cage* first{ nullptr };
    Cage* last{ nullptr };
};

#endif  // INCLUDE_TRAIN_H_