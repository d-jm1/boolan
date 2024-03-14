bool canCompose(string newspaper, string message)
{
  unordered_map<char, int> hashMap;
  int i;
  if (newspaper.length() < message.length()) return false;
  for(i:newspaper)
    hashMap[i]++;
  for(i:message)
  {
    if(hashMap.count(i) == 0) return false;
    if(--hashMap[i] < 0) return false;
  }
  return true;
}
