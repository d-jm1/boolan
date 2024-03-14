bool anagram(string s, string t)
{
  if(s.empyt() || t.empty() return false;
  if(s.size() != t.size() return false;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  if(s==t) return true;
  return false;
}
