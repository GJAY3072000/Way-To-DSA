class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int hours = 0;
        
        int enTotal = 0;
        for(int i = 0; i < energy.size(); i++){
            enTotal += energy[i];
        }
        if(enTotal >= initialEnergy) hours += (enTotal + 1 - initialEnergy);
        
        for(int i = 0; i < experience.size(); i++){
            if(experience[i] >= initialExperience){
                hours += (experience[i]+1 - initialExperience);
                initialExperience += (experience[i]+1 - initialExperience);
            }
            initialExperience += experience[i];
        }
        return hours;
    }
};