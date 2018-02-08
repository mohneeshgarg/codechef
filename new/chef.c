    #include<stdio.h>
    #include<string.h>
    int main(){
    	long long t,i,j,k,count=0,l,n;
    	int a;
    	char s[5000000],b[5];
    	char masterlist[24][5]={
    	"chef",
    	"chfe",
    	"cehf",
    	"cefh",
    	"cfeh",
    	"cfhe",
    	"hcef",
    	"hcfe",
    	"hfce",
    	"hfec",
    	"hefc",
    	"hecf",
    	"efhc",
    	"efch",
    	"ehfc",
    	"ehcf",
    	"echf",
    	"ecfh",
    	"fehc",
    	"fech",
    	"fceh",
    	"fche",
    	"fhec",
    	"fhce",
    };
    	scanf("%lld", &t);
    	for(i=0;i<t;i++){
    	count=0;
    scanf("%s", s);
    n=strlen(s);
    	for(j=0;j<=n-4;j++)
    	{
    		int mc = 0;
    		for(l=0;l<4;l++)
    		{
    			if (s[j+l]=='c' || s[j+l]=='e' || s[j+l]=='h' || s[j+l]=='f')
    				b[l]=s[j+l];
    			else {
    				mc =1;
    				break;
    			}
    		}
    		if(mc==1)
    			continue;
    		b[4]='\0';
    		//printf("%s\n", b);
    		for(k=0;k<24;k++)
    		{
    			a=strcmp(&masterlist[k][0],b);			
    			if(a==0)
    			{
    				count++;
    				break;
    			}
    		}
    	}
    	
    		if(count>0)
    		{
    			printf("lovely %lld\n",count);
    		}
    		else
    		{
    			printf("normal\n");
    		}
     	
    }
    return 0;
    } 
