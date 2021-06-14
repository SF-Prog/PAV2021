#main:	Fabrica.o ControladorAltaAsignatura.o ControladorAltaUsuario.o ControladorAsignarAsignaturaDocente.o ControladorAsistenciaClaseEnVivo.o ControladorEliminarAsignatura.o ControladorEnvioDeMensaje.o ConstrolorInicioDeClase.o ControladorListarClases.o ManejadorAsignatura.o ManejadorClase.o ManejadorPerfil.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Sesion.o Teorico.0 DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInfoClase.o DtIniciarClase.o  DtIniciarClaseFull.o DtIniciarMonitoreo.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o Log.o Time.o
#	g++ main.cpp --std=c++11 -o obligatorio Fabrica.o ControladorAltaAsignatura.o ControladorAltaUsuario.o ControladorAsignarAsignaturaDocente.o ControladorAsistenciaClaseEnVivo.o ControladorEliminarAsignatura.o ControladorEnvioDeMensaje.o ConstrolorInicioDeClase.o ControladorListarClases.o ManejadorAsignatura.o ManejadorClase.o ManejadorPerfil.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Sesion.o Teorico.0 DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInfoClase.o DtIniciarClase.o DtIniciarClaseFull.o DtIniciarMonitoreo.o DtInstanciaClase.o DtParticipacion.o Log.o Time.o
main: 	ControladorAltaAsignatura.o ControladorAltaUsuario.o ManejadorAsignatura.o ManejadorPerfil.o Asignatura.o Docente.o Estudiante.o  Perfil.o DtAsignatura.o  DtPerfil.o main.o Fabrica.o
	g++	main.o Fabrica.o  ControladorAltaAsignatura.o	ControladorAltaUsuario.o ManejadorAsignatura.o ManejadorPerfil.o Asignatura.o 	Docente.o Estudiante.o Perfil.o DtAsignatura.o  DtPerfil.o -o	obligatorio.exe 


#FABRICA
Fabrica.o: Fabrica.cpp Fabrica.h
	g++ -c Fabrica.cpp -o Fabrica.o
#controladores
ControladorAltaAsignatura.o: controladores/ControladorAltaAsignatura.cpp controladores/ControladorAltaAsignatura.h
	g++ -c controladores/ControladorAltaAsignatura.cpp -o ControladorAltaAsignatura.o
ControladorAltaUsuario.o: controladores/ControladorAltaUsuario.cpp controladores/ControladorAltaUsuario.h
	g++ -c controladores/ControladorAltaUsuario.cpp -o ControladorAltaUsuario.o

#MANEJADORES
ManejadorAsignatura.o: manejador/ManejadorAsignatura.cpp manejador/ManejadorAsignatura.h
	g++ -c manejador/ManejadorAsignatura.cpp -o ManejadorAsignatura.o

ManejadorPerfil.o: manejador/ManejadorPerfil.cpp manejador/ManejadorPerfil.h
	g++ -c manejador/ManejadorPerfil.cpp -o ManejadorPerfil.o
#CLASES
Asignatura.o: clases/Asignatura.cpp clases/Asignatura.h
	g++ -c clases/Asignatura.cpp -o Asignatura.o

Perfil.o: clases/Perfil.cpp clases/Perfil.h
	g++ -c clases/Perfil.cpp -o Perfil.o

Docente.o: clases/Docente.cpp clases/Docente.h
	g++ -c clases/Docente.cpp -o Docente.o
Estudiante.o: clases/Estudiante.cpp clases/Estudiante.h
	g++ -c clases/Estudiante.cpp -o Estudiante.o
#DATATYPES
DtAsignatura.o: datatypes/DtAsignatura.cpp datatypes/DtAsignatura.h
	g++ -c datatypes/DtAsignatura.cpp -o DtAsignatura.o

DtPerfil.o: datatypes/DtPerfil.cpp datatypes/DtPerfil.h
	g++ -c datatypes/DtPerfil.cpp -o DtPerfil.o
Log.o: datatypes/Log.cpp datatypes/Log.h
	g++ -c datatypes/Log.cpp -o Log.o
Time.o: datatypes/Time.cpp datatypes/Time.h
	g++ -c datatypes/Time.cpp -o Time.o


main.o: ./main.cpp 
	g++ -c ./main.cpp -o main.o

clean:
	rm *.o
	clear
