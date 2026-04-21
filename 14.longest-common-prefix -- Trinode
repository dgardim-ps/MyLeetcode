#include <string>
#include <vector>
using namespace std;

struct Trinode {
    char val;
    int wc;
    Trinode *child[26];
    bool isEnd;
    Trinode(char c) : val(c), wc(0), isEnd(false), child{} {}
};

class Solution {
public:
    void insert(Trinode* root, const string& word) {
        Trinode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx]) {
                node->child[idx] = new Trinode(c);
                node->wc++;
            }
            node = node->child[idx];
        }
        node->isEnd = true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        Trinode* root = new Trinode('*');
        for (const auto& word : strs) {
            insert(root, word);
        }
        
        string prefix;
        Trinode* node = root;
        while (node && node->wc == 1 && !node->isEnd) {
            int nextIndex = -1;
            for (int i = 0; i < 26; i++) {
                if (node->child[i]) {
                    nextIndex = i;
                    break;
                }
            }
            if (nextIndex == -1) break;
            prefix.push_back('a' + nextIndex);
            node = node->child[nextIndex];
        }
        return prefix;
    }
};
