#include "types.h"
#include "stat.h"
#include "user.h"

        char str[10000];

int
main(int argc, char *argv[])
{
  int i,k, c,len;
  char ch;
  len=0;

  for(i = 1; i < argc; i++)
  {
  	for(k=0;k<len;k++)
  	{
  		str[k]='\0';
  	}

  	len=0;

    for (k = 0;argv[i][k] != '\0' ; k++)
    {
        str[k]=argv[i][k];
        len++;
        // printf(1,"%c",argv[i][k]);
    }
  	c=0;
  	while (c<len)
  	{
      int temp;
      ch = str[c];
      if (ch >= 'A' && ch <= 'Z')
      {
        temp = (int)str[c];
        temp+=32;
        str[c] = (char)temp;
      }
      else if (ch >= 'a' && ch <= 'z')
      {
      	temp = (int)str[c];
      	temp-=32;
        str[c] = (char)temp;  
      }
      c++;  
   	}
printf(1,"%s ",str);    
    // printf(1, "%s%s", str, i+1 < argc ? " " : "\n");
  	
  }
printf(0,"\n");

exit();
}

// int
// main(int argc, char *argv[])
// {
//   int i,c,len,k;
//   char ch;
  
//   for(i = 1; i < argc; i++)
//   {

//   	len=0;
//     for (k = 0; argv[i][k] != '\0' || argv[i][k] != ' ' ; k++)
//     {
//         len++;
//     }

//   	c=0;
  	
//   	while (c<len)
//   	{
//       ch = argv[i][c];
//       if (ch >= 'A' && ch <= 'Z')
//          argv[i][c] = argv[i][c] + 32;
//       else if (ch >= 'a' && ch <= 'z')
//          argv[i][c] = argv[i][c] - 32;  
//       c++;  
//    	}
    
//     printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  	
//   }


//   exit();
// }

// #include "types.h"
// #include "stat.h"
// #include "user.h"
// // #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     // int c = 0;
//     int i;
//     // char ch, s[1000];
//     // printf("argc = %d\n",argc );
//   for(i = 1; i < argc; i++)
//     printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
//   //   printf("Input a string\n");
//   //   gets(s);
       
//   //   while (s[c] != '\0') {
// 		// ch = s[c];
//   //       if (ch >= 'A' && ch <= 'Z')
//   //           s[c] = s[c] + 32;
//   //       else if (ch >= 'a' && ch <= 'z')
//   //           s[c] = s[c] - 32;  
//   //       c++;  
//   //   }
       
//   //   printf("%s\n", s);
     
//    exit();
// }