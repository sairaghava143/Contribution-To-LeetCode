class trienode{
    public:
    map<char,trienode*>child;
    vector<string>suggestions;
    
    void addsuggestions(string &product){
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
    
    void insert(string product){
        trienode* node=root;
        for(auto it:product){
            if(!node->child[it]){
                node->child[it]=new trienode();
            }
            node=node->child[it];
            node->addsuggestions(product);
        }
    }
    
    vector<string>getsuggestions(trienode* node){
        return node?node->suggestions:vector<string>();
    }
    
    vector<vector<string>>search(string searchword){
        vector<vector<string>>result;
        trienode* node=root;
        for(auto it:searchword){
            node =node?node->child[it]:nullptr;
    
            result.push_back(getsuggestions(node));
       
    }
        return result;
    }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        //trie practice
        sort(products.begin(),products.end());
        trie Trie;
        for(auto &product:products){
            Trie.insert(product);
        }
        return Trie.search(searchWord);
    }
};