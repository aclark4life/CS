* Homework 4 #4
* Alex Clark

	ORG	$1000
NAME    BYTE	'ACLARK'
ENDNAME BYTE	0
START	LEA	NAME,A5
	LEA	ENDNAME,A6
	MOVE.B	#243,D7
	TRAP	#14
	MOVE.B	#247,D7
LOOP	TRAP 	#14
	CMP.B	'a',D0
	BNE	LOOP
	WORD 	$4AFB
	END	START


