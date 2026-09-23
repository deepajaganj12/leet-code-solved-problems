class FizzBuzz {
private:
    int n;
    int i = 1;

public:
    FizzBuzz(int n) {
        this->n = n;
    }

    void fizz(function<void()> printFizz) {
        while(i <= n) {
            if(i % 3 == 0 && i % 5 != 0) {
                printFizz();
                i++;
            }
        }
    }

    void buzz(function<void()> printBuzz) {
        while(i <= n) {
            if(i % 3 != 0 && i % 5 == 0) {
                printBuzz();
                i++;
            }
        }
    }

    void fizzbuzz(function<void()> printFizzBuzz) {
        while(i <= n) {
            if(i % 3 == 0 && i % 5 == 0) {
                printFizzBuzz();
                i++;
            }
        }
    }

    void number(function<void(int)> printNumber) {
        while(i <= n) {
            if(i % 3 != 0 && i % 5 != 0) {
                printNumber(i);
                i++;
            }
        }
    }
};
