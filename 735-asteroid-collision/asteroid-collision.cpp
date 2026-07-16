class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // Start from index 1 because index 0 has nothing to its left to collide with
        int i = 1; 
        
        while (i < asteroids.size()) {
            // A collision ONLY happens if left is moving right (+) and right is moving left (-)
            if (i > 0 && asteroids[i - 1] > 0 && asteroids[i] < 0) {
                
                // Case 1: Both are equal size -> Both blow up
                if (asteroids[i - 1] == abs(asteroids[i])) {
                    // Erase the right one first, then the left one
                    asteroids.erase(asteroids.begin() + i);
                    asteroids.erase(asteroids.begin() + (i - 1));
                    // Move back by 1 because the current elements are gone
                    i--; 
                }
                // Case 2: Left asteroid is bigger -> Right one blows up
                else if (asteroids[i - 1] > abs(asteroids[i])) {
                    asteroids.erase(asteroids.begin() + i);
                    // Do not increment 'i' because we need to check the remaining 
                    // elements against the original left asteroid in the next loop
                }
                // Case 3: Right asteroid is bigger -> Left one blows up
                else {
                    asteroids.erase(asteroids.begin() + (i - 1));
                    // Move back by 1 to check if this surviving right asteroid 
                    // collides with whatever is now to its new left (handles chain reactions)
                    i--; 
                }
            } 
            else {
                // No collision condition met, safely move to the next pair
                i++;
            }
        }
        return asteroids;
    }
};