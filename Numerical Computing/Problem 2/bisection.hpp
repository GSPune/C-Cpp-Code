class BisectionMethod
{
    double a,b,delta;
    public:
        BisectionMethod(double,double,double);
        //void get_interval();
        //void get_tolerance();
        double function();
        void bisection(double,double,double);
};
