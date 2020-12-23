#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
    struct ListNode *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);

    return 0;
}

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL && list2 == NULL) //判断2个链表是否都为空
    {
        return NULL;
    }
    int index = 0;
    struct ListNode *p, *head, *now;
    p = list1;
    while (p != NULL)
    {
        index++;
        p = p->next;
    }
    p = list2;
    while (p != NULL)
    {
        index++;
        p = p->next;
    }
    int data[index];
    int index2[index];
    int index3 = 0;
    p = list1;
    while (p != NULL)
    {
        index2[index3] = index3;
        data[index3] = p->data;
        p = p->next;
        index3++;
    }
    p = list2;
    while (p != NULL)
    {
        index2[index3] = index3;
        data[index3] = p->data;
        p = p->next;
        index3++;
    }
    index3 = 0;
    p = NULL;
    while (1)
    {
        index3 = 0;
        for (int i = 0; i < index - 1; i++)
        {
            if (data[index2[i]] > data[index2[i + 1]])
            {
                int temp = index2[i + 1];
                index2[i + 1] = index2[i];
                index2[i] = temp;
                index3++;
            }
        }
        if (index3 == 0)
        {
            break;
        }
    }
    index3 = 0;
    while (index3 < index)
    {
        if (index3 == 0)
        {
            head = (struct ListNode *)malloc(sizeof(struct ListNode));
            head->data = data[index2[index3]];
            if (index == 1)
            {
                head->next = NULL;
                break;
            }
            now = (struct ListNode *)malloc(sizeof(struct ListNode));
            head->next = now;
            index3++;
            continue;
        }
        now->data = data[index2[index3]];
        p = now;
        now = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->next = now;
        index3++;
    }
    if (index != 1)
    {
        free(now);
        p->next = NULL;
    }
    return head;
}