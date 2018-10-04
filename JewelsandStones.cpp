*/

/*

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int counter=0;
        int sSize=S.size();
        int jSize=J.size();
        
        char Sarray[sSize];
        char Jarray[jSize];
        
        strcpy(Sarray,S.c_str());
        strcpy(Jarray,J.c_str());
        
        for(int i =0; i < sSize;i++){
            for(int k=0;k<jSize;k++){
                if(Sarray[i]==Jarray[k]){
                    counter++;
                }
                
            }
            
        }
        return counter;
    }
};