

	decl
		int n,fibo(int n);
	enddecl

	int fibo(int n){
		decl
			int res;
		enddecl
		begin
			if(n==0)then
				res=0;
			else
				if(n==1)then
					res=1;
				else
					res=fibo(n-1)+fibo(n-2);
				endif;
			endif;
			return res;
		end
	}
	int main(){
		decl
			int result;
		enddecl
		begin
			read(n);
			result = fibo(n);
			write(result);
			return 0;
		end
	}

