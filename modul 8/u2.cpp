#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(string sentence)
{
    int count = 0;
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    for (char c : sentence)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string sentence;

    cout << "Masukkan kalimat yang ingin di cari huruf vokalnya : ";
    getline(cin, sentence);

    int vowelCount = countVowels(sentence);

    cout << "Jumlah huruf vokal yang ada didalam kalimat : " << vowelCount << endl;

    return 0;
}
