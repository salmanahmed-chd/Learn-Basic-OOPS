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

        void simplify(){ // ise hum constand function mark nahi kar sakte

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

        Fraction add(Fraction const &f) const { // example of constant function
            int num = numerator, den = denominator;

            num = (numerator * f.denominator) + (f.numerator * denominator);
            den = denominator * f.denominator;

            Fraction newFrac(num, den);

            newFrac.simplify();

            return newFrac;
        }

        // operator overloading

        Fraction operator+(Fraction const &f) const { // example of constant function
            int num = numerator, den = denominator;

            num = (numerator * f.denominator) + (f.numerator * denominator);
            den = denominator * f.denominator;

            Fraction newFrac(num, den);

            newFrac.simplify();

            return newFrac;
        }

        Fraction multiply(Fraction const &f) const { // example of constant function
            int num = numerator * f.numerator;
            int den = denominator * f.denominator;

            Fraction newFrac(num, den);
            
            newFrac.simplify();

            return newFrac;
        }

        // operator overload
        Fraction operator* (Fraction const &f) const { // example of constant function

            int num = numerator * f.numerator;
            int den = denominator * f.denominator;

            Fraction newFrac(num, den);
            
            newFrac.simplify();

            return newFrac;
        }

        bool operator==(Fraction const &f) const { // example of constant function
            if(numerator == f.numerator && denominator == f.denominator) return true;
            else return false;
        }

        // ++ operator pre increment

        void operator++() {

            numerator += denominator;

            simplify();
        }
};