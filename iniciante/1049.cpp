#include <iostream>

using namespace std;

struct animal
{
    string nome;
    animal* right;
    animal* left;
};

animal* criaNo(string nome){
    animal* geral = new animal;
    geral->nome = nome;
    geral->left = nullptr;
    geral->right = nullptr;
    return geral;
}

void criaHead(animal* head){ 
}

int main(){
    string caracteristica;
    animal* head = criaNo("");
    
    head->right = criaNo("vertebrado");
        head->right->right = criaNo("ave"); 
            head->right->right->right = criaNo("carnivoro"); 
                head->right->right->right->right = criaNo("aguia"); 
            head->right->right->left = criaNo("onivoro"); 
                head->right->right->left->right = criaNo("pomba"); 
        head->right->left = criaNo("mamifero");
            head->right->left->right = criaNo("onivoro");
                head->right->left->right->right = criaNo("homem");
            head->right->left->left = criaNo("herbivoro");
                head->right->left->left->right = criaNo("vaca");
    head->left = criaNo("invertebrado");
        head->left->right = criaNo("inseto");
            head->left->right->right = criaNo("hematofago");
                head->left->right->right->right = criaNo("pulga");
            head->left->right->left = criaNo("herbivoro");
                head->left->right->left->right = criaNo("lagarta");
        head->left->left = criaNo("anelideo");
            head->left->left->right = criaNo("hematofago");
                head->left->left->right->right = criaNo("sanguessuga");
            head->left->left->left = criaNo("onivoro");
                head->left->left->left->right = criaNo("minhoca");
   

    animal* temp = head;
    for(int i = 0; i < 3; i++){
        cin >> caracteristica;
        if(caracteristica == temp->right->nome) temp = temp->right;
        else temp = temp->left;
    }
    cout << temp->right->nome << endl;
    return 0;
}
