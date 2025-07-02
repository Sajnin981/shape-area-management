#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    float d,h,w,dep,cirarea=0,recarea=0,cubearea=0;
    vector<float> diam,h1,w1,h2,w2,depv;
    vector<int> id;
   while(1){ 
    cout<<"1.Add a circle\n";
    cout<<"2.Add a rectangle\n";
    cout<<"3.Add a cube\n";
    cout<<"4.List items\n";
    cout<<"5.Get statistic\n";
    cout<<"6.Exit\n";
    cin>>t;
    if(t==1){
        cout<<"What is the diameter?(in meter)\n";
        cin>>d;
        diam.push_back(d);
        cirarea+=3.14*d*d/4;
        id.push_back(1);
    }
    else if(t==2){
        cout<<"What is the height?(in meter)\n";
        cin>>h;
        h1.push_back(h);
        cout<<"What is the width?(in meter)\n";
        cin>>w;
        w1.push_back(w);
        recarea+=h*w;
         id.push_back(2);
    }
    else if(t==3){
        cout<<"What is the height?(in meter)\n";
        cin>>h;
        h2.push_back(h);
        cout<<"What is the width?(in meter)\n";
        cin>>w;
        w2.push_back(w);
        cout<<"What is the depth?(in meter)\n";
        cin>>dep; 
        depv.push_back(dep);
        cubearea+=h*w*dep;
         id.push_back(3);
    }
    else if(t==4){
        int j=0,k=0,l=0;
        cout<<"id\t"<<"type\t\t"<<"dimension\n";
        cout<<"=================================\n";
       for(int i=0;i<id.size();i++){
         if(id[i]==1){
            cout<<i+1<<"\tcircle\t\t"<<diam[j]<<"\n";
            j++;
         }
         if(id[i]==2){
            cout<<i+1<<"\trectangle\t"<<h1[k]<<"X"<<w1[k]<<"\n";
            k++;
         }
         if(id[i]==3){
            cout<<i+1<<"\tcube\t\t"<<h2[l]<<"X"<<w2[l]<<"X"<<depv[l]<<"\n";
            l++;
         }
       } 
    }
    else if(t==5){
        cout<<"Total shapes: "<<id.size()<<"\n";
        cout<<"Total number of rectangles: "<<h1.size()<<"\n";
        cout<<"Total number of circles: "<<diam.size()<<"\n";
        cout<<"Total number of cubes: "<<h2.size()<<"\n";
        cout<<"Total area: "<<cirarea+cubearea+recarea<<"\n";
        cout<<"The total area occupied by rectangles: "<<recarea<<"m²\n";
        cout<<"The total area occupied by circles: "<<cirarea<<"m²\n";
        cout<<"The total area occupied by cubes: "<<cubearea<<"m³\n";
    }
    else if(t==6){
        break;
    }
    else{
        cout<<"Invalid choice\n";
    }
}
}   