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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* aux = head;
        int contagem1 = 0; // entra no loop com 0 e já soma assim que começa, porque a condição de parada é só quando o proprio aux for nullptr, então não para antes, mas só depois de passar por todos os nós
        int contagem2 = 0;
        int meio = 0;
        for(aux; aux != nullptr; aux = aux->next){
            contagem1 += 1;
        }
        if(contagem1 == 1){
            return aux;
        }
        aux = head;
        meio = contagem1 / 2;
        for(aux; aux != nullptr; aux = aux->next){
            if(contagem2 == (meio-1)){
                aux->next = aux->next->next;
                break;
            }
            contagem2++;
        }
        return head;
    }
};