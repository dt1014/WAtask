package codecheck;

public class Args {
	
	static int exnumber;
	static int array_len;
	static char[] array;

	Args(){
		exnumber = -1;
	}

	public static boolean invalid(char c){

		if(exnumber == 1){
			return (c < '0' || c > '9');
		}
		else if(exnumber == 2){
			return (c < '0' || c > '1');
		}
		else if(exnumber == 3){
			return (c < 'A' || (c > 'Z' && c < 'a') || c > 'z');
		}
		else{
			return true;
		}
			
	}
	
	public static void parseArgs(int argc, String[] argv){

		if (argc < 2){
	        System.err.println("");
			System.exit(1);
		}
		
		try{
			exnumber = Integer.parseInt(argv[0]);
			if(exnumber < 1 || exnumber > 3){
				throw new java.lang.NumberFormatException("");
			}
		}
		catch(java.lang.NumberFormatException e){
            System.err.println("");
			System.exit(1);
		}

		array_len = argv[1].length();
		array = argv[1].toCharArray();
		
		for(int i=0; i<array_len; i++){
			if(invalid(array[i])){
                System.err.println("");
				System.exit(1);
			}
		}
	}	
}
