#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * preptr;
    struct node * nextptr;
}
*stnode, *ennode;


void listCreation(int n);
void listRev();

int main()
{
    int n;
    stnode = NULL;
    ennode = NULL;
	printf(" Number of Nodes: ");
    scanf("%d", &n);

    createList(n);
    revList();
    return 0;
}

void listCreation(int n)
{
    int i, num;
    struct node *fnNode;

    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));

        if(stnode != NULL)
        {
            printf(" Value of \nNode 1 : ");
            scanf("%d", &num);

            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf("Node %d: ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;
                    fnNode->nextptr = NULL;

                    ennode->nextptr = fnNode;
                    ennode = fnNode;
                }
                else
                {
                    printf(" Memory error.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory error.");
        }
    }
}

void listRev)
{
    struct node * tmp;
    int n = 0;

    if(ennode == NULL)
    {
        printf(" No data.");
    }
    else
    {
        tmp = ennode;
        printf("Reversed Data\n");
        while(tmp != NULL)
        {
            printf(" Node %d: %d", n+1, tmp->num);
            n++;
            tmp = tmp->preptr;
        }
    }
}
