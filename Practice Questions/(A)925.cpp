/*
A. Recovering a Small String
Nikita had a word consisting of exactly 3 lowercase Latin letters. The letters in the 
Latin alphabet are numbered from 1 to 26, where the letter "a" has the index 1, and the 
letter "z" has the index 26.He encoded this word as the sum of the positions of all the 
characters in the alphabet.

Determine the lexicographically smallest word of 3 letters that could have been encoded.
*/
#include <iostream>
using namespace std;
 
char ch(int c)
{
    return char(c + 96);
}
 
void find_smallest_string(int k)
{
    int i,j,p;
    i = j = p = 0;
    i = ((k / 52) == 0 ? 1:((k % 52) == 0) ? 1 : k % 52);
    k = k - i;
    j = ((k / 26) == 0 ? 1:((k % 26) == 0) ? (k == 26 ? 1 : 26) : k % 26);
    k = k - j;
    p = k;
    cout << ch(i) << ch(j) << ch(p) << endl;
}
 
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        find_smallest_string(arr[i]);
    }
    return 0;
}