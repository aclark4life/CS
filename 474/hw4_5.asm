* Homework 4 #5
* Alex Clark

	ORG 	$2000
BUFFER	DS	48	
	ORG	$3000
LABEL   LEA 	BUFFER,A3
	MOVE.B  #247,D7
LOOP	TRAP 	#14
	MOVE.B	D0,(A3)+
	CMP.B	#$0D,D0
	BNE	LOOP
	WORD	$4AFB
	END	LABEL
