// c1
#include<stdio.h>
#define ll long long
ll gt(int n){
	ll tich=1;
	for( int i=1;i<=n;++i)
	tich*=i;
	return tich;
}

int th(int k ,int n){
	return gt(n)/(gt(k)*gt(n-k));
}

int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		int a,m,b,n;
		scanf("%d%d%d%d",&a,&m,&b,&n);
		printf("%d\n",th(a,m)-th(b,n));
	}
}


// c2
#include <stdio.h>

int combination(int n, int k){
	if(n - k < k) k = n - k;
	int ans = 1;
	for (int i = 1; i <= k; ++i){
		ans = ans * (n - k + i) / i;
	}
	return ans;
}

int main(){
	int q; scanf("%d", &q);
	while(q--){
		int a, m, b, n;
		scanf("%d%d%d%d", &a, &m, &b, &n);
		int y = combination(m, a) - combination(n, b);
		printf("%d\n", y);
	}
}



































