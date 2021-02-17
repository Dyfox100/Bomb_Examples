#include <stdlib.h>


typedef struct node {
    void* next;
    int value;
} node;

node head = {.value = 0};

int linkedListSum() {
    node* previous = &head;
    node* next_node;
    for (int i = 0; i < 5; i++) {
        next_node = malloc(sizeof(node));
        next_node->value = i + 1;
        previous->next = next_node;
        previous = next_node;
    }

    int sum = 0;
    node *current_node = &head;
    while (current_node != NULL) {
        sum += current_node->value;
        current_node = current_node->next;
    }
    return sum;
}

int main() {
    int val = linkedListSum();
    return 0;
}