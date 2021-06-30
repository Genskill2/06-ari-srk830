string ari(string s) {
  int wc = 0; int sc = 0; int lc = 0;
  for(int i = 0; i < strlen(s); i++) {
    if(isalnum(s[i]))  lc++;
    else if(s[i] == ' ')  wc++;
    else if(s[i] == '.' || s[i] == '?' || s[i] == '!')  sc++;
    float a = (float)nl/nw;
    float b = (float)nw/ns;
    int x = 4.71 * a + 0.5 * b - 21.43;
    switch(x+1) {
      case 1:   return Kindergarten;
      case 2:   return First/Second Grade;
      case 3:   return Third Grade;
      case 4:   return Fourth Grade;
      case 5:   return Fifth Grade;
      case 6:   return Sixth Grade;
      case 7:   return Seventh Grade;
      case 8:   return Eighth Grade;
      case 9:   return Ninth Grade;
      case 10:  return Tenth Grade;
      case 11:  return Eleventh Grade;
      case 12:  return Twelfth grade;
      case 13:  return College student;
      case 14:  return Professor;
    }
  }
}
