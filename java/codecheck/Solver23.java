package codecheck;

import java.util.*;

public class Solver23 extends Solver {

	boolean flag;
	
	public Solver23(Args args_){
		super(args_);
		String temp = String.valueOf(args.array)+"-";
		args.array = temp.toCharArray();	
	}

	public void forwardprocess(){
		if(end != args.array_len && args.array[start] == args.array[end]){
			end++;
			forwardprocess();
		}
	}

	public void backprocess(){

		if(target == start){
			flag = true;
		}
		else if(args.array[target] == args.array[end]){
			target--;
			backprocess();
		}
		else{
			flag = false;
		}
	}

	void solve(){
		while(end <= args.array_len){
			// possibility to update
			if(args.array[start] == args.array[end]){ 
				target = end - 1;
				backprocess();
				if(flag){
					end++;
					forwardprocess();
					update();
				}
				else{
					end = target + 1;
				}
			}
			
			else {
				end--;
				// possibility to push // max_length==1
				if(start == end){
					end++;
					push();
				}
				// possibility to push // max_length>1
				else if(args.array[start] == args.array[end]){
					target = end - 1;
					backprocess();
					end++;
					if(flag){
						push();
					}
				}
				else{
					target = end++;
					backprocess();
					end = target + 1;
				}
			}
			start = end;
			end = start + max_length;	  
		}	
	}
}
