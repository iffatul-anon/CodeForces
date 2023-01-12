int main(){
    int n,k,n1;
    sscanf(Stdio.stdin.gets(),"%d %d %d",n,k,n1);
    int a=n/n1;
    if(n%n1!=0){
        a++;
    }
    int b=pow(a,a);
    if(b<=k){
        write("YES\n");
    }
    else{
        write("NO\n");
    }
    return 0;
}