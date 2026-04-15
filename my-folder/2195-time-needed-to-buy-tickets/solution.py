
class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        # BRUTE FORCE
        # time_e = 0
        # while True:
        #     for t in range(len(tickets)):
        #         if tickets[t] >0: 
        #             time_e +=1
        #         tickets[t]-=1
        #         if t==k:
        #             if tickets[t]==0:
        #                 return time_e
        

        #MATH SOLUTION
        time = 0
        n = len(tickets)

        for i in range(n):
            if i <= k:
                time += min(tickets[i], tickets[k])
            else:
                time += min(tickets[i], tickets[k] - 1)

        return time

        

