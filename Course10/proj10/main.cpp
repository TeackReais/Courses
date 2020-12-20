#include <stdio.h>
#include <stdlib.h>

struct stud_node
{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist(struct stud_node *head, int min_score);

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for (p = head; p != NULL; p = p->next)
        printf("%d %s %d\n", p->num, p->name, p->score);
    return 0;
}

struct stud_node *createlist()
{
    int num;
    int size = sizeof(struct stud_node);
    struct stud_node *head, *p, *temp;
    int index = 0;
    head = (struct stud_node *)malloc(size);
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            if (index == 1)
            {
                head->next = NULL;
            }
            else if (index == 0)
            {
                head = NULL;
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
            p = (struct stud_node *)malloc(size);
            head->next = p;
            scanf("%s %d", (head->name), &(head->score));
            head->num = num;
            index++;
            continue;
        }
        scanf("%s %d", (p->name), &(p->score));
        p->num = num;
        temp = p;
        p = (struct stud_node *)malloc(size);
        temp->next = p;
        index++;
    }
    return head;
}

struct stud_node *deletelist(struct stud_node *head, int min_score)
{
    struct stud_node *p, *temp, *NodeList2Now, *NodeList2head;
    int size = sizeof(struct stud_node);
    int index;
    p = head;
    index = 0;
    while (1) //新建奇数链表
    {
        if (p == NULL)
        {
            free(NodeList2Now);
            if (index == 1)
            {
                NodeList2head->next = NULL;
            }
            else
            {
                temp->next = NULL;
            }
            break;
        }
        if (p->score >= min_score && index == 0)
        {
            NodeList2head = (struct stud_node *)malloc(size);
            NodeList2head->num = p->num;
            NodeList2head->score = p->score;
            for (int i = 0; i < 20; i++)
            {
                NodeList2head->name[i] = p->name[i];
            }
            index++;
            NodeList2Now = (struct stud_node *)malloc(size);
            NodeList2head->next = NodeList2Now;
            p = p->next;
            continue;
        }
        if (p->score >= min_score && index != 0)
        {
            NodeList2Now->num = p->num;
            NodeList2Now->score = p->score;
            for (int i = 0; i < 20; i++)
            {
                NodeList2Now->name[i] = p->name[i];
            }
            temp = NodeList2Now;
            NodeList2Now = (struct stud_node *)malloc(size);
            temp->next = NodeList2Now;
            index++;
        }
        p = p->next;
    }
    p = head;
    temp = head;
    while (1) //释放原链表内存
    {
        p = temp;
        temp = p->next;
        if (temp == NULL)
        {
            break;
        }
        free(p);
    }
    return NodeList2head;
}