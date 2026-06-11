#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(){
    stack<int> st;

    st.push(3);
    st.push(1);

    int a=st.top(); st.pop();
    int b=st.top(); st.pop();
    st.push(b+a);

    st.push(2);

    a=st.top(); st.pop();
    b=st.top(); st.pop();
    st.push(pow(b,a));

    st.push(7);
    st.push(4);

    a=st.top(); st.pop();
    b=st.top(); st.pop();
    st.push(b-a);

    st.push(2);

    a=st.top(); st.pop();
    b=st.top(); st.pop();
    st.push(b*a);

    a=st.top(); st.pop();
    b=st.top(); st.pop();
    st.push(b+a);

    st.push(5);

    a=st.top(); st.pop();
    b=st.top(); st.pop();
    st.push(b-a);

    cout<<"Result = "<<st.top();
}