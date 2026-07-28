class Arge
{
public:
    static int nbYear(int p0, double percent, int aug, int p)
    {
        int p_cur = p0;
        int years = 0;

        while (p_cur <= p)
        {
            p_cur = p0 * (1 + percent / 100) + aug;
            p0=p_cur;
            years++;
        }
        return years;
    }
};