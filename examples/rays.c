//create different sized arrays and show how the data creates a differnet amount of space used.

// create methods for extending array size with an adding method and a multiplicative method.

//show how we can step through an array with pointers and for loops.


int main(){
    int list[10] = {1,2,3,4,5,6,7,8,9,10};
    int otherlist[10];


    short i;
    for(i=0;i<10;i++){
        otherlist[i] = i + (i*i);
    }


    char* word = "hello";
    char* otherword[5] = {'h','e','l','l','o'};

    short len = strlen(word);
    printf("%s",len);
    return 0;

    
}
