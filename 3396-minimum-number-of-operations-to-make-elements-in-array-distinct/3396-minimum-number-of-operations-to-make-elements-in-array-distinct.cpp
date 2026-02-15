class Solution {
public:
    bool freq_count(list<int> myList){

        map<int,int> freq;
        int count = 0;

        for(int x:myList){
            freq[x]++;
        }

        for(int x:myList){
            if(freq[x]!=1){
                return false;
            }else{
                count++;
            }
        }

        if(myList.size()==count){
            return true;
        }

        return {};
    }
    list<int> popOperation(list<int> myList){

        int t = 3;

        while(t-- && !myList.empty()){
            myList.pop_front();
        }

        return myList;

    }
    int minimumOperations(vector<int>& nums) {

        int operations = 0;

        list<int> myList;

        for(int i=0;i<nums.size();i++){
            myList.push_back(nums.at(i));
        }

        if(freq_count(myList)==true){
            return 0;
        }else{

            while(freq_count(myList)==false){

                myList = popOperation(myList);

                operations++;
            }

            return operations;

        }

        return {};

    }
};