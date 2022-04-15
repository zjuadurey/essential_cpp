#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
void Swap(int &, int &);
void display(const vector<int> &, ostream & = cout);
void bubble_sort( vector<int> &, ofstream * = 0);
int main(){
    int ia[8] = {8, 32, 3, 13, 1, 21, 5, 2};
    vector<int> vec(ia, ia + 8);

    bubble_sort( vec );
    display( vec );

    ofstream ofil("data.txt");
    bubble_sort( vec, &ofil );
    display( vec, ofil );
    return 0;
}

void display(const vector<int> & vec, ostream &os){
    for (int ix = 0; ix < vec.size(); ix++)
        os << vec[ix] << ' ';
    os << "\n";
} 

void Swap(int &val_1, int &val_2){
    int temp = val_1;
    val_1 = val_2;
    val_2 = temp;
}

void bubble_sort( vector<int> &vec, ofstream *ofil){
    for (int  ix = 0; ix < vec.size(); ix++){
        for (int jx = ix + 1; jx < vec.size(); jx++){
            if (vec[jx] < vec[ix]){
                if (ofil != 0){
                    (*ofil) << "about to call swap! ix: " << ix << " jx: " << jx
                            << "\tswapping: " << vec[ix] << " with " << vec[jx] << endl;
                    Swap(vec[jx], vec[ix]);
                }
            }
        }
    }
}