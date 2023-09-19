#include <stdio.h>
#include <stdlib.h>

// Define a struct to represent MyObject
typedef struct {
    int data;
} MyObject;

int main() {
    // Create a buffer of memory (an array of MyObject)
    MyObject* buffer = (MyObject*)malloc(sizeof(MyObject) * 3);

    // Use the buffer to create MyObject instances at specific memory locations
    MyObject* obj1 = &buffer[0];
    obj1->data = 1;

    MyObject* obj2 = &buffer[1];
    obj2->data = 2;

    MyObject* obj3 = &buffer[2];
    obj3->data = 3;

    // Perform operations on the objects
    printf("obj1 data: %d\n", obj1->data);
    printf("obj2 data: %d\n", obj2->data);
    printf("obj3 data: %d\n", obj3->data);

    // Free the allocated memory
    free(buffer);

    return 0;
}
