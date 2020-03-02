#include<stdio.h>                                                                                                       #include<stdlib.h>                                                                                                                                                                                                                                                                                                                                                      int main()   
  {           
   FILE *fp,*fp1;   
   int i=0,j=0,m=0,x=0;  
  char NT[]={'E','T','F','P','Q','R'};        
  char buff[100],buff1[100],op[10],term;                                                                                  fp=fopen("csb17057_3.txt","r");                                                                                         fp1=fopen("csb17057_3_b.txt","w+");                                                                                     fgets(buff,sizeof(buff),fp);                                                                                            fclose(fp);                                                                                                             printf("%s\n",buff);                                                                                                    while(buff[i]!='$')     
  {        
   if(i%2!=0)     
  {                                                                                                                         if(buff[i]=='+'||buff[i]=='-'||buff[i]=='*'||buff[i]=='='||buff[i]=='/')                                                {                                                                                                                         fprintf(fp1,"%c  %c%c%c/%c\n",NT[j],NT[j],buff[i],NT[j+1],NT[j+1]);                                                     j++;     
  }   
   else   
  {                                                                                                                         printf("Invalid input expression\n");                                                                                   exit(0);   
 }    
}                                                                                                                                                                                                                                               i++;   
  }                                                                                                                       fprintf(fp1,"%c  %c",NT[j],buff[0]);                                                                                    fclose(fp1);                                                                                                            fp1=fopen("csb17057_3_b.txt","r");                                                                                    for(m=0;m<2;m++)    
   {  
 x=0;                                                                                                                    while(fgets(buff1,sizeof(buff1),fp1))  
 {     
 if(m==0)    
 {     
 if(x==0 && m==0) term=buff1[0];                                                                                      //   printf("%s\n",buff1);                                                                                                 if(x<4)                                                                                                                 op[x]=buff1[4]; 
   else op[x]=buff1[3];   
 }     
  else if(m==1)  
   {                                                                                                                                                                                                                                                 if(x>0)   
 { 
   if(x<4)  
 {   
if(x==2)                                                                                                                term=buff1[0];                                                                                                           op[x]=buff1[4]; 
printf("hellll..........\n");  
} 
}                                                                                                                                                                                                                                              op[x+1]=',';  
x+=2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
 rewind(fp1);                                                                                                            printf("Leading set of %c is %s\n",term,op);                                                                            memset(op,' ',sizeof(op));                                                                                                                                                                                                                    }  
 fclose(fp1);                                                                                                            printf("Leading set of F is n\n");   
 }
