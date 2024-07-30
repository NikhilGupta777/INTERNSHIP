// https://leetcode.com/problems/jewels-and-stones/

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int output = 0;

        int size = stones.size();
        for (int i = 0; i < jewels.size(); i++)
        {
            for (int j = 0; j < stones.size(); j++)
            {
                if (jewels[i] == stones[j])
                {
                    output++;
                }
            }
        }
        return output;
    }
};