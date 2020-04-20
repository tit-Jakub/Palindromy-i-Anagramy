#include <iostream>

using namespace std;

string a, b1, b2;

bool palindrom (string s)
{
    int dl=s.size();
    for (int i=0;i<dl/2;i++)
        if (s[i]!=s[dl-i-1]) return false;
    return true;

}
bool anagram (string s1, string s2)
{
    int dl=s1.size();
    if (dl!=s2.size()) return false;
    else
    {
        int T1[2]={0,0}, T2[2]={0,0};
        for (int i=0;i<dl;i++)
        {
            if (s1[i]=='X') T1[0]++;
            else T1[1]++;
            if (s2[i]=='X') T2[0]++;
            else T2[1]++;
        }
        for (int i=0;i<2;i++)
            if(T1[i]!=T2[i]) return false;

    }
    return true;

}
int main()
{
    cout << "palindrom !!" << endl;
    cout << endl;
    cout << endl;
    cout << "Wprowadz slowo" << endl;
    cin >> a;
    if(palindrom(a)==true) cout << "zgadza sie jest to palindrom" << endl;
    else
        cout << "niestety nie jest palindrom" << endl;
        cout<< endl;
        cout<< endl;
cout<<"teraz anagram !!"<<endl;
cout << endl;
cout << endl;
cout << "Wprowadz pierwszy slowo " << endl;
    cin >> b1;
    cout << "Wprowadz drugie slowo" << endl;
    cin >> b2;
    if (anagram(b1,b2)==true) cout << "zgadza sie jest to anagram" << endl;
    else
        cout << "Niestey nie jest to anagram" << endl;
    return 0;
}




