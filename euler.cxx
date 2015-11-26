# include<iostream>
# include<cmath>


using namespace std;



int main(){
    
  const double lambda = -0.5;
  int N=100;
//   const double dt= 5.0*(1/lambda)*log(0.5)/N; 
  const double dt=4.1;
  double yf=1;
  double yb=1;
  double yh=1;
  
  for(int i=0; i<N;i++){
    cout << i*dt << "\t" << yf << "\t" << yb << "\t" << yh << endl;
   yf = yf + lambda*yf*dt;// forward euler
        
   yb = yb/(1-lambda*dt);//backward euler
   
   yh = yh*(1+dt*0.5*lambda)/(1-0.5*dt*lambda);  // Midpoint
    
   
  }
  
  
  
  return 0;
  
}