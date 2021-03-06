STDIO   PUBLIC          OUTCH,GETCH,CRLF,CLEAR,OUTSTR

OUTCH   MOVEM.L         A0-A6/D1-D7,-(A7)
        MOVE.B          #248,D7
        TRAP            #14
        MOVEM.L         (A7)+,A0-A6/D1-D7
        RTS

GETCH   MOVEM.L         A0-A6/D1-D7,-(A7)   
        MOVE.B          #247,D7
        TRAP            #14
        BSR             OUTCH
        MOVEM.L         (A7)+,A0-A6/D1-D7
        RTS

CRLF    MOVEM.L         A0-A6/D1-D7,-(A7)
        LEA             $0,A5
        LEA             $0,A6
        MOVE.B          #227,D7
        TRAP            #14
        MOVEM.L         (A7)+,A0-A6/D1-D7
        RTS

CLEAR   MOVEM.L         A0-A6/D0-D7,-(A7)
        MOVE.B          #248,D7
        MOVE.B          #27,D0
        TRAP            #14
        MOVE.B          #'[',D0
        TRAP            #14
        MOVE.B          #'2',D0
        TRAP            #14
        MOVE.B          #'J',D0
        TRAP            #14
        MOVEM.L         (A7)+,A0-A6/D0-D7
        RTS

OUTSTR  MOVEM.L         A1-A6/D0-D7,-(A7)
LOOP    MOVE.B          (A0)+,D0
        CMP.B           #0,D0
        BEQ             DONE
        BSR             OUTCH
        BRA             LOOP
DONE    SUBA.L          #1,A0
        MOVEM.L         (A7)+,A1-A6/D0-D7
        RTS

        END             STDIO
