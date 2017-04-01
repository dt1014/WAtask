package codecheck;

import java.util.*;

public class Solver {

	static Args args;
	static int max_length;
	static List<String> answers;
	static int start, end, target;
	static String tempstr;
	
	public Solver(Args args_){
		args = args_;
		max_length = 1;
		answers = new ArrayList<String>();
		start = 0;
		end = start + max_length;
		target = start;
	}
	
	public static void update(){
		max_length = end - start;
		answers.clear();
		push();
	}
	public static void push(){
		tempstr = "";
		try {
			for(int i = start; i != end; i++){
				tempstr += args.array[i];
			}
		}
		catch (java.lang.ArrayIndexOutOfBoundsException e){
			//System.out.println("catch");
			;
		}

		// for(int i = start; i != end; i++){
		// 	tempstr += args.array[i];
		// }
		answers.add(tempstr);
	}
}
		
