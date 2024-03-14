bool isPermutation(string stringA, string stringB)
{
    if(stringA.length() != stringB.length()) return false;
    unordered_map<char,int> hashMapA;
    unordered_map<char,int> hashMapB;
    for(int i = 0; i < stringA.length(); i++)
    {
        hashMapA[stringA[i]]++;
        hashMapB[stringB[i]]++;
    }
    if(hashMapA.size()!=hashMapB.size()) return false;
    for(auto i : hashMapA)
        if(i.second != hashMapB[i.first]) return false;
    return true;
}
