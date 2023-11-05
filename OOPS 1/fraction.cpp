class Fraction {

    private:

        int numerator;
        int denominator;

    public:

        Fraction(int numerator, int denominator) {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        void print() {
            // cout<<this -> numerator<<"/"<<this -> denominator<<endl;

            // the above statement is also correct and if we don't use this then it implicity consider numerator as this ka numerator as there is no argument in print function

            cout<<numerator<<"/"<<denominator<<endl;
        }

        void simplify(){

            int gcd = 1;

            int mini = min(numerator, denominator);

            for(int i = 2; i <= mini; i++){
                if(numerator%i == 0 && denominator%i == 0){
                    gcd = i;
                }
            }

            numerator /= gcd;
            denominator /= gcd;
        }

        void add(Fraction const &f){
            int num = numerator, den = denominator;

            numerator = (num * f.denominator) + (f.numerator * den);
            denominator = den * f.denominator;

            simplify();
        }

        void multiply(Fraction const &f){
            numerator *= f.numerator;
            denominator *= f.denominator;

            simplify();
        }
};