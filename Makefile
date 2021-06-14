CC = g++
CL_DIR = clases
CON_DIR = controladores
I_DIR = interfaces
M_DIR = manejadores
DT_DIR = datatypes

OBJ_DIR = Object
OBJS = $(OBJ_DIR)/ManejadorAsignatura.o $(OBJ_DIR)/ManejadorClase.o $(OBJ_DIR)/ManejadorPerfil.o $(OBJ_DIR)/ControladorAltaUsuario.o $(OBJ_DIR)/ControladorAsignarAsignaturaDocente.o $(OBJ_DIR)/ControladorAsistenciaClaseEnVivo.o $(OBJ_DIR)/ControladorEliminarAsignatura.o $(OBJ_DIR)/ControladorEnvioDeMensaje.o $(OBJ_DIR)/ControladorAltaAsignatura.o $(OBJ_DIR)/ControladorInicioDeClase.o $(OBJ_DIR)/ControladorInscripcionAsignatura.o $(OBJ_DIR)/Fabrica.o $(OBJ_DIR)/Sesion.o $(OBJ_DIR)/ControladorListarClases.o $(OBJ_DIR)/Asignatura.o $(OBJ_DIR)/AsisteDiferido.o $(OBJ_DIR)/Participacion.o $(OBJ_DIR)/AsisteEnVivo.o $(OBJ_DIR)/Clase.o $(OBJ_DIR)/Docente.o $(OBJ_DIR)/Estudiante.o $(OBJ_DIR)/Monitoreo.o $(OBJ_DIR)/Perfil.o $(OBJ_DIR)/Practico.o $(OBJ_DIR)/Rol.o $(OBJ_DIR)/Teorico.o $(OBJ_DIR)/DtInfoClase.o $(OBJ_DIR)/DtAsignatura.o $(OBJ_DIR)/DtAsistir.o $(OBJ_DIR)/DtClase.o $(OBJ_DIR)/DtClaseAsistencia.o $(OBJ_DIR)/DtDictadoAsignatura.o $(OBJ_DIR)/DtIniciarClase.o $(OBJ_DIR)/DtIniciarClaseFull.o $(OBJ_DIR)/DtIniciarMonitoreo.o $(OBJ_DIR)/DtInstanciaClase.o $(OBJ_DIR)/DtParticipacion.o $(OBJ_DIR)/DtPerfil.o $(OBJ_DIR)/Time.o $(OBJ_DIR)/Log.o $(OBJ_DIR)/main.o

main: $(OBJS)
	$(CC) $(OBJS) -o obligatorio

$(OBJ_DIR)/main.o: main.cpp
	$(CC) -c $< -o $@

#FABRICA
$(OBJ_DIR)/Fabrica.o: clases/Fabrica.cpp clases/Fabrica.h
	$(CC) -c $< -o $@
#CONTROLADORES
$(OBJ_DIR)/ControladorAltaAsignatura.o: controladores/ControladorAltaAsignatura.cpp controladores/ControladorAltaAsignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorAltaUsuario.o: controladores/ControladorAltaUsuario.cpp controladores/ControladorAltaUsuario.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorAsignarAsignaturaDocente.o: controladores/ControladorAsignarAsignaturaDocente.cpp controladores/ControladorAsignarAsignaturaDocente.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorAsistenciaClaseEnVivo.o: controladores/ControladorAsistenciaClaseEnVivo.cpp controladores/ControladorAsistenciaClaseEnVivo.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorEliminarAsignatura.o: controladores/ControladorEliminarAsignatura.cpp controladores/ControladorEliminarAsignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorEnvioDeMensaje.o: controladores/ControladorEnvioDeMensaje.cpp controladores/ControladorEnvioDeMensaje.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorInicioDeClase.o: controladores/ControladorInicioDeClase.cpp controladores/ControladorInicioDeClase.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorInscripcionAsignatura.o: controladores/ControladorInscripcionAsignatura.cpp controladores/ControladorInscripcionAsignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ControladorListarClases.o: controladores/ControladorListarClases.cpp controladores/ControladorListarClases.h
	$(CC) -c $< -o $@

#MANEJADORES
$(OBJ_DIR)/ManejadorAsignatura.o: manejadores/ManejadorAsignatura.cpp manejadores/ManejadorAsignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ManejadorClase.o: manejadores/ManejadorClase.cpp manejadores/ManejadorClase.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/ManejadorPerfil.o: manejadores/ManejadorPerfil.cpp manejadores/ManejadorPerfil.h
	$(CC) -c $< -o $@
#CLASES
$(OBJ_DIR)/Asignatura.o: clases/Asignatura.cpp clases/Asignatura.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/AsisteDiferido.o: clases/AsisteDiferido.cpp clases/AsisteDiferido.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/AsisteEnVivo.o: clases/AsisteEnVivo.cpp clases/AsisteEnVivo.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Participacion.o: clases/Participacion.cpp clases/Participacion.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/Clase.o: clases/Clase.cpp clases/Clase.h
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
$(OBJ_DIR)/Sesion.o: clases/Sesion.cpp clases/Sesion.h
	$(CC) -c $< -o $@	
$(OBJ_DIR)/Teorico.o: clases/Teorico.cpp clases/Teorico.h
	$(CC) -c $< -o $@
#DATATYPES
$(OBJ_DIR)/DtInfoClase.o: datatypes/DtInfoClase.cpp datatypes/DtInfoClase.h
	$(CC) -c $< -o $@
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
$(OBJ_DIR)/DtIniciarClase.o: datatypes/DtIniciarClase.cpp datatypes/DtIniciarClase.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtIniciarClaseFull.o: datatypes/DtIniciarClaseFull.cpp datatypes/DtIniciarClaseFull.h
	$(CC) -c $< -o $@
$(OBJ_DIR)/DtIniciarMonitoreo.o: datatypes/DtIniciarMonitoreo.cpp datatypes/DtIniciarMonitoreo.h
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
	rm -rf $(OBJ_DIR)/*.o obligatorio
	clear
