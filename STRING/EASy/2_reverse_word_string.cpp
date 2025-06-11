// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// int main()
// {
//     string s="TUF is great for interview preparation";
//     cout<<"Before reversing words: "<<endl;
//     cout<<s<<endl;
    
//     int n = s.size();
//     stack<string> st;
//     string temp= "";
//     for(int i=0;i<n;i++){
//         if(s[i] == ' ' ){
//             st.push(temp);
//         }
//         else{
//             temp=temp+s[i];
//         }
//     }
//     string ans;
//     while(st.size()!=1){
//         ans+=st.top()+" ";
//         st.pop();ans+=st.top()+" ";
//         st.pop();
//     }
//     ans+=st.top();
//      cout<<"After reversing words: "<<endl;
//     cout<<ans;
    
//     return 0;
    
// }




// Appraoch 2

#include <iostream>
#include <string>
#include <stack>
using namespace std;
string result(string s)
{
    string ans="";
    string temp="";
    int left=0;
    int right=s.length()-1;




    while(left<=right){
        if(s[left]!=' '){
            temp= temp + s[left];
           
        }
        else if(s[left]==' '){
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }

    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans; 
     
}

int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st);
    return 0;
}