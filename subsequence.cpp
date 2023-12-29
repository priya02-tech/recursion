//
#include<iostream>
using namespace std;
int subsequence(string input,string output[])
{
    if(input.length()==0)
    {
        output[0]=" ";
        return 1;
    }
    int size=subsequence(input.substr(1),output);
    for(int i=0;i<size;i++)
    {
       output[i+size]=input[0]+output[i];
    } 
    return 2*size;
}
int main()
{
    string output[100];
    int N=subsequence("abcd",output);
    for(int i=0;i<N;i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}