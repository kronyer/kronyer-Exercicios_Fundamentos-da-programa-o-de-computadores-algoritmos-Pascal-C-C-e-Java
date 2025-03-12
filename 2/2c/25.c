int main(int argc, char const *argv[])
{
    double extra_hours, absentee_hours;

    scanf("%lf", &extra_hours);
    scanf("%lf", &absentee_hours);

    double liq_minutes = (extra_hours - (2/3 * absentee_hours)) * 60;
    double prize =0;

    if (liq_minutes >= 2400)
    {
        prize = 500;
    } else if (liq_minutes > 1800)
    {
        prize = 400;
    } else if (liq_minutes >= 1200)
    {
        prize = 300;
    } else if (liq_minutes >= 600)
    {
        prize = 200;
    } else
    {
        prize = 100;
    }

    return 0;
}
