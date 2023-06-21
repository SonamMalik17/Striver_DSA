#include<bits/stdc++.h>
using namespace std;


// C++ STL is divided into 4 categories namely : Algorithms,Containers,Functions,Iterators
// Before learning about 'containers' we must understand pairs 

void explainPair()
{
    pair<int,int> p={1,7};
    cout<<"First element of pair : "<<p.first<<endl;
    cout<<"Second element of pair : "<<p.second<<endl;
    // nesting of pairs 
    pair<int, pair<int,int>> pa={1,{2,3}};
    cout<<"First element : "<<pa.first<<endl;
    cout<<"First element of nested (inside) pair : "<<pa.second.first<<endl;
    cout<<"Second element of nested (inside) pair : "<<pa.second.second<<endl;
    pair<int,char> arr[]={{1,'A'},{2,'B'},{3,'C'},{4,'D'},{5,'E'}};
    for(int i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"] : "<<endl;
        cout<<arr[i].first<<endl;
        cout<<arr[i].second<<endl<<endl;
    }
}

// First Container we gonna talk about is vector 
void explainVector()
{
    // In C++, vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.
    // That is, we can change the size of the vector during the execution of a program as per our requirements.
    // vector elements are stored in continguous memory locations


    vector<int> v;
    v.push_back(1);  // v={1}
    v.emplace_back(2);  // v={1,2}

    vector<pair<int,int>> vec;
    vec.push_back({2,3});   // vec={{2,3}}
    vec.emplace_back(3,4);  // vec={{2,3},{3,4}}

    vector<int> v(5,100);  // {100,100,100,100,100}

    vector<int> v(5);     // size of vector is 5

    // Copy 
    vector<int> v1(5,20);  // v1={20,20,20,20,20}
    vector<int> v2(v1);    // v2={20,20,20,20,20}

    vector<int> v3={1,3,6,2,8};  // example vector to understand the concept of iterators

    // Iterators are used to point at the memory addresses of STL containers.
    // begin() :- This function is used to return the beginning position of the container.
    // end() :- This function is used to return the after end position of the container.

    vector<int>::iterator it=v3.begin();  // v3.begin() is contains the memory address of '1'

    it++;  // as 'it' is incremented so now 'it' contains the memory address of '3'  
    cout<<*(it)<<" ";  // '*' is used to access value of the memory address value present in 'it' so here '3' will get printed

    it=it+2;  // 'it' now contains the memeory address of '2'
    cout<<*(it)<<" ";  // 2

    vector<int>::iterator it=v3.end(); // points to memory location next to memory location of the last element 

    // rend() and rbegin() ke liye 'v3' ko phle reverse krdo and mark begin() and end() in this way we get rend() and rbegin()
    vector<int>::iterator it=v3.rend(); // so here rend() points to memory location before '1'
    vector<int>::iterator it=v3.rbegin(); // rend() points to memory location of '8'


    // accessing vector elements 
    vector<int> v4={1,3,6,2,8};  // example vector
    // -> using index
    cout<<v4[0]; // 1
    cout<<v4[3]; // 2
    // -> using at()
    cout<<v4.at(0); // 1
    cout<<v4.at(3); // 2


    // front() -> This function can be used to fetch the first element of a vector container.
    // back() -> This function can be used to fetch the last element of a vector container.
    cout<<v4.back();  // 8
    cout<<v4.front(); // 1


    // iterating over a vector using loops
    for(vector<int>::iterator it=v4.begin(); it!=v4.end;it++)
        cout<<*(it)<<" ";
    // The auto keyword is simply asking the compiler to deduce the type of the variable from the initialization.The auto keyword gets the type from the expression on the right of =
    for(auto it=v4.begin(); it!=v4.end;it++)
        cout<<*(it)<<" ";
    // for-each loop
    for(auto it:v4)   
        cout<<it<<" ";   // here 'it' is containing value not the memory address


    // Deletion
    vector<int> v5={1,3,6,2,8};  // example vector
    v5.erase(v5.begin()+1);  // {1,6,2,8}   
    vector<int> v6={1,3,6,2,8,9,12,4};  // example vector
    v6.erase(v6.begin()+2, v6.begin()+4);  // {1,3,8,9,12,4}  [start,end)


    // Insertion
    vector<int> v7(2,100);  // v7={100,100}  // example vector
    v7.insert(v7.begin(),300);  // v7={300,100,100}
    v7.insert(v7.begin()+1,2,10);  // v7={300,10,10,100,100}
    vector<int> copy(2,50); // {50,50}
    v7.insert(v7.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}
    // Explanation : This line inserts the elements from the copy vector into the v7 vector, before its beginning. The insert function takes three arguments: the position to insert at (in this case, v7.begin() represents the beginning), the beginning iterator of the range to insert (copy.begin()), and the end iterator of the range to insert (copy.end()).The elements from copy [50, 50] are inserted at the beginning of v7.


    vector<int> v8={1,4,5,7,8,2,3};  // example vector
    cout<<v8.size();  // 7
    v8.pop_back();  // it pops out last element so 'v8' after pop_back() -> {1,4,5,7,8,2}
    // pop_back() : The pop_back() function in C++ does not return any value. It is a void function, meaning it doesn't have a return type.The purpose of pop_back() is to remove the last element from the vector, reducing its size by one. 

    // swapping
    vector<int> v9={10,20};  // example vector
    vector<int> v10={30,40};  // example vector
    v9.swap(v10);   // v9={30,40}  and v10={10,20}


    vector<int> v11={10,20};  // example vector
    v11.clear();   // erases the entire vector
    cout<<v11.empty();   
    // empty() : It is used to check whether the vector is empty or not. The function returns a boolean value indicating whether the vector contains any elements ('true' if empty, 'false' otherwise).The values 'true' and 'false' correspond to the boolean values of '1' and '0', respectively. So when you use the empty() function on a vector, it will evaluate to '1' if the vector is empty, and '0' if it is not empty.
}


int main()
{
    // explainPair();
    explainVector();
    return 0;
}