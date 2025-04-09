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

Cage *createCage(int no, int capacity, const string &name) {
    Cage *newCage = new Cage;
    newCage->no = no;
    newCage->capacity = capacity;
    newCage->name = name;
    newCage->next = nullptr;
    return newCage;
}


}

void showTour() {
    Cage *startCage = first;
    while (startCage) {
        cout << startCage->name << " ";
        startCage = startCage->next;
    }
    cout << endl;
}

void showCagesWithCapacityGreaterThanK(int k) {
        // Your code


}

void movetofirst(int no) {
        // Your code


}

void insertLast(int no, int capacity, const string &name) {
        // Your code

}

void shuffle(int k) {
        // Your code


}


void deleteCage(const string &s) {
        // Your code


}

int main() {
   insertLast(10, 5, "moodang");
   insertLast(20, 6, "moodeng");
   insertLast(30, 7, "moohan");
   insertLast(40, 8, "mooyang");
   insertLast(50, 9, "mookrob");
   showTour(); 
   shuffle(50);
   showTour();      
   showCarriagesWithCapacityGreaterThanK(6);
   deleteCage("moohan");
   showTour();  
   return 0;
   return 0;
}
