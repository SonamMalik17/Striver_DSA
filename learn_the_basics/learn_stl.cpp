#include<bits/stdc++.h>
using namespace std;


// C++ STL is divided into 4 categories namely : Algorithms,Containers,Functions,Iterators
// Before learning about 'containers' we must understand pairs 



// Containers and Iterators 

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
    // dynamic array 
    
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
    for(vector<int>::iterator it=v4.begin(); it!=v4.end();it++)
        cout<<*(it)<<" ";
    // The auto keyword is simply asking the compiler to deduce the type of the variable from the initialization.The auto keyword gets the type from the expression on the right of =
    for(auto it=v4.begin(); it!=v4.end();it++)
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

void explainList()
{
    // list me front operations bhi perform ki ja skti h unlike vectors jha only 'end' me operations perform ki ja skti thi not at 'start' or 'front'.
    // Allocates memory for each element individually.I t doesn't allocate a contiguous block of memory to store elements.Does not support direct random access using the [] operator.i.e.Elements can't be accessed efficiently using their indices.

    list<int> ls={1,3,7,8};   // example list
    ls.push_back(2);   // ls={1, 3, 7, 8, 2}
    ls.emplace_back(4);   // ls={1, 3, 7, 8, 2, 4}
    ls.push_front(5);    // ls={5, 1, 3, 7, 8, 2, 4}
    ls.emplace_front();   // ls={0, 5, 1, 3, 7, 8, 2, 4}
    // The emplace_front function constructs an element in place at the beginning of the list. It does not provide any arguments in this case, so it constructs a default-constructed int at the front of the list. After this line, the ls list becomes {0, 5, 1, 3, 7, 8, 2, 4}. Here, 0 represents the default-constructed int.Overall, the resulting ls list would be {0, 5, 1, 3, 7, 8, 2, 4} after executing the given code.

    // rest functions same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap

}

void explainDeque()
{
    // Deque : Double-ended queue
    // Supports direct random access using the [] operator. Elements can be accessed efficiently using their indices.

    // Difference between list and Deque : 
    // list: Provides efficient insertion and removal operations anywhere in the list. No reallocation of memory is needed.
    // deque: Provides efficient insertion and removal operations at both ends (front and back). Insertion/removal at the beginning or middle of the deque is less efficient compared to std::list.

    deque<int> dq={1,3,7,8};
    dq.push_back(2);    // {1,3,7,8,2}
    dq.emplace_back(5);  // {1,3,7,8,2,5}
    dq.push_front(4);    // {4,1,3,7,8,2,5}
    dq.emplace_front(9);   // {9,4,1,3,7,8,2,5}
    dq.pop_back();     // {9,4,1,3,7,8,2}
    dq.pop_front();   // {4,1,3,7,8,2}
    dq.back();    // 2
    dq.front();   // 4

    // rest functions same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap
}

void explainStack()
{
    // Stack follows the LIFO (Last-In-First-Out) principle, where the most recently added element is the first one to be removed.
    // Major 3 operations in Stack are : push,pop,top and all have time complexity O(1)

    stack<int> st={6,7,8};
    st.push(1);       // {6,7,8,1}
    st.push(2);       // {6,7,8,1,2}
    st.push(3);       // {6,7,8,1,2,3}
    st.emplace(4);    // {6,7,8,1,2,3,4}
    cout<<st.top();   // 4
    st.pop();         // pop() member function does not return any value. It is a void function that removes the top element from the stack.
    cout<<st.top();  // 3
    cout<<st.size(); // 6
    cout<<st.empty();  // 0

    stack<int> st1={10,20};
    stack<int> st2={30,40};
    st1.swap(st2);   // now st1={30,40} and st2={10,20}
}

void explainQueue()
{
    // It follows the First-In-First-Out (FIFO) principle, where elements are inserted at the back and removed from the front.
    // Major 3 operations in Stack are : push,pop and all have time complexity O(1)
    queue<int> q={6,7,8};
    q.push(1);            // {6,7,8,1}
    q.push(2);            // {6,7,8,1,2}
    q.emplace(3);         // {6,7,8,1,2,3}
    q.back+=7;            // {6,7,8,1,2,10}
    cout<<q.back();       // 10
    cout<<q.front();      // 6
    q.pop();              // it pops from the front
    cout<<q.front();      // 7

    // size,swap,empty same as stack
}

void explainPQ()
{
    // A priority queue is a container in C++ STL that provides a way to store elements based on their priorities. The elements with higher priority are placed at the front of the queue and are dequeued first.  
    // Tree data structure is maintained
    // When you insert elements into a priority queue using push() or emplace(), they are automatically placed in the appropriate position to maintain the sorted order. The element with the highest priority remains at the top, and when you access the top element using top(), you get the element with the highest priority.
    // push and pop ki Time Complexity : O(logN)
    // top ki time complexity : O(1)
    // Max Heap
    // priority queue that stores maximum element at the top

    priority_queue<int> pq1;
    pq1.push(5);              // {5}      
    pq1.push(1);              // {5,1}
    pq1.push(6);              // {6,5,1}
    pq1.push(2);              // {6,5,2,1}
    pq1.emplace(3);           // {6,5,3,2,1}
    cout<<pq1.top();          // 6
    pq1.pop();                // it pops '6'
    cout<<pq1.top();          // 5

    // size,swap,empty same as others

    // Min Heap
    // priority queue that stores minimum element at the top
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(5);             // {5}
    pq2.push(2);             // {2,5}
    pq2.push(8);             // {2,5,8}
    pq2.emplace(10);         // {2,5,8,10}
    pq2.emplace(7);          // {2,5,7,8,10}
    cout<<pq2.top();         // 2
}

void explainSet()
{
    // (sorted) + (unique)
    // Tree is maintained
    // everything happens in a O(logN)
    set<int> st;
    st.insert(1);   // {1}
    st.emplace(2);  // {1,2}
    st.insert(2);   // {1,2}
    st.insert(4);   // {1,2,4}
    st.insert(3);   // {1,2,3,4}
    st.insert(5);   // {1,2,3,4,5}
    // Functionality of insert in vector can be used also, that only increases efficiency

    int cnt=st.count(1);   // count(num): it counts the no. of occureneces of 'num' and in case of set it will be always '1' for any 'num' that is present in the set or '0' if the element is not present in the set, as a set only store unique elements

    // {1,2,3,4,5}
    auto it=st.find(3);  // returns an iterator that points to '3'
    auto it=st.find(6);  // as '6' is not present in 'st' so 'st.end()' is returned
    
    st.erase(5);  // erases 5 // takes logarithmic time

    auto it=st.find(3);
    st.erase(it);       // it takes constant time

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);  // after erase {1,4,5} [start,end)

    // lower_bound() and upper_bound() function works in the same way as in vector it does 
    auto it3=st.lower_bound(2);
    auto it4=st.upper_bound(3);
    // lower_bound(): This function returns an iterator pointing to the first element in the set that is greater than or equal to the provided value.
    // upper_bound(): This function returns an iterator pointing to the first element in the set that is greater than the provided value.


    // begin(),end(),rbegin(),rend(),clear(),empty(),size(),swap() same as above 
}

void explainMultiSet()
{
    // (sorted) + (duplicacy allowed)
    multiset<int> ms;
    ms.insert(1);   // {1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1}

    int cnt=ms.count(1); 
    ms.erase(1);    // all 1's erased
    ms.erase(ms.find(1));   // only a single one erased
    ms.erase(ms.find(1),ms.find(1)+2);    // first two ones get erased [start,end)

    //rest all functions same as set
}

void explainUSet()
{
    // (not sorted) + (unique)
    unordered_set<int> st;

    // lower_bound() and upper_bound() functions does not works, rest all functions are same as above, it doesn't stores in a particular order, it has a better complexity i.e. O(1) than set in most cases, except some cases when collision happens i.e. in worst case it has a time complexity of O(N)
}

void explainMap()
{
    // Ordered Container: map is an ordered associative container that stores key-value pairs. The elements are stored in a specific order based on the key, allowing efficient lookup, insertion, and deletion operations.
    // Key-Value Pairs: Each element in a map is a key-value pair, where the key is unique and used for indexing and organizing the elements, and the value represents the associated data.
    // Time Complexity : O(logN)

    map<int,int> mp1;      // phli Key and dusri value h  // type1
    map<int,pair<int,int>> mpp;                           // type2
    map<pair<int,int>,int> mpp;                           // type3

    mpp[1]=2 ;     // it means at key='1', value='2'      // type1
    mpp.emplace({3,1});                                   // type1
    mpp.insert({2,4});                                    // type1
    mpp[{2,3}]=10;    // it means at key={2,3} , value=10        // type3

    // after all these insertions in type1 mpp looks like this :
    // mpp={ {1,2}, {2,4}, {3,1} }

    for(auto it:mpp)
        cout<<it.first<<" "<<it.second<<endl;    

    cout<<mpp[1];
    cout<<mpp[5];

    auto it=mpp.find(3);
    cout<<*(it).second;

    auto it=mpp.find(5);

    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(3);

    // erase,swap,size,empty are same as above
}

void explainMultiMap()
{
    // everything same as map, only it can store multiple keys
    // only 'mpp[key]' cannot be used here
}

void explainUnorderedMap()
{
    // Keys will be unique but it does not maintain a specific order of the elements.
    // Time Complexity in most cases : O(1) and in worst case : O(N) 
    unordered_map<int,int> mp={{1,2},{1,4}};
    for(auto it:mp)
    {
        cout<<mp.first<<mp.second;
    }
}




// Algorithms

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second)
        return true;
    else if(p1.second==p2.second)
    {
        if(p1.first>p2.first)
            return true;
    }
    return false;
}

void explainExtra()
{
    // Here 'a' is an array and 'a' points to first element of array and 'a+n' is same as end() of vectors i.e. it points to memory location next to last element of array 
    // 'a' : 'start iterator' and 'a+n' : 'end iterator' 
    sort(a,a+n);    // default sorting order is ascending
    sort(a,a+n,greater<>());   // here 'greater<>() is an inbuilt comparator which sorts in descending order
    sort(a+2,a+4);  // sort only a part of array [start,end)   

    // Here 'v' is a vector
    sort(v.begin(),v.end());   

    // sorting in our own way : sort it according to second element (in increasing order) and if second element is same, then sort it according to first element in decreasing order
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
     sort(a,a+n,comp);  // here 'comp' is a self-written comparator // {{4,1},{2,1},{1,2}}

    int num=7;
    int cnt=__builtin_popcount(num);     // give the no. of set bits, like convert '7' to binary so no. of 1's will be '3'

    long long num=24354656547757;
    int cnt=__builtin_popcountll(num);

    string s="123";
    sort(s.begin(),s.end());  // always sort the string first to get all the poosible permutations otherwise it will give only those strings which are possible after the given string following the dictionary order 
    do
    {
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));    // dictionary order and if there are no more permutations, it returns false and we exit the while loop

    int maxi=*max_element(a,a+n);
    int mini=*min_element(a,a+n);
}
int main()
{
    // Containers and Iterators 

    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque()
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    // explainMap();
    // explainMultiMap();
    explainUnorderedMap();


    // Algorithms

    // explainExtra();
    return 0;
}