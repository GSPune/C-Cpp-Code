class Complex
{
    public:
        double r,i;
        Complex();
        Complex(double,double);
        void print();
        void add(Complex,Complex);
        void sub(Complex,Complex);
        void mul(Complex,Complex);
        void div(Complex,Complex);
        void conjugate();
        double norm();
        //Complex
};