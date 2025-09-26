class twoStacks {
public:
    int arr[100];     // Fixed size array (as per constraint)
    int top1, top2;

    // Constructor to initialize top pointers
    twoStacks() {
        top1 = -1;
        top2 = 100;  // points to the end of the array
    }

    // Push x into Stack 1
    void push1(int x) {
        if (top1 + 1 < top2) {
            arr[++top1] = x;
        }
        // else do nothing (no overflow handling needed as per problem)
    }

    // Push x into Stack 2
    void push2(int x) {
        if (top2 - 1 > top1) {
            arr[--top2] = x;
        }
        // else do nothing (no overflow handling needed as per problem)
    }

    // Pop from Stack 1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        }
        return -1; // Stack 1 is empty
    }

    // Pop from Stack 2
    int pop2() {
        if (top2 < 100) {
            return arr[top2++];
        }
        return -1; // Stack 2 is empty
    }
};
