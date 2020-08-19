/* Problem Link -> https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem */

bool has_cycle(SinglyLinkedListNode* head) {
    if(!head) return false;
    SinglyLinkedListNode* slow = head ;
    if(!(head->next)) return false ;
    SinglyLinkedListNode* fast = head->next ;
    while( fast and fast->next and fast->next->next ) {
        slow = slow->next ;
        fast = fast->next->next ;
        if(slow == fast) return true;
    }
    return false;
}