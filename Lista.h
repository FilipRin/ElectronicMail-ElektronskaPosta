#ifndef _LISTA_H_
#define _LISTA_H_

template <typename T>
struct Node {
    T data = NULL;
    Node* next = NULL;
};

template <typename T> class List {
private:
    Node<T>* head;
    Node<T>* current;
public:

    List() {
        head = NULL;
        current = NULL;
    }

    void push(T val) {
        Node<T>* n = new Node<T>();
        n->data = val;
        n->next = head;
        head = n;
        current = head;
    }

    T pop() {
        if (head) {
            T p = head->data;
            head = head->next;
            return p;
        }
    }

    bool getElementAndChange()
    {
        if (current == NULL)
            return false;
        std::cout << "Vrednost na tekucoj poziciji liste je " << current->data;
        std::cout << "\nUnesite vrednost promene ako zelite, a ukoliko ne, unesite karakter '!'" << std::endl;
        int temp = NULL;
        cin >> temp;
        if (temp == 0)
            return true;
        current->data = temp;
        return true;
    }

    bool setCurrentNext()
    {
        if (current->next)
        {
            current = current->next;
            return true;
        }
        return false;
    }

    void setCurrentHead()
    {
        current = head;
    }

    bool doesCurrentExist()
    {
        if (current != NULL)
            return true;
        return false;
    }

    int numOfElements()
    {
        Node<T>* temp = head;
        int num = 0;
        if (temp)
        {
            num++;
            if (temp->next)
                while (temp->next) {
                    num++;
                    temp = temp->next;
                }
        }

        return num;
    }
};


#endif // !_LISTA_H_
