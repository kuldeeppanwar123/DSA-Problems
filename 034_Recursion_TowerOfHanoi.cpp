void TOI(int n , char A , char B ,char C){
if(n==1){ 
     cout<<"move 1th disk from "<<A<<" to "<<C<<endl;
     return;
    }
  
  TOI(n-1 , A , C, B);
  cout<<"move "<<n<<"th disk from "<<A<<" to "<<C<<endl;
  TOI(n-1 , B , A, C);
}

notes-
  => A is source node , c is destination node , B is helper node
  
  => if there is only one disk then directly move from source A to destionation C.
  => first move n-1 disk from source A to helpoer B
  => Move nth (bottom one) disk from source A to destination C.
  => move (n-1) disk from helper B to destination C.
