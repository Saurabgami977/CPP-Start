    const int SIZE = 10;
    int guesses[SIZE];
    int count = 0;

    for(int i=0; i<SIZE; i++){
        if(cin>> guesses[i]){
            count++;
        }else{
            break;
        };
    }
    print_array(guesses, count);
    cin.clear();