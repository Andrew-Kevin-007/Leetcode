int divide(int dividend, int divisor) {
    int k = dividend;
    int count = 0;
    int flag = 0;
    if (dividend == 0) {
        return 0;
    }
    if (divisor == 1 || divisor == -1) {
        if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0) {
            if (dividend <= -2147483648) {
                return 2147483647;
            } else {
                return abs(dividend);
            }
        } else {

            if (dividend < 0) {
                return dividend;
            } else {

                return abs(dividend) * -1;
            }
        }
    }
    if (dividend != -2147483648 && divisor != -2147483648) {
        if (abs(dividend) == abs(divisor)) {
            if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0) {

                return 1;
            } else {
                return -1;
            }
        }

        if (abs(dividend) < abs(divisor)) {
            return 0;
        }
    }
    if (divisor == -2147483648 || dividend == -2147483648) {
        if(divisor == -2147483648&&dividend == -2147483648){
            return 1;
        }
        if (divisor == -2147483648) {
            return 0;
        } else {
            while (k < 0) {
                count++;
                if (divisor > 0) {
                    k += divisor;
                } else {

                    k -= divisor;
                }
            }
            if (k != 0) {
                count--;
            }
            if (divisor > 0) {
                return count * (-1);
            }
            return count;
        }
    }
    if (divisor < 0) {
        divisor *= -1;
        flag++;
    }
    if (dividend < 0) {
        k *= -1;
        flag++;
    }

    while (k > 0) {
        count++;
        k -= divisor;
    }
    if (k != 0) {
        count--;
    }
    if (flag == 1) {
        return count * -1;
    }
    return count;
}
