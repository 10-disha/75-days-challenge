class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        // store whole size in n
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            { // if digit is anything except 9
                digits[i] += 1;
                return digits;
            }

            else
            { // if digit is 9
                digits[i] = 0;
            }
        }

        // if the program runs to this point, each 9 is now a 0.
        // to get a correct solution, we need to add one more element with
        // a value of zero AND set digits[0] to 1 (in the most significant position)
        // to account for the carry digit. //if u reach here than

        // yeh 0 ko last mei push karo as we need one extra 0
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};