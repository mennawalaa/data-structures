#include <iostream>
using namespace std;
#define tablesize 7
struct node
{
    int value;
    node *next;
};
class table
{
public:
    node *t[tablesize];
    table()
    {
        for (int i = 0; i < tablesize; ++i)
        {
            t[i] = NULL;
        }
    }

    void insert_node(int key)
    {
        //get index
        int index = key % tablesize;
        if (!t[index])
        {
            node *pn = new node;
            t[index] = pn;
            t[index]->value = key;
            t[index]->next = NULL;
            cout << "stored in " << index << " " << t[index]->value << " " << endl;
        }
        else
        {
            cout << "else" << endl;
            node *temp = t[index];
            while (temp->next)
            {
                temp = temp->next;
            }
            node *pn = new node;
            temp->next = pn;
            pn->value = key;
            pn->next = NULL;
            cout << "stored in " << index << " " << t[index]->value << " " << endl;
        }
    }
    void delet_node(int key)
    {
        node *prev;
        node *foll;
        int index = key % tablesize;
        cout << "index" << index << endl;
        if (t[index] == NULL)
        {
            cout << "empty list" << endl;
        }
        else
        {
            cout << "else" << endl;
            node *temp = t[index];
            while (temp)
            {
                if (temp->value == key)
                {
                    cout << "if the node to be deleted at the start of list" << endl;
                    if (temp == t[index])
                    {
                        cout << "md5lsh hena leh" << endl;
                        node *st;
                        st = temp;
                        temp = temp->next;
                        free(st);
                        t[index] = temp;
                        cout << "elmoshkela hena" << t[index] << endl;
                        break;
                    }
                    else
                    {
                        cout << "general node" << endl;
                        foll = temp->next;
                        prev->next = foll;
                        free(temp);
                        cout << "mission accomplished" << endl;
                        break;
                    }
                }
                else if (temp->next->value == key)
                {
                    prev = temp;
                }
                temp = temp->next;
                cout << "try" << endl;
            }
        }
    }

    void display(void)
    {
        for (int i = 0; i < tablesize; ++i)
        {
            if (t[i] == NULL)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
                node *temp = t[i];
                while (temp)
                {
                    cout << "-->" << temp->value << " ";
                    temp = temp->next;
                }
                cout << " " << endl;
            }
        }
    }
};
int main()
{
    cout << "hello word" << endl;
    table t;
    t.insert_node(15);
    t.insert_node(8);
    t.insert_node(11);
    t.insert_node(27);
    t.insert_node(22);
    t.display();
    //  t.delet_node(15);
    t.delet_node(8);
    t.display();
    return 0;
}