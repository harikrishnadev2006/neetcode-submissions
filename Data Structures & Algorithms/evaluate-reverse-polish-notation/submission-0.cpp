class Solution {
    stack<int> st;
public:
    int evalRPN(vector<string>& tokens) {
        for(int i=0;i<tokens.size();i++){
            if (tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="*" and tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            if (tokens[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int result=a+b;
                st.push(result);
                }
            if (tokens[i]=="-"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int result=b-a;
                st.push(result);
            }
            if (tokens[i]=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int result=a*b;
                st.push(result);
            }
            if (tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int result=b/a;
                st.push(result);
            }

             
            }
            return st.top();
        }
};
