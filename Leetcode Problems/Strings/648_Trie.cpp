/*648.Replace Words*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct TrieNode{
    TrieNode *child[26];
    bool isEnd;
    TrieNode(){
        isEnd = false;
        for(int i = 0; i < 26; i++)
            child[i] = NULL;
    }
};

void insert(string k,TrieNode *root){
    TrieNode *curr = root;
    for(int i = 0; i < k.length(); ++i){
        int index = k[i] - 'a';
        if(curr->child[index] == NULL)
            curr->child[index] = new TrieNode();
        curr = curr->child[index];
    }
    curr->isEnd = true;
}

string search(string k,TrieNode *root){
    TrieNode *curr = root;
    string match = "";
    for(int i = 0; i < k.length(); ++i){
        int index = k[i] - 'a';
        if(curr->child[index] == NULL){
            return "";
        }
        match += k[i];
        curr = curr->child[index];
        if(curr->isEnd)
            return match;       
    }
    return "";
}

string replaceWords(vector<string>& dictionary, string sentence) {
    int j;
    TrieNode *r = new TrieNode();
    for (const auto &w:dictionary){
        insert(w,r);
    }

    string word,newSentence = "";
    stringstream st(sentence);
    while(st >> word){
        string check = search(word,r);
        if(check == "")
            newSentence += word + " ";
        else
            newSentence += check + " ";
    }

    for (j = newSentence.size() - 1; j > -1; j--)
        if (newSentence[j] != ' '){break;}

    delete r;
    return newSentence.substr(0,j+1);
}

int main(){
    vector<string> dictionary = {"cat","catt","bat","rat"};
    string sentence = "the cattle was rattled by the battery";
    cout << replaceWords(dictionary,sentence);
    return 0;
}