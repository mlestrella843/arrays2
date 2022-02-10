#include <iostream>

using namespace std;


int main() {

bool invalid=true;   // I changed thsi

int i,j=0;

char letter;

char array_vowel[5]={'a','e','i','o','u'};

// SOHAIB: the array size should be 20
char array_conso[20]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};



cout<<"Please introduce a lowercase letter: \n";

cin>>letter;


// SOHAIB: the loop should run from 0 to 5, where 5 is excluded.
for (i=0; i<5; i++){

  if(array_vowel[i] == letter){

    cout<<"The lowercase letter is a vowel: "<<array_vowel[i] <<endl;
    invalid = false;
    break;

}

}


// SOHAIB: the loop should run from 0 to 20, where 20 is excluded.
for (j=0; j<20; j++){


if(array_conso[j]== letter){

cout<<"The lowercase letter is a consonant: " <<array_conso[j];
invalid = false;
break;

}

else if('y'== letter){
  invalid = false;
  cout<<"The letter 'y' can be used such as a vowel and such as a consonant: "; break;

}




}

// we write this out of the loop

if (invalid)
  cout<<"the lowercase letter is invalid\n"; 


return 0;

}