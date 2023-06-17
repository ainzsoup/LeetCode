#include <string>
#include <sstream>


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 



int stringToInt(const std::string& str) {
    std::istringstream iss(str);
    unsigned long long num;
    iss >> num;
    return num;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ret = new ListNode();
        ListNode *it = ret;
        int carry = 0;
        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            it->val = sum % 10;
            if (l1 || l2 || carry) {
                it->next = new ListNode();
                it = it->next;
            }
        }
        return ret;
    }
};
