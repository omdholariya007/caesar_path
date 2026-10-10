class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    if(hand.size()%groupSize != 0)return false;
    

    map<int,int>mp;
    for(int i : hand ){
        mp[i]++;
    }
    auto i = mp.begin() ;
    int mn = i->first;
    for(; i != mp.end() && i->second > 0 ; ){
        //if(!mp.contains(m))return 0;
         mn = min(mn,i->first);
        i = mp.find(mn);
        mn = INT_MAX;
        int flow = i->first;

        for(int j = 0 ; j <groupSize ;j++){
            if(!mp.contains(flow) || mp[flow]<=0) return 0;
            if(mp[flow]>1)mn = min(flow,mn);
            mp[flow]--;
            i = mp.find(flow);   
            flow++;
        }
        if (mn != INT_MAX)
                i = mp.find(mn);
            else {
                i = mp.begin();
                while (i != mp.end() && i->second == 0)
                    i++;
            }
      
    }
    return 1;
    }
};