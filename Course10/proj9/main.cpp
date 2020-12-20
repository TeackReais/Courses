#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse(struct ListNode *head);
void printlist(struct ListNode *head)
{
    struct ListNode *p = head;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = reverse(head);
    printlist(head);

    return 0;
}

struct ListNode *reverse(struct ListNode *head)
{
    struct ListNode *p, *temp, *NodeList2Now, *NodeList2end;
    int size = sizeof(struct ListNode);
    p = head;
    int index = 0;
    while (1)
    {
        if (p == NULL)
        {
            free(NodeList2Now);
            break;
        }
        if (index == 0)
        {
            NodeList2end = (struct ListNode *)malloc(size);
            NodeList2Now = (struct ListNode *)malloc(size);
            NodeList2end->data = p->data;
            NodeList2end->next = NULL;
            NodeList2Now->next = NodeList2end;
            p = p->next;
            index++;
            continue;
        }
        NodeList2Now->data = p->data;
        temp = NodeList2Now;
        NodeList2Now = (struct ListNode *)malloc(size);
        NodeList2Now->next = temp;
        p = p->next;
    }
    return temp;
}