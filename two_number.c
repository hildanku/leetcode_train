/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    // int dummy_head = new ListNode(0);
    struct ListNode* dummy_head = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy_head->val = 0;
    dummy_head->next = NULL;    

    struct ListNode* current = dummy_head;

  while(l1 != NULL || l2 != NULL || carry != 0){
    int val1 = (l1 != NULL) ? l1->val : 0;
    int val2 = (l2 != NULL) ? l2->val : 0;

    int sum = val1 + val2 + carry;
    carry = sum / 10;

    struct ListNode* current_next = (struct ListNode*)malloc(sizeof(struct ListNode));
    current_next->val = sum % 10;
    current_next->next = NULL;

    current->next = current_next;

    current = current_next;

    if (l1 != NULL) {
      l1 = l1->next;
    }
    if (l2 != NULL){
      l2 = l2->next;
    }
  }
  
  return dummy_head->next;
}
