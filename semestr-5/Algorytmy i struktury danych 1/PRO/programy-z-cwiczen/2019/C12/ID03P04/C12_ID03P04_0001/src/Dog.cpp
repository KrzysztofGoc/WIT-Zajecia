#include "Dog.h"
///********************************************************************
Dog::Dog(string animalName):Animal(animalName){
    //cout<<"\t\tKonstruktor Dog"<<endl;
    }
///********************************************************************
string Dog::AnimalName(){
    return "Dog: "+Animal::AnimalName();
    }
///********************************************************************
void Dog::Test(){
    cout<<"Test psa ..."<<endl;
    }
///********************************************************************
