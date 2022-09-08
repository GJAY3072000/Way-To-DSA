class TrieNode {
public:
    TrieNode *a[27];
    TrieNode() {
        for (int i = 0; i < 27; i++)
            a[i] = NULL;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    void insert(string word) {
        word += '{';
        TrieNode* node = root;
        
        for(auto i:word){
            if(!node->a[i-'a']) node->a[i-'a'] = new TrieNode();
            node = node->a[i-'a'];
        }
    }
    
    bool search(string word) {
        word += '{';
        TrieNode* node = root;

        for(auto i:word){
            if(!node->a[i-'a']) return false;
            node = node->a[i-'a'];
        }
        return true;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(auto i:prefix){
            if(!node->a[i-'a']) return false;
            node = node->a[i-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */