LEX=flex  
YACC=bison  
CC=g++  
OBJECT=main #生成的目标文件  
CPPFLAG= -w

$(OBJECT): lex.yy.o  yacc.tab.o  
	$(CC) $(CPPFLAG) lex.yy.o yacc.tab.o -o $(OBJECT)  

lex.yy.o: lex.yy.c  yacc.tab.h  main.h  DotDrawer.hpp Format.hpp
	$(CC) $(CPPFLAG) -c lex.yy.c  

yacc.tab.o: yacc.tab.c  main.h  DotDrawer.hpp Format.hpp
	$(CC) $(CPPFLAG) -c yacc.tab.c  

yacc.tab.c  yacc.tab.h: yacc.y  
# bison使用-d参数编译.y文件  
	$(YACC) -d yacc.y  

lex.yy.c: lex.l  
	$(LEX) lex.l  

clean:  
	@rm -f $(OBJECT)  *.o  

run: $(OBJECT)
	@./$(OBJECT) ./test/SysY/1.sy ./test/textout/1.txt ./test/dotout/1.dot
	@./$(OBJECT) ./test/SysY/2.sy ./test/textout/2.txt ./test/dotout/2.dot
	@./$(OBJECT) ./test/SysY/3.sy ./test/textout/3.txt ./test/dotout/3.dot
	@./$(OBJECT) ./test/SysY/4.sy ./test/textout/4.txt ./test/dotout/4.dot
	@./$(OBJECT) ./test/SysY/5.sy ./test/textout/5.txt ./test/dotout/5.dot
	@./$(OBJECT) ./test/SysY/6.sy ./test/textout/6.txt ./test/dotout/6.dot
	@dot -T svg ./test/dotout/1.dot -o ./test/svgout/1.svg
	@dot -T svg ./test/dotout/2.dot -o ./test/svgout/2.svg
	@dot -T svg ./test/dotout/3.dot -o ./test/svgout/3.svg
	@dot -T svg ./test/dotout/4.dot -o ./test/svgout/4.svg
	@dot -T svg ./test/dotout/5.dot -o ./test/svgout/5.svg
	@dot -T svg ./test/dotout/6.dot -o ./test/svgout/6.svg
