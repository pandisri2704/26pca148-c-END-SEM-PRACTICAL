#include <iostream>
using namespace std;

int main()
{
    string q[5];
    int front = 0, rear = -1;

    // Add customers
    rear++;
    q[rear] = "Arun";

    rear++;
    q[rear] = "Kumar";

    rear++;
    q[rear] = "Priya";

    // Display
    cout << "Waiting Customers: ";
    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    // Attend next customer
    cout << "\nAttending: " << q[front];
    front++;

    // Display remaining
    cout << "\nWaiting Customers: ";
    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
