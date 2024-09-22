#include<iostream>

using namespace std;

const int x=2;
const int y=2;

class Pt{

private:
    int d[x][y];

public:

 Pt(){

for(int i=0;i<x;i++){

  for(int j=0;j<y;j++){

    d[i][j]=0;

}

}
}
Pt(int d[x][y]){

for(int i=0;i<x;i++){

  for(int j=0;j<y;j++){

    this->d[i][j]=d[i][j];

}

}
}
Pt operator*(Pt &p) {

Pt res;
for(int i=0;i<x;i++){

  for(int j=0;j<y;j++){

for(int k=0;k<x;k++){

    res.d[i][j]=res.d[i][j]+d[i][k]*p.d[k][j];
}
}

}
return res;
}




 void display(){

for(int i=0;i<x;i++){

  for(int j=0;j<y;j++){

    cout<<d[i][j]<<" ";

}
cout<<endl;
}

}

};

int main(){

int a[2][2]={{1,2},{3,4}};
int b[2][2]={{5,6},{7,8}};

Pt x(a);
Pt y(b);

Pt z=x*y;

z.display();
}
