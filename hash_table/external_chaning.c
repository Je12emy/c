#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 255
#define TABLE_SIZE 10

typedef struct {
  char name[MAX_NAME];
  int age;
  struct person *next;
} person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char *name) {
  int len = strnlen(name, MAX_NAME);
  unsigned int hash_value = 0;
  for (int i = 0; i < len; i++) {
    hash_value += name[i];
    hash_value = (hash_value * name[i]) % TABLE_SIZE;
  }
  return hash_value;
}

void init_hash_table() {
  for (int i = 0; i < TABLE_SIZE; i++) {
    hash_table[i] = NULL;
  }
}

void print_table() {
  printf("-- START --\n");
  for (int i = 0; i < TABLE_SIZE; i++) {
    if (hash_table[i] == NULL) {
      printf("\t%i\t---\n", i);
    } else {
      printf("\t%i\t", i);
      person *tmp = hash_table[i];
      while (tmp != NULL) {
        printf("%s - ", tmp->name);
        tmp = (person *)tmp->next;
      }
      printf("\n");
    }
  }
  printf("-- END --\n");
}

person *hash_table_lookup(char *name) {
  int index = hash(name);
  person *tmp = hash_table[index];
  while (tmp != NULL && strncmp(tmp->name, name, TABLE_SIZE) != 0) {
    tmp = (person *)tmp->next;
  }
  return tmp;
}

bool hash_table_insert(person *p) {
  if (p == NULL)
    return false;
  int index = hash(p->name);
  // Make "p" the head of the list
  p->next = (struct person *)hash_table[index];
  hash_table[index] = p;
  return false;
}

person *hash_table_delete(char *name) {
  int index = hash(name);
  person *tmp = hash_table[index];
  person *prev = NULL;
  while (tmp != NULL && strncmp(tmp->name, name, TABLE_SIZE) != 0) {
    prev = tmp;
    tmp = (person *)tmp->next;
  }
  if (tmp != NULL) {
    return NULL;
  }
  if (prev == NULL) {
    hash_table[index] = (person *)tmp->next;
  } else {
    prev->next = tmp->next;
  }
  return tmp;
}

int main() {
  init_hash_table();
  // print_table();
  person jeremy = {.name = "Jeremy", .age = 25};
  person vivi = {.name = "Vivi", .age = 25};
  person ana = {.name = "Ana", .age = 25};
  person peter = {.name = "Peter", .age = 19};
  person tony = {.name = "Tony", .age = 35};
  person bruce = {.name = "Bruce", .age = 37};
  person diana = {.name = "Diana", .age = 32};

  hash_table_insert(&jeremy);
  hash_table_insert(&vivi);
  hash_table_insert(&ana);
  hash_table_insert(&peter);
  hash_table_insert(&tony);
  hash_table_insert(&bruce);
  hash_table_insert(&diana);
  print_table();

  // person *tmp = hash_table_lookup("Julian");
  // if (tmp == NULL) {
  //   printf("Not found!\n");
  // } else {
  //   printf("Found!\n");
  // }
  //
  // tmp = hash_table_lookup("Jeremy");
  // if (tmp == NULL) {
  //   printf("Not found!\n");
  // } else {
  //   printf("Found!\n");
  // }

  // hash_table_delete("Ana");
  print_table();

  return EXIT_SUCCESS;
}
