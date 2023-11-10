// #include <iostream>
// #include<stack>
// #include<string>
// using namespace std;

// bool  checkRedundant(string &str){
//     stack<char> st;

//     for(int i = 0; i < str.length(); i++){
//         char ch  = str[i];

//         if(ch == '(' || ch== '+' || ch== '*' || ch== '/'){
//             st.push(ch);
//         }
//         else if(ch == ')') {
//             int operatorCount = 0;
//             while(!st.empty() && st.top()!='('){
//                 char temp = st.top();
//                 if(temp == '+' || temp== '-' || temp== '*' || temp== '/'){
//                     operatorCount++;
//                 }
//                 st.pop();
//             }
//             // yaha pe tabhi pahachoge jab 
//             //aapke stack k top par ek opening bracket hoga
//             st.pop(); 

//             if(operatorCount == 0){
//                 return true;
//             }

//         }
//     }
//     // agar mein yaha tak pahacha hun
//     //it means ki   har ek bracket k pair k beech me ek operator pakka mila hoga
//     return false;

// }

// int main(){
//     string str = "((a+b) * (c+d))";
//     bool ans = checkRedundant(str);

//     if(ans == true){
//         cout << "Redundant brackets Present" << endl;
//     }
//     else{
//         cout << "Redundant brackets not Present" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkRedundant(const string &str) {
    stack<char> st;

    for (char ch : str) {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else if (ch == ')') {
            bool operatorFound = false;
            while (!st.empty() && st.top() != '(') {
                char temp = st.top();
                if (temp == '+' || temp == '-' || temp == '*' || temp == '/') {
                    operatorFound = true;
                }
                st.pop();
            }
            st.pop(); // Pop '('

            if (!operatorFound) {
                return true; // Redundant brackets found
            }
        }
    }

    return false; // No redundant brackets found
}

int main() {
    string str = "((a+b) * (c+d))";
    bool ans = checkRedundant(str);

    if (ans) {
        cout << "Redundant brackets Present" << endl;
    } else {
        cout << "Redundant brackets not Present" << endl;
    }

    return 0;
}
