int lengthOfLastWord(char* s) {
     int len=strlen(s);
    int c=0,m=0;
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            c++;
            m=1;   
        }
        if(m==1 && s[i]==' ')
        {
            break;
           
        }
    }    
    return c;
}