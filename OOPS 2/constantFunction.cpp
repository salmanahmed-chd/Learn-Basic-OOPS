class Fraction {

    private:

        int numerator;
        int denominator;

    public:

        Fraction() {

        }

        Fraction(int numerator, int denominator) {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        void print() const {
            cout<<numerator<<"/"<<denominator<<endl;
        }

        // Setter
        void setNum(int num){ // ise hum const mark nahi kar sakte
            numerator = num;
        }

        // Setter
        void setDen(int den){ // ise hum const mark nahi kar sakte
            denominator = den;
        }

        // Getter
        int getNum() const { // function ko constant function me set kar diya
            return numerator;
        }

        // Getter
        int getDen() const {
            return denominator;
        }

        void simplify(){ // ise hum const mark nahi kar sakte

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

        void add(Fraction const &f){ // ise hum const mark nahi kar sakte
            int num = numerator, den = denominator;

            numerator = (num * f.denominator) + (f.numerator * den);
            denominator = den * f.denominator;

            simplify();
        }

        void multiply(Fraction const &f){ // ise hum const mark nahi kar sakte
            numerator *= f.numerator;
            denominator *= f.denominator;

            simplify();
        }
};