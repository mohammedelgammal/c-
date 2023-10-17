// Libraries
#include <iostream>

using namespace std;

vector<string> split(string &word, char regex)
{
    vector<string> wordArray;
    string nextWord;
    size_t SPACE_ASCI = regex;
    int startIndex = 0, endIndex = 0;

    while (endIndex < word.length())
    {
        if (word[endIndex] == SPACE_ASCI | endIndex == word.length() - 1)
        {
            while (startIndex < endIndex)
                if (word[startIndex] != SPACE_ASCI)
                    nextWord += word[startIndex++];

            if (nextWord.length())
            {
                wordArray.push_back(nextWord);
                nextWord.clear();
            }

            startIndex = endIndex + 1;
        }
        endIndex++;
    }

    return wordArray;
}

int main()
{
    string input = "hello,there,Good,mornning!";

    return 0;
}