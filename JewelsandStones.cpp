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
/*
To solve the problem we create a counter to keep track of all the
so everytime we have a math in increases.
We have to know to know how big the size of each string is to 
set the limits for each for loop.
Create Arrays that are equal to the size of each string to since we 
want to compare everysingle character.
We copy each string into its corresponding array. 
The first foor loop is to traverse through every element in s array
the second loop will compare each element in s array to the elements 
in J array. If they match we will increase counter by one. 

*/