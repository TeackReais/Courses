#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
    int input;
    int size = sizeof(struct ListNode);
    struct ListNode *head, *p, *temp;
    int index = 0;
    while (1)
    {
        scanf("%d", &input);
        if (input == -1)
        {
            if (index == 0)
            {
                return NULL;
            }
            else if (index == 1)
            {
                head->next = NULL;
            }
            else
            {
                temp->next = NULL;
            }
            free(p);
            break;
        }
        if (index == 0)
        {
            head = (struct ListNode *)malloc(size);
            p = (struct ListNode *)malloc(size);
            head->next = p;
            head->data = input;
            index++;
            continue;
        }
        p->data = input;
        temp = p;
        p = (struct ListNode *)malloc(size);
        temp->next = p;
        index++;
    }
    return head;
}

struct ListNode *deletem(struct ListNode *L, int m)
{
    if (L == NULL)
    {
        return NULL;
    }
    struct ListNode *p, *temp, *NodeList2Now, *NodeList2head;
    int size = sizeof(struct ListNode);
    int index;
    //新建链表
    p = L;
    index = 0;
    while (1)
    {
        if (p == NULL)
        {
            //判断链表是否为空
            if (index == 0)
            {
                return NULL;
            }
            if (index == 1)
            {
                NodeList2head->next = NULL;
            }
            else
            {
                free(NodeList2Now);
                temp->next = NULL;
            }
            break;
        }
        if (p->data != m && index == 0)
        {
            NodeList2head = (struct ListNode *)malloc(size);
            NodeList2head->data = p->data;
            NodeList2Now = (struct ListNode *)malloc(size);
            NodeList2head->next = NodeList2Now;
            p = p->next;
            index++;
            continue;
        }
        if (p->data != m && index != 0)
        {
            NodeList2Now->data = p->data;
            temp = NodeList2Now;
            NodeList2Now = (struct ListNode *)malloc(size);
            temp->next = NodeList2Now;
            index++;
        }
        p = p->next;
    }
    // p = L;
    // while (1) //释放原链表内存
    // {
    //     p = temp;
    //     temp = p->next;
    //     if (temp == NULL)
    //     {
    //         break;
    //     }
    //     free(p);
    // }
    return NodeList2head;
}