#include <iostream>

using namespace std;

int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int a[N], b[N], c[N], score, maxscore=0;
        for(int i=0; i<N; i++) cin>>a[i];
        for(int i=0; i<N; i++) cin>>b[i];
        for(int i=0; i<N; i++){
            score = 20*a[i]-10*b[i];
            if(score<0) score = 0;
            c[i] = score;
            if(score>maxscore) maxscore =score;
        } 
        cout<<maxscore<<endl;
    }
    return 0;
}