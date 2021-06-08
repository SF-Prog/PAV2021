CC = g++
CL_DIR = clases
CON_DIR = controladores
I_DIR = interfaces
M_DIR = manejadores
DT_DIR = datatypes

OBJ_DIR = Object
OBJS = $(OBJ_DIR)/DtInfoClase.o $(OBJ_DIR)/ManejadorAsignatura.o $(OBJ_DIR)/ControladorListarClases.o $(OBJ_DIR)/Asignatura.o $(OBJ_DIR)/AsisteDiferido.o $(OBJ_DIR)/AsisteEnVivo.o $(OBJ_DIR)/Clase.o $(OBJ_DIR)/Docente.o $(OBJ_DIR)/Estudiante.o $(OBJ_DIR)/Monitoreo.o $(OBJ_DIR)/Perfil.o $(OBJ_DIR)/Practico.o $(OBJ_DIR)/Rol.o $(OBJ_DIR)/Teorico.o $(OBJ_DIR)/DtAsignatura.o $(OBJ_DIR)/DtAsistir.o $(OBJ_DIR)/DtClase.o $(OBJ_DIR)/DtClaseAsistencia.o $(OBJ_DIR)/DtDictadoAsignatura.o $(OBJ_DIR)/DtInstanciaClase.o $(OBJ_DIR)/DtParticipacion.o $(OBJ_DIR)/DtPerfil.o $(OBJ_DIR)/Time.o $(OBJ_DIR)/Log.o $(OBJ_DIR)/main.o

main: $(OBJS)
	$(CC) main.cpp $< -o obligatorio

$(OBJ_DIR)/main.o: main.cpp
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtInfoClase.o: datatypes/DtInfoClase.cpp datatypes/DtInfoClase.h
	$(CC) -c $< -o $@
#FABRICA
$(OBJ_DIR)/AsisteEnVivo.o: clases/Fabrica.cpp clases/Fabrica.h
	$(CC) -c $< -o $@

#INTERFACES
#CONTROLADORES
$(OBJ_DIR)/ControladorListarClases.o: controladores/ControladorListarClases.cpp controladores/ControladorListarClases.h
	$(CC) -c $< -o $@
#MANEJADORES
$(OBJ_DIR)/ManejadorAsignatura.o: manejadores/ManejadorAsignatura.cpp manejadores/ManejadorAsignatura.h
	$(CC) -c $< -o $@
#CLASES
$(OBJ_DIR)/Asignatura.o: clases/Asignatura.cpp
	$(CC) -c $< -o $@
$(OBJ_DIR)/AsisteDiferido.o: clases/AsisteDiferido.cpp clases/AsisteDiferido.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/AsisteEnVivo.o: clases/AsisteEnVivo.cpp clases/AsisteEnVivo.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Clase.o: clases/Clase.cpp
	$(CC) -c $< -o $@
$(OBJ_DIR)/Docente.o: clases/Docente.cpp clases/Docente.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Estudiante.o: clases/Estudiante.cpp clases/Estudiante.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Monitoreo.o: clases/Monitoreo.cpp clases/Monitoreo.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Perfil.o: clases/Perfil.cpp clases/Perfil.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Practico.o: clases/Practico.cpp clases/Practico.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Rol.o: clases/Rol.cpp clases/Rol.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Teorico.o: clases/Teorico.cpp clases/Teorico.h
	$(CC) -c $< -o $@
#DATATYPES
$(OBJ_DIR)/DtAsignatura.o: datatypes/DtAsignatura.cpp datatypes/DtAsignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtAsistir.o: datatypes/DtAsistir.cpp datatypes/DtAsistir.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtClase.o: datatypes/DtClase.cpp datatypes/DtClase.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtClaseAsistencia.o: datatypes/DtClaseAsistencia.cpp datatypes/DtClaseAsistencia.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtDictadoAsignatura.o: datatypes/DtDictadoAsignatura.cpp datatypes/DtDictadoAsignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtInstanciaClase.o: datatypes/DtInstanciaClase.cpp datatypes/DtInstanciaClase.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtParticipacion.o: datatypes/DtParticipacion.cpp datatypes/DtParticipacion.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtPerfil.o: datatypes/DtPerfil.cpp datatypes/DtPerfil.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Time.o: datatypes/Time.cpp datatypes/Time.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Log.o: datatypes/Log.cpp datatypes/Log.h
	$(CC) -c $< -o $@


clean:
	rm -rf $(OBJ_DIR)/*.o programa
	clear
