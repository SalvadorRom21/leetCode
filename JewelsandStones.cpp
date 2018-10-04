/*
You're given strings J representing the types of stones that are jewels, 
and S representing the stones you have.  
Each character in S is a type of stone you have. 
You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/

//S and J will consist of letters and have length at most 50.
//The characters in J are distinct.


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