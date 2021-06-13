CC = g++

OBJ_DIR = Object
#OBJS = DtInfoClase.o ManejadorAsignatura.o ControladorListarClases.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Teorico.o DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o Time.o Log.o main.o
OBJS = Fabrica.o Time.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Teorico.o Participacion.o DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o DtInfoClase.o Log.o ControladorListarClases.o ManejadorAsignatura.o main.o

main: $(OBJS)
	$(CC) main.cpp $< -o obligatorio

main.o: main.cpp
	$(CC) -c $< -o $@
DtInfoClase.o: DtInfoClase.cpp DtInfoClase.h
	$(CC) -c $< -o $@
#FABRICA
Fabrica.o: Fabrica.cpp Fabrica.h
	$(CC) -c $< -o $@

#INTERFACES
#CONTROLADORES
ControladorListarClases.o: ControladorListarClases.cpp ControladorListarClases.h
	$(CC) -c $< -o $@
#MANEJADORES
ManejadorAsignatura.o: ManejadorAsignatura.cpp ManejadorAsignatura.h
	$(CC) -c $< -o $@
#CLASES
Asignatura.o: Asignatura.cpp
	$(CC) -c $< -o $@
AsisteDiferido.o: AsisteDiferido.cpp AsisteDiferido.h
	$(CC) -c $< -o $@
AsisteEnVivo.o: AsisteEnVivo.cpp AsisteEnVivo.h
	$(CC) -c $< -o $@
Clase.o: Clase.cpp
	$(CC) -c $< -o $@
Docente.o: Docente.cpp Docente.h
	$(CC) -c $< -o $@
Estudiante.o: Estudiante.cpp Estudiante.h
	$(CC) -c $< -o $@
Monitoreo.o: Monitoreo.cpp Monitoreo.h
	$(CC) -c $< -o $@
Perfil.o: Perfil.cpp Perfil.h
	$(CC) -c $< -o $@
Practico.o: Practico.cpp Practico.h
	$(CC) -c $< -o $@
Rol.o: Rol.cpp Rol.h
	$(CC) -c $< -o $@
Teorico.o: Teorico.cpp Teorico.h
	$(CC) -c $< -o $@
	
Participacion.o: Participacion.cpp Participacion.h
	$(CC) -c $< -o $@
#DATATYPES
DtAsignatura.o: DtAsignatura.cpp DtAsignatura.h
	$(CC) -c $< -o $@
DtAsistir.o: DtAsistir.cpp DtAsistir.h
	$(CC) -c $< -o $@
DtClase.o: DtClase.cpp DtClase.h
	$(CC) -c $< -o $@
DtClaseAsistencia.o: DtClaseAsistencia.cpp DtClaseAsistencia.h
	$(CC) -c $< -o $@
DtDictadoAsignatura.o: DtDictadoAsignatura.cpp DtDictadoAsignatura.h
	$(CC) -c $< -o $@
DtInstanciaClase.o: DtInstanciaClase.cpp DtInstanciaClase.h
	$(CC) -c $< -o $@
DtParticipacion.o: DtParticipacion.cpp DtParticipacion.h
	$(CC) -c $< -o $@
DtPerfil.o: DtPerfil.cpp DtPerfil.h
	$(CC) -c $< -o $@
Time.o: Time.cpp Time.h
	$(CC) -c $< -o $@
Log.o: Log.cpp Log.h
	$(CC) -c $< -o $@


clean:
	rm -rf *.o programa
	clear
