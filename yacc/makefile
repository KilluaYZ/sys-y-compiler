LEX=flex  
YACC=bison  
CC=g++  
OBJECT=main #生成的目标文件  
CPPFLAG= -w

$(OBJECT): lex.yy.o  yacc.tab.o  
	$(CC) $(CPPFLAG) lex.yy.o yacc.tab.o -o $(OBJECT)  

lex.yy.o: lex.yy.c  yacc.tab.h  main.h  
	$(CC) $(CPPFLAG) -c lex.yy.c  

yacc.tab.o: yacc.tab.c  main.h  
	$(CC) $(CPPFLAG) -c yacc.tab.c  

yacc.tab.c  yacc.tab.h: yacc.y  
# bison使用-d参数编译.y文件  
	$(YACC) -d yacc.y  

lex.yy.c: lex.l  
	$(LEX) lex.l  

clean:  
	@rm -f $(OBJECT)  *.o  
