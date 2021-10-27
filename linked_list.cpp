_______________________ Reverse LinkedList _______________________

_______________________ Iterative _______________________

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr != nullptr){
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

_______________________ Recursive _______________________

ListNode* reverseList(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;
    ListNode* p = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return p;
}