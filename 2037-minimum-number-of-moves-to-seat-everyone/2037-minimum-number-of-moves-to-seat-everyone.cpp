class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        int result = 0;

        sort(seats.begin(),seats.end());

        sort(students.begin(),students.end());

        for(int i=0;i<seats.size();i++){
            result = result + abs(seats.at(i)-students.at(i));
        }

        return result;
    }
};