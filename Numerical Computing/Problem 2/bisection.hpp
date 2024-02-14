class BisectionMethod
{
    double a,b,delta;//private
    public:
        BisectionMethod(double);
        void get_interval(double,double);
        double f(double);
        void bisection();
};
