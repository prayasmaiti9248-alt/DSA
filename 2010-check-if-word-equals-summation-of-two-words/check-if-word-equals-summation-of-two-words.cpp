class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int num1=0,num2=0,sum=0;
        int m=0;
        for(int i=0;i<firstWord.size();i++){
            num1=num1*10+(firstWord[i]-'a');
        }
        for(int i=0;i<secondWord.size();i++){
            num2=num2*10+(secondWord[i]-'a');
        }
        for(int i=0;i<targetWord.size();i++){
            sum=sum*10+(targetWord[i]-'a');
        }
        return num1+num2==sum;
    }
};