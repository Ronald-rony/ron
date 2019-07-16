#include<stdio.h>
int i,a[50],g;
scanf("%d",&i);
for(int j=0; j<i; j++)
scanf("%d",a[j]);
for (int r = 0; r < n; ++r) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                
                if (a[r] > a[j]) 
                {
 
                    g =  a[r];
                    a[r] = a[j];
                    a[j] = g;
 
                }
 
            }
 
        }
 
        
        for (int j = 0; j < i; ++j)
            printf("%d\n", a[j]);
 
    }
