# -*- coding: utf-8 -*-

import sys
import re
import argparse
import numpy as np

class Args():
    def __init__(self):
        pass

    def parseArgs(self, exnumber, array):
        self.exnumber = exnumber
        self.array = array
        
        if self.exnumber == 1 and re.search(r'[^0-9]', array):
            sys.exit(1)
        elif self.exnumber == 2 and re.search(r'[^0-1]', array):
            sys.exit(1)
        elif self.exnumber == 3 and re.search(r'[^a-zA-Z]', array):
            sys.exit(1)
          
class Solver():

    def __init__(self, args):
        self.max_length = 0
        self.answers = []
        
        self.args = args
        if self.args.exnumber == 1:
            self.function = self.ex1
        elif self.args.exnumber == 2:
            self.function = self.ex2
        elif self.args.exnumber == 3:
            self.function = self.ex3
            
    def update(self):
        self.answers = []
        self.max_length = len(self.string)
        self.push()
        
    def push(self):
        self.answers.append(self.string)
    
    def process(self):
        self.string = self.args.array[self.start: self.end]
        if self.max_length < len(self.string):
            self.update()
        elif self.max_length == len(self.string):
            self.push()
        else:
            pass

    def ex1(self):
        np_array = np.array([x.group(0) for x in re.finditer(r'[0-9]', self.args.array)]).astype(int)
        where = (np.diff(np_array) > 0)
        if len(where) == 0:
            self.answers.append(self.args.array)
        else:
            for it in re.finditer(r'(1*)', '0'+''.join(where.astype(int).astype(str))):
                self.start = it.start() - 1
                self.end = it.end() 
                self.process()
            
    def ex2(self):
        for it in re.finditer(r'([0-9])\1*', self.args.array):
            self.start = it.start()
            self.end = it.end()
            self.process()
    
    def ex3(self):
        for it in re.finditer(r'([a-zA-Z])\1*', self.args.array):
            self.start = it.start()
            self.end = it.end()
            self.process()
            
    def solve(self):
        self.function()
            
def main():
    
    parser = argparse.ArgumentParser()
    parser.add_argument('exnumber', type=int, help='')
    parser.add_argument('array', type=str, help='')
    rawargs= parser.parse_args()

    args = Args()
    args.parseArgs(rawargs.exnumber, rawargs.array)
    
    solver = Solver(args)
    solver.solve()
    answers = solver.answers
    
    for answer in answers:
        print(answer)

if __name__ == '__main__':
    main()
