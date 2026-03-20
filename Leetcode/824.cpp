#include <iostream>

using namespace std;

int main()
{

    string sentence;
    getline(cin, sentence);

    int n = sentence.size();

    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
        {
        }
    }

    return 0;
}