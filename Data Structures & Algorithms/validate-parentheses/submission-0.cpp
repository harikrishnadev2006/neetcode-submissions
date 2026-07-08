class Stack {
    char arr[10000];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 9999;
    }

    void push(char x) {
        if(isFull()) {
            return;
        }
        arr[++top] = x;
    }

    char pop() {
        if(isEmpty()) {
            return '\0';
        }
        return arr[top--];
    }

    char peek() {
        if(isEmpty()) {
            return '\0';
        }
        return arr[top];
    }
};

class Solution {
public:
    bool isValid(string s) {
        Stack stk;

        unordered_map<char, char> hash1;
        hash1[')'] = '(';
        hash1['}'] = '{';
        hash1[']'] = '[';

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
            }
            else
            {
                if(stk.isEmpty())
                    return false;

                if(stk.pop() != hash1[s[i]])
                    return false;
            }
        }
        return stk.isEmpty();
    }
};