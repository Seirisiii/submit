#include <iostream>
#include <string>

using namespace std;

struct Cage {
    int no;
    int capacity;
    string name;
    Cage *next;
};

Cage *first = nullptr;

Cage *createCage(int no, int capacity,const string &name) {
    Cage *newCage = new Cage;
    newCage->no = no;
    newCage->capacity = capacity;
    newCage->name = name;
    newCage->next = nullptr;
    return newCage;
}

//ไม่ต้องเขียนฟังก์ชัน showTour 

void showCagesWithCapacityGreaterThanK(int k) {
    //Your Code Here

}

void movetofirst(int no) {
    //Your Code Here

}

void insertLast(int no, int capacity, const string &name) {
    //Your Code Here

}

void shuffle(int k) {
    //Your Code Here

}


void deleteCage(const string &s) {
    //Your Code Here

}
