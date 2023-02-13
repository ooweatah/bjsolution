#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    for(auto i : dic){
        map<char, int> mp;
        for(int j=0;j<i.size();j++){
            for(auto k : spell){
                if(i[j]==k[0]){
                    mp[i[j]]++;
                }
            }
        }
        if(spell.size()==mp.size()){
            return 1;
        }
    }
           return 2;
}