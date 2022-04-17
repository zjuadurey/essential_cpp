#include"2_2.h"
using std::cin; using std::ofstream;

int main()
{
    int num;
    vector<int> vec;
    cin >> num;
    pentagonal(vec, num);
    display( vec );
    ofstream ofs("data.txt");
    display( vec, ofs );
    return 0;
}

inline bool is_num_ok( int num )
{
    if ( num <= 0 || num > 64 )
        return false;
    return true;
}

bool pentagonal( vector<int> & vec, int num )
{
    if ( !is_num_ok( num ) )
    {
        cout << "invalid num: " << num << '\n';
        return false;
    }
    for (int ix = 1; ix <= num; ix++ )
    {
        vec.push_back( int( ix*(3*ix-1)/2 ) );
    }
    return true;
}
void display( vector<int> & vec, ostream &os )
{
    for ( int ix = 0; ix < vec.size(); ix++ )
    {
        os << vec[ix];
        if ( ix != vec.size() )
            os << " ";
    }
    os << "\n";
}
