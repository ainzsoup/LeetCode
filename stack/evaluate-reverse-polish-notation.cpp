#include <iostream>
#include <stack>
#include <vector>

using namespace std;
class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    std::stack<int> s;
    for (int i = 0; i < tokens.size(); i++) {
      if (!(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" ||
            tokens[i] == "*"))
        s.push(stoi(tokens[i]));
      else if (s.size() > 1)
      {
        int right = s.top();
        s.pop();
        int left = s.top();
        s.pop();
        if (tokens[i] == "+")
          s.push(left + right);
        else if (tokens[i] == "-")
          s.push(left - right);
        else if (tokens[i] == "/")
          s.push(left / right);
        else
          s.push(left * right);
      }
    }
    return s.top();
  }
};
