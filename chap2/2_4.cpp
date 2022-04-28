#include<iostream>
#include"2_4.h"
using std::cout;

int main()
{
    int elem;
    if ( display(64, elem) )
    {
        cout << elem << '\n';
    }
    if ( display(64, elem) )
    {
        cout << elem << '\n';
    }
    return 0;
}

bool check( int pos )
{
    if ( pos <= 0 || pos > 64 )
    {
        cout << "invalid pos: " << pos << '\n';
        return false;
    }
    return true;
}

const vector<int>* pentagonal_series( int pos )
{
    static vector<int> _vec;
    if ( check( pos ) && pos > _vec.size() )
    {
        for ( int ix = _vec.size() + 1; ix <= pos; ix++ )
        {
            _vec.push_back( int( ix*(3*ix-1)/2 ) );
        }
    }
    return &_vec;
}

bool display( int pos, int &elem )
{
    if ( pos <= 0 || pos > 64 )
    {
        cout << "invalid pos: " << pos << '\n';
        elem = 0;
        return false;
    }
    const vector<int> *pent = pentagonal_series(pos);
    elem = (*pent)[pos - 1];
    return true;
}
