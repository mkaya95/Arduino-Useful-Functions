/*
  You can explode a string with this function on Arduino.
  Using;
  String inputString = "mkaya#test#arduino";
  Explode(inputString, '#', 1); // it will return us "test"
*/

String Explode(String str, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = str.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(str.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }
  return found>index ? str.substring(strIndex[0], strIndex[1]) : "";
}
