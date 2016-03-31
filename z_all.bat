

if [%1] equ [] goto edit
if [%1] equ [z_edit] goto generate
if [%1] equ [z_generate] goto compile
if [%1] equ [z_compile] goto run


:edit

call z_edit %f0

:generate

call z_generate %f0

:compile

call z_compile %f0

:run

call z_run