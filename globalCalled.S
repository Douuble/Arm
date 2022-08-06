/*globalCalled.S*/
.global counter


#Start the function:counter
counter:
MOV W3,#0
mcouter:
LDRB W2,[X0],#1
CMP W2,#0
BNE judge 
BEQ creturn

judge:
CMP W2,#97
BHI greatera
BLO mcouter

greatera:
CMP W2,#122
BLO count
BHI mcouter

count:
ADD W3,W3,#1
B mcouter

creturn:
MOV W0,W3
RET
