#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100
#define PHONE_LENGTH 15

typedef struct Customer {
    char phone[PHONE_LENGTH];
    char name[50];
    struct Customer* next;
} Customer;

Customer* hash_table[TABLE_SIZE]; //hash table to Customer 

int hash_function(char* phone){
    int phone_int = atoi(phone);
    return phone_int % TABLE_SIZE;
}

void insert_customer(char* phone, char* name) {
    int hash_index = hash_function(phone);

    Customer* new_costumer = (Customer*)malloc(sizeof(Customer));   
    strcpy(new_costumer->phone, phone);
    strcpy(new_costumer->name, name);
    new_costumer->next = NULL;

    if(hash_table[hash_index] == NULL) {
        hash_table[hash_index] = new_costumer;
    } else {
        Costumer* current = hash_table[hash_index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_costumer;
    }
}

Customer* search_costumer(char* phone) {
    int hash_index = hash function
}