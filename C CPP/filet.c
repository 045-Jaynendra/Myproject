#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
int main()
{
    FILE *metaDataFp, *courseFp, *outputFp;
    int i = 0, j = 0; 
    char metaDataFileName[30],courseFileName[30],course[50],subj_topic[50],ch,line[100],outputLine[100]; 
    char subj[5][50] = {"Statistics", "Machine Learning", "Databases", "Cyber Security", "Customer Relationship Management"};
    char topics[5][10][50] = {{"Probability Theory", "Distributions", "Central Limit Theorum", "Hypothesis Testing", "Data Handling", "Curve Fitting", "Density Estimation", "Principal Component Analysis", "Intro to R", "Intro to Python"}, 
 	                          {"Generative 	Learning", 	"Gaussian 	Parameter 	Estimation", 	"Classification Methods", "Regression Trees", "Bayesian Networks", "Hidden Markov Models", "K means Clustering", "Density based Clustering", "Neural Networks", "Back Propogation"}, 
 	                          {"Database 	Revolutions", 	"Relational 	Databases", 	"CAP 	Theorum", 	"XML Databases", "Data Warehousing Schemes", "In Memory Databases", "MongoDB", "HBase", "SQL", "NoSQL"}, 
 	                          {"SDLC", "Security Standards", "Classical Cryptography", "Modern Cryptography", "Network Security", "Firewall", "Control Hijacking", "Malware", "Wireless Security", "Business risk Analysis"}, 
                              {"Components of CRM", "Relationship Marketing", "Customer data Management", "Customer Service", "CRM Strategy", "Profit Chain", "Sales and CRM", "Business Planning", "CRM Evalution", "New Horizons"}};
    printf("\nEnter the metadata filename:\t");
    scanf("%s", metaDataFileName);
    printf("Enter the course filename:\t"); 
    scanf("%s", courseFileName); 
    metaDataFp = fopen(metaDataFileName,"r");
    courseFp = fopen(courseFileName,"r"); 
    outputFp = fopen("outputlab3.txt", "w"); 
    if(metaDataFp==NULL || courseFp==NULL || outputFp==NULL) 
    {
        printf("\n\nError: Unable to read file.");         
        exit(1); 
    } 
    while (fgets(line, sizeof(line), courseFp) != NULL) 
    {         
        for(i=0; i < 5 ; i++) 
        {
            if(strstr(line, subj[i])) 
            { 
                strcpy(course, subj[i]); 
                for(j = 0 ; j < 10 ; j++) 
                { 
                    if(strstr(line, topics[i][j])) 
                    { 
                        strcpy(subj_topic, topics[i][j]); 
                        fseek(metaDataFp, 0, SEEK_SET); 
                        while(fgets(outputLine, sizeof(outputLine), metaDataFp) != NULL) 
                        { 
                            if(strstr(outputLine, course) && strstr(outputLine, subj_topic)) 
                            {                                 
                                fputs(outputLine, outputFp); 
                            } 
                        } 
                    } 
                } 
            } 
        } 
    } 
    fclose(metaDataFp);    
    fclose(courseFp); 
    fclose(outputFp);  
}