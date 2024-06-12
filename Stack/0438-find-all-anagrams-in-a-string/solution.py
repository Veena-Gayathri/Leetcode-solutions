class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        dict1= defaultdict(int)
        for i in p:
            dict1[i]+=1
        n=len(s)
        dict2=defaultdict(int)
        p1=0
        p2=len(p)-1
        ans =[]
        while p2<n-1 and p1==p2-len(p)+1:
            if p1==0:
                for i in range(p1,p2+1):
                    dict2[s[i]]+=1
                if dict2==dict1:
                    ans.append(p1)
            else:
                dict2[s[p1]]-=1
                dict2[s[p2+1]]+=1
                if dict2==dict1:
                    ans.append(p1+1)
                    print(dict1)
                    print(dict2)
            p1+=1
            p2+=1
        return ans

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        n1,n2=len(s),len(p)
        d1=Counter(p)
        d2=Counter(s[:n2-1])
        ans=[]
        j=0
        for i in range(n2-1,n1):
            d2[s[i]]+=1
            if d1==d2:
                ans.append(j)
            d2[s[j]]-=1
            if d2[s[j]]==0:
                del d2[s[j]]
            j+=1
        return ans
