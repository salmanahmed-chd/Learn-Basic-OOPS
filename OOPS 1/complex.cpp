class Complex {

    private:
        int real;
        int imaginary;

    public:

        Complex (int real, int imaginary){
            this -> real = real;
            this -> imaginary = imaginary;
        }

        void print(){
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }

        void add(Complex const &c){
            real += c.real;
            imaginary += c.imaginary;
        }

        void multiply(Complex const &c){
            int r = real;
            int img = imaginary;

            real = (r * c.real) - (img * c.imaginary);
            imaginary = (r * c.imaginary) + (img * c.real);
        }
};