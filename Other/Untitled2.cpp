#include <vector>
#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct Node{
    int freq, size;
    char ch;
    Node* left;
    Node* right;
    Node(int f, char c) {
        this->ch = c;
        this->freq = f;
        this->left = this->right = NULL;
        this->size = 1;
    }
};

class Compare {
public:
    bool operator() (Node* a, Node* b) {
        return a->freq > b->freq;
    }
};
string bits = "";
int total = 0;
void printHuffman(Node* root) {
    if (!root->left && !root->right) {
        cout << root->ch << " ==> " << bits << " \t==> " << bits.size()*root->freq<< endl;
        total += bits.size()*root->freq;
        return;
    }
    if (root->left) {
        bits += '0';
        printHuffman(root->left);
        bits.pop_back();
    }
    if (root->right) {
        bits += '1';
        printHuffman(root->right);
        bits.pop_back();
    }
}

int main(){
    cout<<"Enter String: "<<endl;
    string s; cin >> s;
    map<char,int> counter;
    for (auto ch: s) {
        counter[ch]++;
    }
    priority_queue<Node*, vector<Node*>, Compare> pq;

    for (auto itr: counter) {
        Node* temp = new Node(itr.second, itr.first);
        pq.push(temp);
    }
    while((int)pq.size() > 1) {
        auto left = pq.top();
        pq.pop();
        auto right = pq.top();
        pq.pop();
        int fSum = left->freq + right->freq;
        Node* temp = new Node(fSum, '*');
        temp->size = left->size + right->size;
        temp->left = left;
        temp->right = right;
        pq.push(temp);
    }
    printHuffman(pq.top());
    cout<<"Total Bits : "<<total<<endl;
}
