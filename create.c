#include <stdio.h>
#include <conio.h>
int main()
{   
   int a,b,c,d,e,f,g,h,i,j,k;
   int num;
   FILE *fptr;
   fptr = fopen("D:\\file.txt","w");
       printf("Enter num: ");
       scanf("%d",&num);
       
       for( a = 48; a <=122; a = a + 1 ){
           fprintf(fptr,"\n%c",a);
           for( b = 48; b <=122; b++ ){
               fprintf(fptr,"\n%c%c",a,b);
                for( c = 48; c <=122; c++ ){
                  fprintf(fptr,"\n%c%c%c",a,b,c);
                  for( d = 48; d <=122; d++ ){
                       fprintf(fptr,"\n%c%c%c%c",a,b,c,d);
                       for( e = 48; e <=122; e++ ){
                            fprintf(fptr,"\n%c%c%c%c%c",a,b,c,d,e);
                            for( f = 48; f <=122; f++ ){
                               fprintf(fptr,"\n%c%c%c%c%c%c",a,b,c,d,e,f);
                               for( g = 48; g <=122; g++ ){
                                    fprintf(fptr,"\n%c%c%c%c%c%c%c",a,b,c,d,e,f,g);
                                     for( h = 48; h <=122; h++ ){
                                          fprintf(fptr,"\n%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h);
                                           for( i = 48; i <=122; i++ ){
                                                 printf("A:%d B:%d C:%d D:%d E:%d F:%d G:%d H:%d I:%d J:%d K:%d\n",a,b,c,d,e,f,g,h,i,j,k);
                                                fprintf(fptr,"\n%c%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h,i);
                                                 for( j = 48; j <=122; j++ ){
                                                      fprintf(fptr,"\n%c%c%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h,i,j);
                                                      for( k = 48; k <=122; k++ ){
                                                           fprintf(fptr,"\n%c%c%c%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h,i,j,k);
                                                      }
                                                 }
                                           }
                                     }
                               }
                            }
                       }
                  }
                }
           }
       }
   fclose(fptr);

   return 0;
}
