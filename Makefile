#main:	Fabrica.o ControladorAltaAsignatura.o ControladorAltaUsuario.o ControladorAsignarAsignaturaDocente.o ControladorAsistenciaClaseEnVivo.o ControladorEliminarAsignatura.o ControladorEnvioDeMensaje.o ConstrolorInicioDeClase.o ControladorListarClases.o ManejadorAsignatura.o ManejadorClase.o ManejadorPerfil.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Sesion.o Teorico.0 DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInfoClase.o DtIniciarClase.o  DtIniciarClaseFull.o DtIniciarMonitoreo.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o Log.o Time.o
#	g++ main.cpp --std=c++11 -o obligatorio Fabrica.o ControladorAltaAsignatura.o ControladorAltaUsuario.o ControladorAsignarAsignaturaDocente.o ControladorAsistenciaClaseEnVivo.o ControladorEliminarAsignatura.o ControladorEnvioDeMensaje.o ConstrolorInicioDeClase.o ControladorListarClases.o ManejadorAsignatura.o ManejadorClase.o ManejadorPerfil.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Sesion.o Teorico.0 DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInfoClase.o DtIniciarClase.o DtIniciarClaseFull.o DtIniciarMonitoreo.o DtInstanciaClase.o DtParticipacion.o Log.o Time.o
main:	ControladorAltaAsignatura.o ControladorAltaUsuario.o ControladorAsignarAsignaturaDocente.o ControladorAsistenciaClaseEnVivo.o ControladorEliminarAsignatura.o ControladorEnvioDeMensaje.o ConstrolorInicioDeClase.o ControladorListarClases.o ManejadorAsignatura.o ManejadorClase.o ManejadorPerfil.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Sesion.o Teorico.0 DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInfoClase.o DtIniciarClase.o  DtIniciarClaseFull.o DtIniciarMonitoreo.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o Log.o Time.o
	g++ main.cpp --std=c++11 -o obligatorio  ControladorAltaAsignatura.o ControladorAltaUsuario.o ControladorAsignarAsignaturaDocente.o ControladorAsistenciaClaseEnVivo.o ControladorEliminarAsignatura.o ControladorEnvioDeMensaje.o ConstrolorInicioDeClase.o ControladorListarClases.o ManejadorAsignatura.o ManejadorClase.o ManejadorPerfil.o Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Sesion.o Teorico.0 DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInfoClase.o DtIniciarClase.o DtIniciarClaseFull.o DtIniciarMonitoreo.o DtInstanciaClase.o DtParticipacion.o Log.o Time.o


#FABRICA
#Fabrica.o: Fabrica.cpp Fabrica.h
#	g++ -c Fabrica.cpp -o Fabrica.o
#controladores
ControladorAltaAsignatura.o: controladores/ControladorAltaAsignatura.cpp controladores/ControladorAltaAsignatura.h
	g++ -c controladores/ControladorAltaAsignatura.cpp -o ControladorAltaAsignatura.o
ControladorAltaUsuario.o: controladores/ControladorAltaUsuario.cpp controladores/ControladorAltaUsuario.h
	g++ -c controladores/ControladorAltaUsuario.cpp -o ControladorAltaUsuario.o
ControladorAsignarAsignaturaDocente.o: controladores/ControladorAsignarAsignaturaDocente.cpp controladores/ControladorAsignarAsignaturaDocente.h
	g++ -c controladores/ControladorAsignarAsignaturaDocente.cpp -o ControladorAsignarAsignaturaDocente.o
ControladorAsistenciaClaseEnVivo.o: controladores/ControladorAsistenciaClaseEnVivo.cpp controladores/ControladorAsistenciaClaseEnVivo.h
	g++ -c controladores/ControladorAsistenciaClaseEnVivo.cpp -o ControladorAsistenciaClaseEnVivo.o
ControladorEliminarAsignatura.o: controladores/ControladorEliminarAsignatura.cpp controladores/ControladorEliminarAsignatura.h
	g++ -c controladores/ControladorEliminarAsignatura.cpp -o ControladorEliminarAsignatura.o
ControladorEnvioDeMensaje.o: controladores/ControladorEnvioDeMensaje.cpp controladores/ControladorEnvioDeMensaje.h
	g++ -c controladores/ControladorEnvioDeMensaje.cpp -o ControladorEnvioDeMensaje.o
ConstrolorInicioDeClase.o: controladores/ConstrolorInicioDeClase.cpp controladores/ConstrolorInicioDeClase.h
	g++ -c controladores/ConstrolorInicioDeClase.cpp -o ConstrolorInicioDeClase.o
ControladorListarClases.o: controladores/ControladorListarClases.cpp controladores/ControladorListarClases.h
	g++ -c controladores/ControladorListarClases.cpp -o ControladorListarClases.o
#MANEJADORES
ManejadorAsignatura.o: manejadores/ManejadorAsignatura.cpp manejadores/ManejadorAsignatura.h
	g++ -c manejadores/ManejadorAsignatura.cpp -o ManejadorAsignatura.o
ManejadorClase.o: manejadores/ManejadorClase.cpp manejadores/ManejadorClase.h
	g++ -c manejadores/ManejadorClase.cpp -o ManejadorClase.o
ManejadorPerfil.o: manejadores/ManejadorPerfil.cpp manejadores/ManejadorPerfil.h
	g++ -c manejadores/ManejadorPerfil.cpp -o ManejadorPerfil.o
#CLASES
Asignatura.o: clases/Asignatura.cpp clases/Asignatura.h
	g++ -c clases/Asignatura.cpp -o Asignatura.o
AsisteDiferido.o: clases/AsisteDiferido.cpp clases/AsisteDiferido.h
	g++ -c clases/AsisteDiferido.cpp -o AsisteDiferido.o
AsisteEnVivo.o: clases/AsisteEnVivo.cpp clases/AsisteEnVivo.h
	g++ -c clases/AsisteEnVivo.cpp -o AsisteEnVivo.o
Clase.o: clases/Clase.cpp clases/Clase.h
	g++ -c clases/Clase.cpp -o Clase.o
Docente.o: clases/Docente.cpp clases/Docente.h
	g++ -c clases/Docente.cpp -o Docente.o
Estudiante.o: clases/Estudiante.cpp clases/Estudiante.h
	g++ -c clases/Estudiante.cpp -o Estudiante.o
Monitoreo.o: clases/Monitoreo.cpp clases/Monitoreo.h
	g++ -c clases/Monitoreo.cpp -o Monitoreo.o
Perfil.o: clases/Perfil.cpp clases/Perfil.h
	g++ -c clases/Perfil.cpp -o Perfil.o
Practico.o: clases/Practico.cpp clases/Practico.h
	g++ -c clases/Practico.cpp -o Practico.o
Rol.o: clases/Rol.cpp clases/Rol.h
	g++ -c clases/Rol.cpp -o Rol.o
Sesion.o: clases/Sesion.cpp clases/Sesion.h
	g++ -c clases/Sesion.cpp -o Sesion.o
Teorico.o: clases/Teorico.cpp clases/Teorico.h
	g++ -c clases/Teorico.cpp -o Teorico.o
#DATATYPES
DtAsignatura.o: datatypes/DtAsignatura.cpp datatypes/DtAsignatura.h
	g++ -c datatypes/DtAsignatura.cpp -o DtAsignatura.o
DtAsistir.o: datatypes/DtAsistir.cpp datatypes/DtAsistir.h
	g++ -c datatypes/DtAsistir.cpp -o DtAsistir.o
DtClase.o: datatypes/DtClase.cpp datatypes/DtClase.h
	g++ -c datatypes/DtClase.cpp -o DtClase.o
DtClaseAsistencia.o: datatypes/DtClaseAsistencia.cpp datatypes/DtClaseAsistencia.h
	g++ -c datatypes/DtClaseAsistencia.cpp -o DtClaseAsistencia.o
DtDictadoAsignatura.o: datatypes/DtDictadoAsignatura.cpp datatypes/DtDictadoAsignatura.h
	g++ -c datatypes/DtDictadoAsignatura.cpp -o DtDictadoAsignatura.o
DtInfoClase.o: datatypes/DtInfoClase.cpp datatypes/DtInfoClase.h
	g++ -c datatypes/DtInfoClase.cpp -o DtInfoClase.o
DtIniciarClase.o: datatypes/DtIniciarClase.cpp datatypes/DtIniciarClase.h
	g++ -c datatypes/DtIniciarClase.cpp -o DtIniciarClase.o
DtIniciarClaseFull.o: datatypes/DtIniciarClaseFull.cpp datatypes/DtIniciarClaseFull.h
	g++ -c datatypes/DtIniciarClaseFull.cpp -o DtIniciarClaseFull.o
DtIniciarMonitoreo.o: datatypes/DtIniciarMonitoreo.cpp datatypes/DtIniciarMonitoreo.h
	g++ -c datatypes/DtIniciarMonitoreo.cpp -o DtIniciarMonitoreo.o
DtInstanciaClase.o: datatypes/DtInstanciaClase.cpp datatypes/DtInstanciaClase.h
	g++ -c datatypes/DtInstanciaClase.cpp -o DtInstanciaClase.o
DtParticipacion.o: datatypes/DtParticipacion.cpp datatypes/DtParticipacion.h
	g++ -c datatypes/DtParticipacion.cpp -o DtParticipacion.o
DtPerfil.o: datatypes/DtPerfil.cpp datatypes/DtPerfil.h
	g++ -c datatypes/DtPerfil.cpp -o DtPerfil.o
Log.o: datatypes/Log.cpp datatypes/Log.h
	g++ -c datatypes/Log.cpp -o Log.o
Time.o: datatypes/Time.cpp datatypes/Time.h
	g++ -c datatypes/Time.cpp -o Time.o

clean:
	rm *.o
	clear
