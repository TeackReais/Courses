#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);
    return 0;
}

struct ListNode *readlist()
{
    int input;
    int size = sizeof(struct ListNode);
    struct ListNode *head, *p, *temp;
    int index = 0;
    head = (struct ListNode *)malloc(size);
    while (1)
    {
        scanf("%d", &input);
        if (input == -1)
        {
            temp->next = NULL;
            free(p);
            break;
        }
        if (index == 0)
        {
            p = (struct ListNode *)malloc(size);
            head->next = p;
            head->data = input;
            continue;
        }
        p->data = input;
        temp = p;
        p = (struct ListNode *)malloc(size);
        temp->next = p;
        index++;
    }
    return &head;
}

struct ListNode *getodd(struct ListNode **L)
{
    struct ListNode *p, *temp, *NodeList2Now, *NodeList2head, *result;
    p = *L;
    int size = sizeof(struct ListNode);
    NodeList2head = (struct ListNode *)malloc(size);
    NodeList2temp = (struct ListNode *)malloc(size);
    NodeList2head->next = NodeList2temp;
    while (p->next != NULL)
    {
        if (p->data % 2 == 1)
        {
            //转移链表数据
            NodeList2Now = p->data;
            temp = NodeList2Now;
            NodeList2Now = (struct ListNode *)malloc(size);
            temp->next = NodeList2Now;
        }
        p = p->next;
    }
    p = p->next;
    if (p->data % 2 == 1)
    {
        
    }
    temp->next = NULL;
    free(NodeList2Now);
    result = NodeList2head->next;
    free(NodeList2head);
    temp = NULL;
    p = *L;
    while (p->next != NULL)
    {
        if (p->data % 2 == 1)
        {
            //修改链表
            temp = p->next;
            free(p);
            p = temp;
        }
        p = p->next;
    }
    return result;
}