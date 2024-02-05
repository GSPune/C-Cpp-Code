class BisectionMethod
{
    double a,b,delta;
    public:
        BisectionMethod(double);
        void get_interval(double,double);
        //void get_tolerance();
        double f(double);
        void bisection();
};
