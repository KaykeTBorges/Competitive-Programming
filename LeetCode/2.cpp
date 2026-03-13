/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* aux1 = l1;
        ListNode* aux2 = l2;
        int carry = 0;
        int x = 0;
        int y = 0;
        int soma = 0;

        ListNode* lista = new ListNode(0);
        ListNode* no = lista;

        while(aux1 != nullptr || aux2 != nullptr || carry != 0){
            if(aux1 == nullptr){
                x = 0;
            }else{
                x = aux1->val;
            }
            if(aux2 == nullptr){
                y = 0;
            }else{
                y = aux2->val;
            }
            soma = x + y + carry;
            carry = soma / 10; // resulta no primeiro valor, se a soma der maior que 10, valor da dezena
            soma = soma % 10; // resulta no segundo valor, valor da unidade que é adcionado ao valor

            no->val += soma;

            if((aux1 != nullptr && aux1->next != nullptr) || (aux2 != nullptr && aux2->next != nullptr) || carry > 0){
                no->next = new ListNode(0);
                no = no->next;
            }
            

            if (aux1 != nullptr) {
                aux1 = aux1->next;
            }
            if (aux2 != nullptr) {
                aux2 = aux2->next;
            }
        }
        return lista;
    }
};