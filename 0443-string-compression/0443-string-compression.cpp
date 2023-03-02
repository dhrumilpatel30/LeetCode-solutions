class Solution {
public:
    int compress(vector<char>& chars) {
        int i=1,ans=0;
        char last_char=chars[0];
        int last_len=1;
        for(;i<chars.size();i++){
            // cout<<chars[i]<<"  "<<last_char<<last_len<<"   \n";
            if(last_char == chars[i]){
                last_len++;
            }
            else{
                chars[ans++] = last_char;
                if(last_len != 1){
                    if(last_len > 999){
                        chars[ans++] = last_len/1000+ 48;
                        last_len = last_len%1000;

                        chars[ans++] = last_len/100 + 48;
                        last_len = last_len%100;

                        chars[ans++] = last_len/10 + 48;
                        last_len = last_len%10;

                        chars[ans++]= last_len + 48;
                    }
                    else if(last_len > 99){
                        chars[ans++] = last_len/100 + 48;
                        last_len = last_len%100;

                        chars[ans++] = last_len/10 + 48;
                        last_len = last_len%10;

                        chars[ans++]= last_len + 48;
                    }
                    else if(last_len > 9){
                        chars[ans++] = last_len/10 + 48;
                        last_len = last_len%10;

                        chars[ans++]= last_len + 48;
                    }
                    else{
                        chars[ans++]= last_len + 48;
                    }
                }
                last_char = chars[i];
                last_len=1;
            }
        }
        chars[ans++] = last_char;
        if(last_len != 1){
            if(last_len > 999){
                chars[ans++] = last_len/1000+ 48;
                last_len = last_len%1000;
                
                chars[ans++] = last_len/100 + 48;
                last_len = last_len%100;
                
                chars[ans++] = last_len/10 + 48;
                last_len = last_len%10;
                
                chars[ans++]= last_len + 48;
            }
            else if(last_len > 99){
                chars[ans++] = last_len/100 + 48;
                last_len = last_len%100;
                
                chars[ans++] = last_len/10 + 48;
                last_len = last_len%10;
                
                chars[ans++]= last_len + 48;
            }
            else if(last_len > 9){
                chars[ans++] = last_len/10 + 48;
                last_len = last_len%10;
                
                chars[ans++]= last_len + 48;
            }
            else{
                    chars[ans++]= last_len + 48;
            }
        }
        return ans;
    }
};