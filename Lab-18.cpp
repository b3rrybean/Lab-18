#include <iostream>
#include <string>
using namespace std;

// Node structure to store each review
struct Review {
    float rating;
    string comment;
    Review* next;
};

// Function to add a new review to the head of the list


// Function to add a new review to the tail of the list
Review* addToTail(Review* head, float rating, string comment) {
    Review* newNode = new Review;
    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = nullptr;

    if (head == nullptr) {
        return newNode;
    } else {
        Review* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        return head;
    }
}

// Function to output all reviews and compute the average rating


// Function to delete the linked list (cleanup)

