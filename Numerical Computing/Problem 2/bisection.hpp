class BisectionMethod
{
    double a,b,delta;
    public:
        BisectionMethod(double);
        void get_interval(double,double);
        double f(double);
        void bisection();
};
