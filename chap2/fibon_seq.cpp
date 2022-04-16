#include<iostream>
#include"fibon_seq.h"
using std::cout; using std::endl; using std::cerr;

int main(){
    int elem = 0;
    int pos = 10;
    fibon_elem(pos, elem);
    cout << "elem: " << elem << " pos: " << pos << endl;
    return 0;
}

const vector<int>* fibon_seq( int size ){
    static int num = 1;
    cout << "fibon_seq: running " << num++ << endl;
    const int max_size = 1024;
    static vector<int> elems;

    if ( !is_size_ok(size) )
        return 0;
    for (int ix = elems.size(); ix < size; ix++){
        if (ix == 0 || ix == 1){
            elems.push_back(1);
            cout << ix+1 << " 1" << " is done\n";
        }   else{
            elems.push_back(elems[ix-2] + elems[ix-1]);
            cout << ix+1 << " " << elems[ix] << " is done\n";
        } 
    }
    return &elems;
}

bool is_size_ok( int size )
{
    const int max_size = 1024;
    if ( size <= 0 || size > max_size)
    {
        cerr << "fibon_seq(): invalid size: " << size << endl;
        return false;
    }
    return true;
}

template <typename elemType>
void display_message( const string &msg, const vector<elemType> &vec)
{
    cout << msg;
    for ( int ix = 0; ix < vec.size(); ix++ )
    {
        elemType t = vec[ix];
        cout << t << ' ';
    }
}