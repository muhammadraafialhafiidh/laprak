#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool binarySearch(string sentence, char target)
{
    int left = 0;
    int right = sentence.length() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (sentence[mid] == target)
        {
            return true;
        }

        if (sentence[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return false;
}

int main()
{
    string sentence;
    char target;

    cout << "Masukkan kalimat : ";
    getline(cin, sentence);

    cout << "Masukkan huruf yang akan dicari : ";
    cin >> target;

    // Mengubah seluruh huruf menjadi lowercase untuk pencarian yang tidak case-sensitive
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    target = tolower(target);

    if (binarySearch(sentence, target))
    {
        cout << "Huruf " << target << " ditemukan didalam kalimat." << endl;
    }
    else
    {
        cout << "Huruf tidak ditemukan didalam kalimat." << endl;
    }

    return 0;
}
