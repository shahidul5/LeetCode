class Solution
{
    public:
        int findLeastNumOfUniqueInts(vector<int> &arr, int k)
        {
            unordered_map<int, int> counter;

            for (int &num: arr) counter[num] += 1;

            vector<int> vcounter(counter.size());
            int i = 0;

            for (auto it = counter.begin(); it != counter.end(); it++) vcounter[i++] = it->second;

            sort(vcounter.begin(), vcounter.end());

            for (i = 0; i < vcounter.size() && k > 0;)
            {
                if (k >= vcounter[i])
                {
                    k -= vcounter[i];
                    i++;
                }
                else
                {
                    k = 0;
                }
            }

            return (vcounter.size() - i);
        }
};