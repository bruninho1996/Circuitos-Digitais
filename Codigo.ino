int ledBlue = 13; 
int ledYellow = 12; 
int ledOrange = 11; int i;
int vetA[4] = {0,0,1,1};
int vetB[4] = {0,1,0,1};
void setup() { pinMode(ledBlue, OUTPUT); 
pinMode(ledYellow, OUTPUT);
pinMode(ledOrange, OUTPUT);
}
bool and_function (bool a, bool b){ return (a&&b);
}
bool or_function (bool a, bool b){ return (a||b);
}
bool nand_function (bool a, bool b){ return !(a&&b);
}
bool nor_function (bool a, bool b){ return !(a||b);
}
bool xor_function (bool a, bool b) { return (!a && b) || (a && !b);
}
bool xnor_function (bool a, bool b) { return (!a && !b) || (a && b);
}
void loop()
{
  
//AND
for (i = 0; i < 4; i++) { digitalWrite(ledBlue, vetA[i]); digitalWrite(ledYellow, vetB[i]);
digitalWrite(ledOrange, and_function(vetA[i], vetB[i])); delay(1500);
}
//OR
for (i = 0; i < 4; i++) { digitalWrite(ledBlue, vetA[i]); digitalWrite(ledYellow, vetB[i]);
digitalWrite(ledOrange, or_function(vetA[i], vetB[i])); delay(1500);
}
//NAND
for (i = 0; i < 4; i++) { digitalWrite(ledBlue, vetA[i]); digitalWrite(ledYellow, vetB[i]);
digitalWrite(ledOrange, nand_function(vetA[i], vetB[i])); delay(1500);
}
//NOR
for (i = 0; i < 4; i++) { digitalWrite(ledBlue, vetA[i]); digitalWrite(ledYellow, vetB[i]);
digitalWrite(ledOrange, nor_function(vetA[i], vetB[i])); delay(1500);
}
//XOR
for (i = 0; i < 4; i++) { digitalWrite(ledBlue, vetA[i]); digitalWrite(ledYellow, vetB[i]);
digitalWrite(ledOrange, xor_function(vetA[i], vetB[i])); delay(1500);
}
 
 

  

} 
