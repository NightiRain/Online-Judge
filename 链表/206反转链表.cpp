/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//˫ָ�����
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* prev = nullptr;
		ListNode* cur = head;
		while (cur != nullptr)
		{
			ListNode* nextTemp = cur->next;
			cur->next = prev;
			prev = cur;
			cur = nextTemp;
		}
		return prev;
	}
};


//�ݹ�
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		ListNode* cur = reverseList(head->next);
		head->next->next = head;
		head->next = nullptr;

		return cur;
	}
};