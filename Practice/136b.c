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

float sum_list(tnode* head) {
    float sum = 0.0; //< Сумма 
    tnode* cur_node = head; //< Текущий узел

    while (cur_node != NULL) {
        sum = sum + cur_node->data;
        cur_node = cur_node->next;
    }

    return sum;
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

    FreeList(head);
    PrintList(head);
}