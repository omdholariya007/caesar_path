class Solution {
public:
    int minimumBuckets(string hamsters) {
        int count=0;
        if(hamsters.size() == 2){
            if(hamsters[0] == 'H' && hamsters[1] == 'H')return -1;
            if(hamsters[0] == '.' && hamsters[1] == '.' ) return 0;
        }
        for(int i =0 ; i < hamsters.size() ;i++){
            if(i != 0 && i!=hamsters.size()-1 && hamsters[i]=='H'){
                if(hamsters[i-1] == 'b')continue;
                if(hamsters[i+1] == '.'){
                    hamsters[i+1]='b';
                    count++;
                }
                else if (hamsters[i-1] =='.'){
                    hamsters[i-1] = 'b';
                    count++;
                }
                else if(hamsters[i-1] =='H' && hamsters[i+1]=='H')return -1;

            }
            else if(i == 0 && hamsters[i] == 'H'){
                if(hamsters[i+1] == '.'){
                    hamsters[i+1]='b';
                    count++;
                }
                else return -1;
            }
            else if(i == hamsters.size()-1 && hamsters[i]=='H'){
                if(hamsters[i-1] == 'b')return count;
                if (hamsters[i-1] =='.'){
                    hamsters[i-1] = 'b';
                    count++;
                }
                else return -1;
            }
        }
        return count;
    }
};