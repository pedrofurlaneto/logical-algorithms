#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0

typedef struct tnode node;
struct tnode {
    int value;
    node *next;
};

void print_list(node *ref_node) {
    printf("%d\n", ref_node->value);
    
    if(ref_node->next != NULL) {
        print_list(ref_node->next);
    }
}

void insert_next(int value, node *ref_node) {
    node *new_node = (node*) malloc(sizeof(node));
    new_node->value = value;
    new_node->next = ref_node->next;

    ref_node->next = new_node;
}

void remove_next(node *ref_node) {
    node *garbage;
    garbage = ref_node;

    garbage = ref_node->next;
    ref_node->next = garbage->next;

    free(garbage);
}

int main(void) {
    node *init = (node*) malloc(sizeof(node));
    init->value = 0;
    init->next = NULL;

    insert_next(10, init);
    print_list(init);
    remove_next(init);

    return EXIT_SUCCESS;
}