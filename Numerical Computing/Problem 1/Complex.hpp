class Complex
{
    public:
        double r,i;
        Complex();
        void set(double,double);
        void print();
        void add(Complex,Complex);
        void sub(Complex,Complex);
        void mul(Complex,Complex);
        void div(Complex,Complex);
        void conjugate(Complex);
};