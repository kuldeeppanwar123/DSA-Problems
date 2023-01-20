int tilingProblem(int n){
if(n<2)return 1;
return tilingProblem(n-1) + tilingProblem(n-2);
}
