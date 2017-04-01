package codecheck;

import java.util.*;

public class App {

	public static void printAnswer(List<String> answers) {
		System.out.println("answers: ");
		for (int i = 0, l = answers.size(); i < l; i++) {
			System.out.print("  ");
			System.out.println(answers.get(i));
		}
	}
	
	public static void main(String[] argv) {
		Args args = new Args();
		args.parseArgs(argv.length, argv);

		System.out.println("----------");
		System.out.print("input: ");
		System.out.println(argv[1]);
		
		if (args.exnumber == 1){
			Solver1 solver = new Solver1(args);
			solver.solve();
			printAnswer(solver.answers);
		}
		else{
			Solver23 solver = new Solver23(args);
			solver.solve();
			printAnswer(solver.answers);
		}
			
	}
}
 
