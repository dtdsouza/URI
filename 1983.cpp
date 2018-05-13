/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1983.cpp
 * Author: dtdlinux
 *
 * Created on May 13, 2018, 2:07 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int matricula,n,melhorAluno;
    float nota,maiorNota;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> matricula;
        cin >> nota;
        
        if(i == 0){
            melhorAluno = matricula;
            maiorNota = nota;
        }
        else if( nota > maiorNota){
            melhorAluno = matricula;
            maiorNota = nota;
        }
  
    }
    
    if( maiorNota >= 8)
        cout << melhorAluno << endl;
    else
        cout << "Minimum note not reached" << endl;
    
    return 0;
}


