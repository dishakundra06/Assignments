#include <iostream>
using namespace std;
const int MAX = 10;
int stackArr[MAX];
int topIndex = -1;

bool isEmpty() {
    return topIndex == -1;
}

bool isFull() {
    return topIndex == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        cout << "Stack is FULL! Cannot push " << value << endl;
    } else {
        stackArr[++topIndex] = value;
        cout << value << " pushed into stack." << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is EMPTY! Cannot pop." << endl;
    } else {
        cout << stackArr[topIndex--] << " popped from stack." << endl;
    }
}
void display() {
    if (isEmpty()) {
        cout << "Stack is EMPTY!" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= topIndex; i++) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack is EMPTY! Nothing to peek." << endl;
    } else {
        cout << "Top element is: " << stackArr[topIndex] << endl;
    }
}

int main() {
    int choice, value;
    cout << "----- MENU DRIVEN PROGRAM -----" << endl;

    do {
        cout << "\nChoose an operation:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Check isEmpty" << endl;
        cout << "4. Check isFull" << endl;
        cout << "5. Display Stack" << endl;
        cout << "6. Peek" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << (isEmpty() ? "Stack is EMPTY" : "Stack is NOT EMPTY") << endl;
                break;
            case 4:
                cout << (isFull() ? "Stack is FULL" : "Stack is NOT FULL") << endl;
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);

    cout << "------ PROGRAM FINISHED -------" << endl;
    return 0;
}
