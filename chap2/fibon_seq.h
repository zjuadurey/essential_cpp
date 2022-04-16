#include<vector>
using std::vector; using std::string; using std::cout;
const vector<int>* fibon_seq( int );
bool is_size_ok( int );
inline bool fibon_elem( int pos, int &elem){
    const vector<int> *pseq = fibon_seq( pos );
    if ( !pseq )
    {
        elem = 0;
        return false;
    } 
    elem = (*pseq)[ pos-1 ];
    cout << "sadsasads " << elem << " pos " << pos << '\n';
    return true;
}
template <typename elemType>
void display_message( const string &, const vector<elemType> &);