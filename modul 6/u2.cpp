#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseLetters(const string &sentence)
{
    stack<char> letterStack;
    string reversedSentence;
    string word;

    for (char c : sentence)
    {
        if (c == ' ')
        {
            while (!letterStack.empty())
            {
                reversedSentence += letterStack.top();
                letterStack.pop();
            }
            reversedSentence += ' ';
        }
        else
        {
            letterStack.push(c);
        }
    }
    while (!letterStack.empty())
    {
        reversedSentence += letterStack.top();
        letterStack.pop();
    }
    return reversedSentence;
}

bool isPalindrome(const string &sentence)
{
    stack<char> charStack;
    // Push each character of the word into the stack
    for (char c : sentence)
    {
        charStack.push(c);
    }
    // Compare each character from the stack with the word
    for (char c : sentence)
    {
        if (c != charStack.top())
        {
            return false;
        }
        charStack.pop();
    }
    return true;
}

int main()
{
    string sentence;
    cout << "Masukkan kalimat : ";
    getline(cin, sentence);
    cout << endl;
    string reversed = reverseLetters(sentence);
    cout << "Kalimat dengan huruf terbalik : " << reversed << endl;

    if (isPalindrome(sentence))
    {
        cout << "Kata " << sentence << " adalah kata palindrome." << endl;
    }
    else
    {
        cout << "Kata " << sentence << " bukan kata palindrome." << endl;
    }

    return 0;
}
