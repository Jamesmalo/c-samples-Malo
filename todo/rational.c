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
}


//function for adding rational numbers
struct RationalNum add(struct RationalNum a, struct RationalNum b){
    //store values in temporary variables
    //do math
    //create a new struct
    //return the new struct
    int num = a.numerator * b.denominator + b.numerator * a.denominator;
    int denom = a.denominator * b.denominator;
    double value = num/denom;
    return value;
}

//function for subtracting rational numbers
struct RationalNum subtract(struct RationalNum a, struct RationalNum b){
    int num = a.numerator * b.denominator - b.numerator * a.denominator;
    int denom = a.denominator * b.denominator;
    double value = num/denom;
    return value;
}

//function for multiplying rational numbers
struct RationalNum multiply(struct RationalNum a, struct RationalNum b ){
    int num = a.numerator * b.numerator;
    int denom = a.denominator * b.denominator;
    double value = num/denom
    return value;
}

//function for dividing rational numbers
//cannot divide by zero
struct RationalNum divide(struct RationalNum a, struct RationalNum b ){
    int num = a.numerator * b.denominator;
    int denom = a.denominator * b.numerator;
    double value = num/denom;
    return value;
}

//function for adding rational numbers
struct RationalNum reduce(struct RationalNum a){  //still working on reduce
    int temp = 1;
    if(a.numerator > a.denominator){
        for(int i = 0; i <  ;i++){
            if(){
                
            }
        }
    }
    int num = a.numerator/temp;
    int denom = a.denominator/temp;
    double value =
}

int main(){

}