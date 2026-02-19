class Solution
{
public:
    int addDigits(int num)
    {

        int sum = 0;

        while (num != 0)
        {

            sum = num % 10 + sum;
            num = num / 10;
        }

        int x = 0;
        int num2 = -1;
        if (sum <= 9)
        {
            num2 = sum;
        }
        else
        {
            while (sum != 0)
            {

                x = sum % 10 + x;
                sum = sum / 10;
            }
            num2 = x;
        }

        int x2 = 0;
        if (x > 9)
        {
            while (x != 0)
            {

                x2 = x % 10 + x2;
                x = x / 10;
            }
            num2 = x2;
        }

        return num2;
    }
};