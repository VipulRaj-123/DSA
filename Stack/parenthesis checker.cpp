/* Parenthesis Checker 

Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

Example 1:

Input:
{([])}
Output: 
true
Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balaced pairs, with 0 number of 
unbalanced bracket.
Example 2:

Input: 
()
Output: 
true
Explanation: 
(). Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.
Example 3:

Input: 
([]
Output: 
false
Explanation: 
([]. Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.
Your Task:
This is a function problem. You only need to complete the function ispar() that takes a string as a parameter and returns a boolean value true if brackets are balanced else returns false. The printing is done automatically by the driver code.

Expected Time Complexity: O(|x|)
Expected Auixilliary Space: O(|x|) */

 bool ispar(string s)
    {
        int n=s.size(),i;
        stack<char>st;
        for(i=0;i<n;i++){
            if((s[i]==']'||s[i]==')'||s[i]=='}')&&st.empty())
             return false;
            else if(s[i]=='['||s[i]=='{'||s[i]=='(')
             st.push(s[i]);
            if(s[i]==']'){
                if(st.top()!='[')
                 return false;
                else
                 st.pop();
            } 
            else if(s[i]=='}'){
                if(st.top()!='{')
                 return false;
                else
                 st.pop();
            } 
            else if(s[i]==')'){
                if(st.top()!='(')
                 return false;
                else
                 st.pop();
            }
        }
        if(st.empty())
        return true;
        return false;
    }
