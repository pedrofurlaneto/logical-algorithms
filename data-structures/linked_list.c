#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0

typedef struct tnode node;
struct tnode {
    int value;
    int id;
    node *next;
};

void print_list(node* ref_node) {
    printf("ID: %d, Value: %d ->\n", ref_node->id, ref_node->value);

    if(ref_node->next != NULL) {
        print_list(ref_node->next);
    }
}

void insert_node(int value, node* ref_node) {
    node *new_node = (node*) malloc(sizeof(node));
    new_node->value = value;
    new_node->id = ref_node->id + 1;
    new_node->next = ref_node->next;

    ref_node->next = new_node;
}

void remove_node(node* ref_node) {
    node *garbage;
    garbage = ref_node;

    garbage = ref_node->next;
    ref_node->next = garbage->next;

    free(garbage);
}

node *search(int id, node* ref_node) {
    if (ref_node == NULL) return NULL;
    if (ref_node->id == id) return ref_node;

    return search(id, ref_node->next);
}

void search_insert(int value, int id, node* ref_node) {
    node* founded_node = search(id, ref_node);
    insert_node(value, founded_node);
}

void search_remove(int id, node* ref_node) {
    node* founded_node = search(id, ref_node);
    remove_node(founded_node);
}


int main(void) {
    node *init = (node*) malloc(sizeof(node));
    init->value = 0;
    init->id = 1;
    init->next = NULL;

    insert_node(10, init);
    print_list(init);
    printf("\n");
    search_insert(5, 2, init);
    print_list(init);
    printf("\n");
    search_remove(1, init);
    print_list(init);

    return EXIT_SUCCESS;
}