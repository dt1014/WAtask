package codecheck;

import java.util.*;

public class Solver1 extends Solver {

	boolean flag;
	
	public Solver1(Args args_){
		super(args_);
		if (args.array_len != 0){
			flag = true;
		}
		else {			
			flag = false;
		}
	}

	public void process(){
		
		if(end < args.array_len && (int)(args.array[end]-args.array[target]) > 0){
			target++;
			end++;
			process();
		}
		else{
			if (end >= args.array_len){
				flag = false;
			}
			
			if(end > start+max_length){
				update();
			}
			else if(end == start+max_length){
				push();
			}
			else{
				;
			}
			start = end;
			return;
		}
	}

	public void solve(){
		while(flag){
			while((int)(args.array[start]-'0') > 10-max_length){
				if (start == args.array_len-1) {
					flag = false;
					break;
				}
				start++;
			}
			target = start;
			end = start + 1;
			process();
		}
		
	}
	
}
