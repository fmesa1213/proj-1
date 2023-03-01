/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Project 1 Task A
*/

#include <iostream>
using namespace std;


const int g_MAX_WORDS = 1000;
int g_word_count = 0;
string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];

void add_word(string word, string definition, string pos) {
    if (g_word_count >= g_MAX_WORDS) {
        cout << "Dictionary is full, cannot add any more words!" << endl;
        return;
    }
    g_words[g_word_count] = word;
    g_definitions[g_word_count] = definition;
    g_pos[g_word_count] = pos;
    g_word_count++;
    cout << "Word added successfully!" << endl;
}

void display_words() {
    if (g_word_count == 0) {
        cout << "Dictionary is empty!" << endl;
        return;
    }
    cout << "Words in dictionary:" << endl;
    for (int i = 0; i < g_word_count; i++) {
        cout << g_words[i] << " (" << g_pos[i] << "): " << g_definitions[i] << endl;
    }
}

int main() {
    add_word("apple", "A fruit with red or green skin and a white inside.", "Noun");
    add_word("book", "A set of pages that are fastened together in a cover to be read or written in.", "Noun");
    add_word("run", "Move at a speed faster than a walk, never having both or all the feet on the ground at the same time.", "Verb");
    display_words();
    return 0;
}
