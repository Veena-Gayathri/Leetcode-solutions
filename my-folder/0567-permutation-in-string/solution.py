class Solution:

    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        
        window = len(s1)
        
        dict1 = [0] * 26
        dict2 = [0] * 26
        
        # Fill dict1 and initial window of dict2
        for i in range(window):
            dict1[ord(s1[i]) - ord('a')] += 1
            dict2[ord(s2[i]) - ord('a')] += 1
        
        # Check first window
        if dict1 == dict2:
            return True
        
        # Slide the window
        for i in range(window, len(s2)):
            # Add new char
            dict2[ord(s2[i]) - ord('a')] += 1
            
            # Remove old char
            dict2[ord(s2[i - window]) - ord('a')] -= 1
            
            # Compare
            if dict1 == dict2:
                return True
        
        return False

