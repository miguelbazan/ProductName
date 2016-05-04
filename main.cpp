//
//  main.cpp
//  Tutoring_ProductName
//
//  Created by Miguel Bazán on 1/18/16.
//  Copyright © 2016 Miguel Bazán. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{
    int iN,iCambiar,iCambiar2,iPosicion;
    string sabc = "abcdefghijklmnopqrstuvwxyz";
    string sLinea, sLinea2, sCambiar, sCambiar2, sAux;
    char cChar, cChar2, cAux;
    sLinea2 = sabc;
    cin >> iN;
    cin >> sLinea;
    
    for (int iR = 0; iR < iN; iR++)
    {
        cin >> cChar >> cChar2;
        
        iCambiar = sabc.find(cChar);
        iCambiar2 = sabc.find(cChar2);
        
        
        
        sabc[iCambiar] = cChar2;
        sabc[iCambiar2] = cChar;
    }

    for (int iR = 0; iR < sLinea.length(); iR++)
    {
        iPosicion = sLinea2.find(sLinea[iR]);
        sLinea[iR] = sabc[iPosicion];
    }
    cout<<sLinea<<endl;
    
      return 0;
}
