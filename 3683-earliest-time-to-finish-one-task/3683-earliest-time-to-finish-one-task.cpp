class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {

        vector<int> min_finished;

        int n = tasks.size();

        for(int i=0;i<n;i++){
            min_finished.push_back(tasks[i].at(0)+tasks[i].at(1));
        }

        return *min_element(min_finished.begin(),min_finished.end());
    }
};