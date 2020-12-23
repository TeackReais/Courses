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

struct ListNode *getodd(struct ListNode **L)
{
    if (*L == NULL || L == NULL)
    {
        return NULL;
    }
    struct ListNode *p, *temp, *NodeList2Now, *NodeList2head, *NodeList3Now, *NodeList3head;
    int size = sizeof(struct ListNode);
    int index;
    //新建奇数链表
    p = *L;
    index = 0;
    while (1)
    {
        if (p == NULL)
        {
            //判断奇数链表是否为空
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
        if (p->data % 2 == 1 && index == 0)
        {
            NodeList2head = (struct ListNode *)malloc(size);
            NodeList2head->data = p->data;
            index++;
            NodeList2Now = (struct ListNode *)malloc(size);
            NodeList2head->next = NodeList2Now;
            p = p->next;
            continue;
        }
        if (p->data % 2 == 1 && index != 0)
        {
            NodeList2Now->data = p->data;
            temp = NodeList2Now;
            NodeList2Now = (struct ListNode *)malloc(size);
            temp->next = NodeList2Now;
            index++;
        }
        p = p->next;
    }
    //新建偶数链表
    p = *L;
    index = 0;
    while (1)
    {
        if (p == NULL)
        {
            //判断偶数链表是否为空
            if (index == 0)
            {
                temp = *L;
                *L = NULL;
                return temp;
            }
            if (index == 1)
            {
                NodeList3head->next = NULL;
            }
            else
            {
                free(NodeList3Now);
                temp->next = NULL;
            }
            break;
        }
        if (p->data % 2 == 0 && index == 0)
        {
            NodeList3head = (struct ListNode *)malloc(size);
            NodeList3head->data = p->data;
            index++;
            NodeList3Now = (struct ListNode *)malloc(size);
            NodeList3head->next = NodeList3Now;
            p = p->next;
            continue;
        }
        if (p->data % 2 == 0 && index != 0)
        {
            NodeList3Now->data = p->data;
            temp = NodeList3Now;
            NodeList3Now = (struct ListNode *)malloc(size);
            temp->next = NodeList3Now;
            index++;
        }
        p = p->next;
    }
    // p = *L;
    // temp = *L;
    *L = NodeList3head; //L=&NodeList3head无效，赋值，偶数链表
    // while (1)           //释放原链表内存
    // {
    //     p = temp;
    //     temp = p->next;
    //     if (temp == NULL)
    //     {
    //         break;
    //     }
    //     free(p);
    // }
    return NodeList2head; //奇数链表
}