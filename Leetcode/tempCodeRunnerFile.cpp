string ans = "";

    for (int i = 0, j = 0; i < word1.size() || j < word2.size(); i++, j++)
    {

        ans = ans + word1[i] + word2[j];
    }