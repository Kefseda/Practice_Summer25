#include <stdio.h>

//���� ����������� ����� n, �������������� ����� a1, ..., an.���������:
//a1a2 ... an;

//��� ������ ��� ��������� ������
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
    Node* tmp = NewNode(data); //< ���������� ������ ����
    if (tmp == NULL || head == NULL)
        return;

    //���������� ������
    while (head->next != NULL)
        head = head->next;

    //���������� ������ � ������ ����
    head->next = tmp;
}

void PrintList(Node* head) {
    if (head == NULL)
        return;

    //�����
    while (head != NULL) {
        printf("%.2f ", head->value);
        head = head->next;
    }
    printf("\n");
}

float sum_list(tnode* head) {
    float sum = 0.0; //< ����� 
    tnode* cur_node = head; //< ������� ����

    while (cur_node != NULL) {
        sum = sum + cur_node->data;
        cur_node = cur_node->next;
    }

    return sum;
}

void FreeList(Node* head) {
    if (head == NULL)
        return;

    //������������ ���� �����, ����� ����������
    while (head->next != NULL) {
        Node* tmp = head;
        head = head->next;
        free(tmp->value);
        free(tmp);
    }
    //������������ ���������� ��������
    free(head);
}

void Start136b() {
    Node* head = NewNode(10);
    AddNode(head,12);

    PrintList(head);

    FreeList(head);
    PrintList(head);
}