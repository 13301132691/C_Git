//
// Created by Administrator on 2017/9/27.
//
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

ListNode* reverseList(ListNode* head){
    ListNode* new_head = NULL;
    while(head){
        ListNode* next = head->next;
        head->next = new_head;
        new_head = head;
        head = next;
    }
    return new_head;
}
ListNode* reverseBetween(ListNode* head,int m, int n){
    int change_len = n-m+1;
    ListNode *pre_head = NULL;
    ListNode *result = head;
    while(head && --m){
        pre_head = head;
        head = head->next;
    }
    ListNode *modify_list_tail = head;
    ListNode *new_head = NULL;
    while(head && change_len--){
        ListNode *next = head->next;
        new_head->next=head;
        new_head=head;
        head=next;
    }
    modify_list_tail->next = head;
    if(pre_head){
        pre_head->next = new_head;
    }
    else{
        result = new_head;
    }
    return result;
}

int get_list_length(ListNode *head){
    int len = 0;
    while(head){
        len++;
        head = head->next;
    }
    return len;
}

ListNode* forward_long_list(ListNode *head, int m, int n){
    int move = m - n;
    while(head&&move--){
        head = head->next;
    }
    return head;
}

ListNode* getIntersectionNode(ListNode *headA, ListNode *headB){
    int lenA = get_list_length(headA);
    int lenB = get_list_length(headB);
    if(lenA>lenB){
        headA = forward_long_list(headA, lenA, lenB);
    } else if(lenA<lenB){
        headB = forward_long_list(headB, lenB, lenA);
    }
    while(headA&&headB){
        if(headA==headB){
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}

ListNode * detectCycle(ListNode *head){
    ListNode *meet = NULL;
    ListNode *fast = head;
    ListNode *slow = head;
    while(fast){
        fast = fast->next;
        slow = slow->next;
        if(!fast){
            return NULL;
        }
        fast = fast->next;
        if(slow == fast){
            meet = fast;
            break;
        }
    }
    while(head&&meet){
        if(head == meet){
            return head;
        }
        head = head->next;
        meet = meet->next;
    }
    return NULL;
}

ListNode* partition(ListNode *head, int x){
    ListNode left_head(0);
    ListNode right_head(0);
    ListNode *left = &left_head;
    ListNode *right = &right_head;
    while(head){
        if(head->val <= x){
            left->next = head;
            left = head;
        }else{
            right->next = head;
            right = head;
        }
        head = head->next;
    }
    left->next = right_head.next;
    right->next = NULL;
    return left_head.next;
}

struct RandomListNode{
    int val;
    RandomListNode *next,*random;
    RandomListNode(int x) : val(x), next(NULL),random(NULL){}
};

RandomListNode *copyRandomList(RandomListNode *head){
    map<RandomListNode *,int> node_map;
    vector<RandomListNode *> node_vec;
    RandomListNode *ptr = head;
    int i=0;
    while(ptr){
        node_vec.push_back(new RandomListNode(ptr->val));
        node_map[ptr] = i;
        i++;
        ptr = ptr->next;
    }
    node_vec.push_back(0);
    ptr = head;
    i=0;
    while(ptr){
        node_vec[i]->next = node_vec[i+1];
        if(ptr->random){
            int id = node_map[ptr->random];
            node_vec[i]->random = node_vec[id];
        }
        i++;
        ptr = ptr->next;
    }
    return node_vec[0];
}

ListNode* mergeTwoLists(ListNode *l1, ListNode *l2){
    ListNode new_head(0);
    ListNode *nd = &new_head;
    while(l1&&l2){
        if(l1->val <= l2->val){
            nd->next = l1;
            l1 = l1->next;
        }
        else{
            nd->next = l2;
            l2 = l2->next;
        }
        nd = nd->next;
    }
    if(l1){
        nd->next = l1;
    }
    if(l2){
        nd->next = l2;
    }
    return new_head.next;
}

int main(){

    ListNode a(10);
    ListNode b(20);
    ListNode c(30);
    ListNode d(40);
    ListNode e(50);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    ListNode *head = &a;
    while(head){
        printf("%d\n",head->val);
        head = head->next;
    }

    head = reverseList(&a);
    printf("after reverse\n");
    while(head){
        printf("%d\n",head->val);
        head = head->next;
    }
    return 0;
}