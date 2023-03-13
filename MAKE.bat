:: ************************************************************************** ..
::                                                                            ..
::                                                        :::      ::::::::   ..
::   MAKE.bat                                           :+:      :+:    :+:   ..
::                                                    +:+ +:+         +:+     ..
::   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        ..
::                                                +#+#+#+#+#+   +#+           ..
::   Created: 2022/12/09 23:15:03 by hdeniz            #+#    #+#             ..
::   Updated: 2023/03/13 15:50:49 by hdeniz           ###   ########.fr       ..
::                                                                            ..
:: ************************************************************************** ..

@ECHO OFF
SETLOCAL ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION

::PHONY ALL A
::PHONY MAIN MT M
::PHONY RE R
::PHONY CLEAN CLEAR C
::PHONY FCLEAN FCLEAR FC

SET "CC=GCC"
REM [COMPILER]

SET "NAME=ft_math.a"
REM [COMPILED LIBRARY FILE'S NAME (STATIC LINK LIBRARY)]

SET "SRC=*.c"
REM [FILES TO COMPILE]

SET "MAIN="
REM [MAIN PRODUCT TO COMPILE]

SET "CFLAGS=-Wall -Wextra -Werror"
REM [COMPILER FLAGS]

GOTO :Makefile %*

:A
:ALL
	CALL :NAME
	IF NOT "!MAIN!"=="" (
		IF EXIST "!MAIN!" (
			CALL :MAIN
		) ELSE (
			GOTO :ERROR_MAIN
		)
	)
	CALL :PAUSE
GOTO :EOF

:NAME
	ECHO.
	FOR /R %%# IN (!SRC!) DO (
		IF NOT "%%~XN#"=="!MAIN!" (
			CALL :PROGRESS_BAR !PROGRESS! !SRC_FILE_NUM! "%%~N#.c"
			IF NOT EXIST "%%~N#.o" IF NOT EXIST "!NAME!" !CC! !CFLAGS! -c %%# -o %%~n#.o||GOTO :ERROR
			SET /A PROGRESS+=1
		)
	)
	CALL :PROGRESS_BAR !PROGRESS! !SRC_FILE_NUM! "!NAME!"
	WHERE "AR">NUL 2>NUL
	IF NOT !ERRORLEVEL! NEQ 0 (
		IF EXIST "*.o" IF NOT EXIST "!NAME!" AR -rcs !NAME! *.o||GOTO :ERROR
		ECHO.
		ECHO.
		ECHO  INFO: !NAME! DONE!
	) ELSE (
		ECHO.
		ECHO.
		ECHO  WARNING: "AR" IS NOT FOUND ON YOUR COMPUTER TO LIBRARY OBJECT FILES!
	)
	SET PROGRESS=0
GOTO :EOF

:M
:MAIN
	FOR %%# IN ("!MAIN!") DO SET "MAIN_NAME=%%~N#"
	ECHO.
	WHERE "AR">NUL 2>NUL
	IF !ERRORLEVEL! NEQ 0 (
		ECHO  INFO: THIS WILL CAUSE SOME PROBLEMS ON YOUR PROGRAM.
		ECHO        WE'RE GOING TO COMPILE "!MAIN!" MANUALLY WITHOUT "!NAME!"
		!CC! !CFLAGS! !MAIN! "*.o" -o !MAIN_NAME!.exe||GOTO :ERROR
	) ELSE (
		!CC! !CFLAGS! !MAIN! !NAME! -o !MAIN_NAME!.exe||GOTO :ERROR
	)
	ECHO.
	ECHO  INFO: !MAIN_NAME!.exe DONE!
	ECHO.
GOTO :EOF

:R
:RE
	CALL :FCLEAR
GOTO :ALL

:C
:CLEAR
:CLEAN
	ECHO.
	FOR /R %%# IN (!SRC!) DO (
		IF EXIST "%%~N#.o" DEL %%~N#.o & ECHO  %%~N#.o Deleted.
	)
GOTO :EOF

:FC
:FCLEAR
:FCLEAN
	CALL :CLEAN
	IF EXIST "!NAME!" DEL "!NAME!" & ECHO  !NAME! Deleted.
GOTO :EOF

:Makefile
	SET "MAKEFILE_PATH=%~0"
	SET "#=UPDATE_LINE"
	WHERE !CC!>NUL 2>NUL
	IF %ERRORLEVEL% NEQ 0 GOTO :ERROR_COMPILER
	FOR /F "DELIMS=#" %%# IN ('"PROMPT #$H# &ECHO ON &FOR %%# IN (1) DO REM"') DO (
		SET "%#%=%%#"
		SET "%#%=!%#%:~0,1!"
	)
	SET "#="
	SET "CLEAR_LINE= "
	FOR /L %%# IN (1, 1, 40) DO SET "UPDATE_LINE=!UPDATE_LINE!!UPDATE_LINE!"
	SET "PROGRESS_BAR_DONE=#"
	SET "PROGRESS_BAR_EMPTY= "

	SET /A SRC_FILE_NUM=0
	SET /A PROGRESS=0
	FOR /R %%# IN (!SRC!) DO IF NOT "%%~XN#"=="!MAIN!" SET /A SRC_FILE_NUM+=1

	FOR %%# IN (!NAME!) DO SET "NAME_NAME=%%~N#"
	IF NOT "%~1"=="" (
		SET "PHONY=%~1"
		FOR %%# IN ("a=A" "b=B" "c=C" "d=D" "e=E" "f=F" "g=G" "h=H" "i=I" "j=J" "k=K" "l=L" "m=M" "n=N" "o=O" "p=P" "q=Q" "r=R" "s=S" "t=T" "u=U" "v=V" "w=W" "x=X" "y=Y" "z=Z") DO (
			SET PHONY=!PHONY:%%~#!
		)
		IF "!PHONY!"=="!NAME_NAME!" (
			IF EXIST "!NAME!" DEL "!NAME!"
			GOTO :NAME
		) ELSE (
			GOTO :!PHONY!
			GOTO :FORCE_OUT 0
		)
	)
GOTO :ALL

:PROGRESS_BAR
	SET /A PBAR=%1*100/%2*100/100
	SET /A PDONE=!PBAR!*4/10
	SET /A PLEFT=40-!PDONE!
	FOR /L %%# IN (1, 1, !PDONE!) DO SET "PFILL=!PROGRESS_BAR_DONE!!PFILL!"
	FOR /L %%# IN (1, 1, !PLEFT!) DO SET "PEMPTY=!PROGRESS_BAR_EMPTY!!PEMPTY!"
	<NUL SET /P "=!UPDATE_LINE! [!PFILL!!PEMPTY!] !PBAR!%% [%1/%2] - [%~3]                "
	SET "PFILL="
	SET "PEMPTY="
GOTO :EOF

:PAUSE
	FOR %%# IN (%CMDCMDLINE:"=%) DO (IF "%%~#"=="!MAKEFILE_PATH!" ECHO.&PAUSE)
GOTO :EOF

:ERROR_MAIN
	ECHO.
	ECHO  ERROR: !MAIN! IS NOT EXIST!
	ECHO  CURRENT CD: [!CD!]
	CALL :PAUSE
GOTO :FORCE_OUT 1

:ERROR_COMPILER
	ECHO.
	ECHO  ERROR: "!CC!" IS NOT FOUND ON YOUR COMPUTER TO COMPILE THE FILES!
	CALL :PAUSE
GOTO :FORCE_OUT 2

:ERROR
	ECHO.
	CALL :PAUSE
GOTO :FORCE_OUT 1

:FORCE_OUT
	(GOTO) 2>NUL || (
		TYPE NUL>NUL
		EXIT /B %~1
	)
