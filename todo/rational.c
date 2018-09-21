/*create the strucuture for a rational number
*  value: type float: the quotient of two ints
*  numerator: type int: the top
*  denominator: type int: the bottom
*/

struct RationalNum {
    //fill this in
    int numerator;
    int denominator;
    double value;
};


//function for adding rational numbers
struct RationalNum add(struct RationalNum a, struct RationalNum b){
    //store values in temporary variables
    //do math
    //create a new struct
    //return the new struct
    int num = a.numerator * b.denominator + b.numerator * a.denominator;
    int denom = a.denominator * b.denominator;
    double val = num/denom;
    struct RationalNum answer = {num,denom,val};

    return answer;
}

//function for subtracting rational numbers
struct RationalNum subtract(struct RationalNum a, struct RationalNum b){
    int num = a.numerator * b.denominator - b.numerator * a.denominator;
    int denom = a.denominator * b.denominator;
    double val = num/denom;
    struct RationalNum answer = {num,denom,val};

    return answer;
}

//function for multiplying rational numbers
struct RationalNum multiply(struct RationalNum a, struct RationalNum b ){
    int num = a.numerator * b.numerator;
    int denom = a.denominator * b.denominator;
    double val = num/denom;
    struct RationalNum answer = {num,denom,val};

    return answer;
}

//function for dividing rational numbers
//cannot divide by zero
struct RationalNum divide(struct RationalNum a, struct RationalNum b ){
    int num = a.numerator * b.denominator;
    int denom = a.denominator * b.numerator;
    double val = num/denom;
    struct RationalNum answer = {num,denom,val};

    return answer;
}

//function for adding rational numbers
struct RationalNum reduce(struct RationalNum a){  //still working on reduce
    int num = a.numerator;
    int denom = a.denominator;
    int small;
    
    if(num >= denom){
        small == denom;
    }
    else{
        small == num;
    }
    int i;
    for(int i=2; i <= small; i++){
        if(num % i == 0  && denom % i == 0){
            num = num /i;
            denom = denom/i;
            i--;
            
        }
    }
    
    double val = (double)num/ (double)denom;
    struct RationalNum answer = {num,denom,val};
    return answer;

}

int main(){
    struct FirstNum(5,2,2.5);
}