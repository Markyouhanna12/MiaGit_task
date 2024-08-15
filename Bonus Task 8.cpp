#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

class QueueUsingStacks {
private:
    stack<string> stack1;
    stack<string> stack2;

    void transfer() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

public:
    void enqueue(const string& element) {
        stack1.push(element);
    }

    string dequeue() {
        if (stack2.empty()) {
            if (stack1.empty()) {
                throw runtime_error("Queue is empty");
            }
            transfer();
        }
        string top = stack2.top();
        stack2.pop();
        return top;
    }

    void display() {
        stack<string> tempStack = stack2;
        while (!tempStack.empty()) {
            cout << tempStack.top()<<" ";
            tempStack.pop();
        }

        tempStack = stack1;
        vector<string> tempVector;
        while (!tempStack.empty()) {
            tempVector.push_back(tempStack.top());
            tempStack.pop();
        }

        for (auto it = tempVector.rbegin(); it != tempVector.rend(); ++it) {
            cout << *it <<endl<<endl;
        }

        cout << endl;
    }
};

int main() {
    QueueUsingStacks queue;

    vector<string> batmanWeapons = {"Batarang", "GrappleGun", "ExplosiveGel", "Batclaw"};
    vector<string> batmanShields = {"CapeGlide", "SmokePellet"};

    for (const auto& weapon : batmanWeapons) {
        queue.enqueue(weapon);
    }
    for (const auto& shield : batmanShields) {
        queue.enqueue(shield);
    }

    cout << "Queue contents:" << endl<<endl;
    queue.display();

    return 0;
}
