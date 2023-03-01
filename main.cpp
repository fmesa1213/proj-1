/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Project 1 Task A
*/

#include <iostream>
using namespace std;

int main()
{

readWords("dictionary.txt");
  for (int i = 0; i < g_word_count; i++){
      cout << g_words[i] << " ("<< g_pos[i] << ")" << g_definitions[i] << endl;
  }
  return 0;
}
