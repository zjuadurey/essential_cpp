#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

template <typename Type>
inline Type max( Type &t1, Type &t2 )
{
    return t1 > t2 ? t1 : t2;
}

template <typename Type>
inline Type max( vector<Type> &vec )
{
    Type max_num = vec[0];
    for (int ix = 0; ix < vec.size(); ix++)
    {
        if (vec[ix] > max_num) max_num = vec[ix];
    }
    return max_num;
}

template <typename Type>
inline Type max(const Type a[], int length)
{
    Type max_num = a[0];
    for (int ix = 0; ix < length; ix++)
    {
        if (a[ix] > max_num)
        {
            max_num = a[ix];
        }
    }
    return max_num;
}

int main(){
    string sarray[] = { "we", "were", "her", "pride", "of", "ten"};
    vector<string> svec(sarray, sarray + 6);
    //string smax = max(max(sarray, 6), max(svec));
    string smax1 = max(sarray, 6);
    cout << smax1 << endl;
    string smax2 = max(svec);
    cout << smax2 << endl;
    string smax3 = max(smax1, smax2);
    cout << smax3 << endl;
    return 0;
}