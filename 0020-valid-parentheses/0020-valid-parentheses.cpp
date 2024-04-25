class Solution {
public:
    bool isValid(string s) {
        
        std:: stack<char> pointer;
        
        for(char c : s ) {
            
            if( c == '(' || c == '[' || c=='{' ) {
                pointer.push(c);
            } else {
                if(pointer.empty()) return false;
                
                char top = pointer.top();
                if(( c ==')' && top=='(') || ( c ==']' && top=='[') || ( c =='}' && top=='{')){
                    pointer.pop();
                }else{
                    return false;
                }
            }
        }
        return pointer.empty();
    }
};