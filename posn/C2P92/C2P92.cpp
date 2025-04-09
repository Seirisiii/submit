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
    if(first==nullptr)return ;
        Cage *curr=first;
        while(curr!=nullptr){
            if(curr->capacity>k)cout<<curr->no<<" ";
            curr=curr->next;
        }
        cout<<"\n";
        return ;

}

void movetofirst(int no) {
    if(first==nullptr)return ;
    Cage *curr=first;
    while(curr->next!=nullptr){
        if(curr->next->no==no){
            Cage *tmp=curr->next;
            curr->next=tmp->next;
            tmp->next=first;
            first=tmp;
            return ;
        }
        curr=curr->next;
    }
    return ;
}

void insertLast(int no, int capacity, const string &name) {
    Cage *tmp=createCage(no,capacity,name);
        if(first==nullptr){
            first=tmp;
            return ;
        }
        Cage *curr=first;
        while(curr->next!=nullptr){
                curr=curr->next;
        }
        curr->next=tmp;
        return ;

}

void shuffle(int k) {
    if(first==nullptr)return ;
        Cage *curr=first;
        while(curr->next!=nullptr){
            if(curr->next->no==k){
                Cage *tmp=curr->next;
                curr->next=nullptr;
                swap(first,tmp);
                Cage *curr2=first;
                while(curr2->next!=nullptr){
                    curr2=curr2->next;
                }
                curr2->next=tmp;
                return ;
            }
            curr=curr->next;
        }
        return ;

}


void deleteCage(const string &s) {
    if(first==nullptr)return ;
        if(first->name==s){
            first=first->next;
            return ;
        }
        Cage *curr=first,*prev=first;
        while(curr!=nullptr){
            if(curr->name==s){
                prev->next=curr->next;
                delete curr;
                return ;
            }
            prev=curr;
            curr=curr->next;
        }

        return ;

}
