class trienode{
    public:
    map<char,trienode*>child;
    vector<string>suggestions;
    void addsuggestions(const string &product){
        if(suggestions.size()<3){
            suggestions.push_back(product);
        }else{
            sort(suggestions.begin(),suggestions.end());
            if(product<suggestions[2]){
                suggestions.pop_back();
                suggestions.push_back(product);
            }
        }
    }
};
class trie{
    public:
    trienode* root;
    trie(){
        root=new trienode();
    }
    void insert(const string &product){
        trienode* node=root;
        for(char c:product){
            if(!node->child[c]){
                node->child[c]=new trienode();
            }
            node =node->child[c];
            node->addsuggestions(product);
        }
    }
    vector<string>getsuggestions(trienode* node){
        return node?node->suggestions:vector<string>();
    }
    vector<vector<string>>search(const string& searchword){
        vector<vector<string>>result;
        trienode* node=root;
        for(char c:searchword){
            node=node?node->child[c]:nullptr;
            result.push_back(getsuggestions(node));
        }
        return result;
    }
};
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        trie Trie;
        for(const string & product:products){
            Trie.insert(product);
        }
        return Trie.search(searchWord);
    }
};