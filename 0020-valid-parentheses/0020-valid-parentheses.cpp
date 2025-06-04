class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            int element=s[i];
            if(element=='('|| element=='{'|| element=='['){
                st.push(element);
            }
            else{
                //this was a closing bracket
                //check the size if st.size()==0 it means no opening bracket
                if(st.size()==0){
                    return false;
                }
                char top=st.top();
                
                if((top=='(' && s[i]!=')') ||
               (top=='{' && s[i]!='}')|| (top=='[' && s[i]!=']')  ){
                return false;
               }
                else{
                    st.pop();
                }
               
            }
        }
            return st.empty();
           
        }
    
};