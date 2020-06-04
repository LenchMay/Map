#include <iostream>
#include <set>
#include <map>

using namespace std;

void ADD(map<string, set<string>>& Dictionary) {
    string word1, word2;
    cin >> word1 >> word2;
    Dictionary[word1].insert(word2);
    Dictionary[word2].insert(word1);
}

void COUNT(map<string, set<string>>& Dictionary) {
    string word;
    cin >> word;
    cout << Dictionary[word].size() << endl;
}

void CHECK(map<string, set<string>>& Dictionary) {
    string word1, word2;
    cin >> word1 >> word2;
    if (Dictionary.count(word1) && Dictionary[word1].count(word2)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

void OPERATIONS(map<string, set<string>>& Dictionary) {
    int Q;
    cout << "Quantity of operations: ";
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        string operation;
        cin >> operation;
        if (operation == "ADD") {
            ADD(Dictionary);
        }
        else if (operation == "COUNT") {
            COUNT(Dictionary);
        }
        else if (operation == "CHECK") {
            CHECK(Dictionary);
        }
        else {
            cout << "Such an operation does not exist. Available operations: ADD, COUNT, CHECK" << endl;
        }
    }
}

int main() {
    map<string, set<string>> synonymDictionary;
    OPERATIONS(synonymDictionary);
    return 0;
}