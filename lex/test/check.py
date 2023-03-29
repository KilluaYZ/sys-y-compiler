import os
import sys
import subprocess
import re
import getopt

def get_lex_file():
    dir = os.getcwd()
    for f in os.listdir(dir):
        # print(f)
        if (re.match(r'.*\.l$', f)):
            print("flex file \'{}\' found".format(f))
            return f

def main():

    opts, args = getopt.getopt(sys.argv[1:],'-p-s',['PL0, SysY'])

    file_name = get_lex_file()
    os.system("flex {}".format(file_name))
    os.system("gcc lex.yy.c")

    case_num = 6
    
    # print(opts)

    if '-s' in [opt[0] for opt in opts]:
        for i in range(case_num):
            print('running on case {}'.format(i + 1))
            subprocess.Popen(args = '', executable = './a.out', stdin = open("./SysY/{}.sy".format(i + 1),"r"), stdout = open('./out{}.txt'.format(i + 1), "w"))
    if '-p' in [opt[0] for opt in opts]:
        for i in range(case_num):
            print('running on case {}'.format(i + 1))
            subprocess.Popen(args = '', executable = './a.out', stdin = open("./pl0/{}.pl0".format(i + 1),"r"), stdout = open('./out{}.txt'.format(i + 1), "w"))

if __name__ == '__main__':
    main()