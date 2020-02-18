CC = gcc
CFLAGS = -Wall -O3
LDFLAGS = -lm #liens vers des libraires, comme pour la librairie math par exemple
LISTE_OBJ_PROG_MAIN= allocation.o exo3.o #liste des modules objets necessaires
exo3: $(LISTE_OBJ_PROG_MAIN)
	$(CC) $(CFLAGS) $(LISTE_OBJ_PROG_MAIN) -o exo3 $(LDFLAGS)
exo4: allocation.o exo4.o
	$(CC) $(CFLAGS) allocation.o exo4.o -o exo4 $(LDFLAGS)

allocation.o: allocation.c allocation.h #rajouter des fichiers h si necessaire
exo3.o : exo3.h exo3.c
exo4.o : exo4.h exo4.c

clean:
	rm -f $(LISTE_OBJ_PROG_MAIN)
