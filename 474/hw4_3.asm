* Homework 4 #3
* Alex Clark

	ORG	$1000
NAME    BYTE	'ACLARK'
ENDNAME BYTE	0
START	LEA	NAME,A5
	LEA	ENDNAME,A6
	MOVE.B	#243,D7
	TRAP	#14
	MOVE.B	#247,D7
	TRAP 	#14
	WORD 	$4AFB
	END	START


