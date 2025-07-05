#include <stdio.h>

//Даны натуральное число n, действительные числа a1, ..., an.Вычислить:
//a1a2 ... an;

//тип данных для элементов списка
typedef struct {
	float value;
	struct Node* next;
}Node;

Node* NewNode(float data) {
    Node* node = malloc(sizeof(Node));
    if (node == NULL) return NULL;
     
    node->value = data;
    node->next = NULL;

    return node;
}

void AddNode(Node* head, float data) {
    Node* tmp = NewNode(data); //< Переменная нового узла
    if (tmp == NULL || head == NULL)
        return;

    //Нахождения хвоста
    while (head->next != NULL)
        head = head->next;

    //Связывание хвоста и нового узла
    head->next = tmp;
}

void PrintList(Node* head) {
    if (head == NULL)
        return;

    //вывод
    while (head != NULL) {
        printf("%.2f ", head->value);
        head = head->next;
    }
    printf("\n");
}

float MultList(Node* head) {
    float result = 0.0;
    Node* cNode = head; //< Текущий узел

    while (cNode != NULL) {
        result *= cNode->value;
        cNode = cNode->next;
    }

    return result;
}

void FreeList(Node* head) {
    if (head == NULL)
        return;

    //Освобождение всех узлов, кроме последнего
    while (head->next != NULL) {
        Node* tmp = head;
        head = head->next;
        free(tmp->value);
        free(tmp);
    }
    //Освобождение последнего элемента
    free(head);
}

void Start136b() {
    Node* head = NewNode(10);
    AddNode(head,12);

    PrintList(head);

    float mult = MultList(head);
    printf("%f",&mult);

    //FreeList(head);
}