
/*
    url: https://youtu.be/l_pjp-BG27k?list=PLnfCacCyFMlZZzR53Tw3Dp5DEargnMQRQ
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void go(int n, int arr[][3]){
    vector<pair<int,int>>points;
    for(int i=0;i<n;i++){
        pair<int,int>temp;
        temp.first=arr[i][0];
        temp.second = arr[i][0] + arr[i][2];
        points.push_back(temp);
    }

    //sorting the points if necessary
    sort(points.begin(),points.end());

    int numberOfPeople = 0;

    int startx = points[0].first;
    int endx = points[0].second;
    for(int i=1; i<n; i++){
        if(endx >= points[i].first){
            endx = points[i].second;
        }

        else{
            numberOfPeople += (endx - startx + 1);
            startx = points[i].first;
            endx = points[i].second;
        }
    }

    numberOfPeople += (endx - startx + 1);
    cout<<numberOfPeople<<endl;
    
}

int main(){
    int arr[][3]={{1,2,3},{3,4,2},{6,3,2},{9,3,2},{11,3,2}};
    go(5,arr);
}