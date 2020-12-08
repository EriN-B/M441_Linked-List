#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

typedef struct Elm {
    struct Elm* pNext;
    int Nr;
} struListElm;

typedef struct Data {
    char Bez[50];
    double Preis;
} struDataElm;

int start_sequence(int anz);

struListElm* createList(int anz)
{
    struListElm* pNew = NULL;
    struListElm* pFirst = NULL;
    struListElm* pLast = NULL;

    for (int iElm = 0; iElm < anz; iElm++) {
        // Element erstellen und initialisieren
        pNew = (struListElm*)malloc(sizeof(struListElm));
        if (pNew == NULL) exit(-1);
        pNew->pNext = NULL;
        pNew->Nr = iElm + 1;

        // Neues Element an Liste anfügen
        if (pFirst == NULL) pFirst = pNew;
        if (pLast != NULL) pLast->pNext = pNew;
        pLast = pNew;
    }
    start_sequence(1);
    return pFirst;
}

int deleteList()
{
    printf("test");
    system("pause");
    return 0;
}
int sortList()
{
    printf("test");
    system("pause");
    return 0;
}
void printList(struListElm* pFirst)
{
    for (struListElm* pElm = pFirst; pElm != NULL; pElm = pElm->pNext)
        printf("Nr=%i\n", pElm->Nr);

    printf("test");
    system("pause");
}

int start_sequence(int index)
{
    char input;

    if (index == 1)
    {
        printf("Welcome to the Linked-List Project\n");
        printf("Moritz Wicki && Erin Bachmann\n\n");
    }
    printf( "Pleace select your desired Action\n\n");

    printf( "A: Create new List\n\n");

    printf( "B: Delete existing List\n\n");

    printf( "C: Sort existing List\n\n");

    printf( "D: Print out existing List\n\n");

    cin >> input;

    if (input == 'A')
    {
        int anz;
        printf(" Type in the ammont of items desire to have: ");
        cin >> anz;
        createList(anz);
    }
    else if (input == 'B')
    {
        deleteList();
    }
    else if (input == 'C')
    {
        sortList();
    }
    else if (input == 'D')
    {
        struListElm* pStart = NULL;
        printList(pStart);
    }
    else
    {
        printf( "There was a invalud Input, try again.");
        start_sequence(1);
    }

    return 0;
}

int main()
{
    start_sequence(1);
    return 0;
}
