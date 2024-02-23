class Solution
{
    public:
        int numJewelsInStones(string jewels, string stones)
        {
            int totalCount = 0;

            for (char ch: jewels)
            {
                size_t found = stones.find(ch);
                int count = 0;
                int pos = 0;

                while (found != std::string::npos)
                {
                    count++;
                    pos = found + 1;
                    found = stones.find(ch, pos);
                }

                totalCount += count;
            }

            return totalCount;
        }
};