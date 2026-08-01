#include <stack>
#include <string>

bool valid_braces(const std::string& braces) {
    std::stack<char> st;
    for (char c : braces) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            bool match = false;
            switch (c) {
                case ')': match = (top == '('); break;
                case ']': match = (top == '['); break;
                case '}': match = (top == '{'); break;
                default: return false; // на случай невалидных символов
            }
            if (!match) return false;
            st.pop();
        }
    }
    return st.empty();
}