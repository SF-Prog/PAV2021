main: Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Teorico.o DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o Time.o Log.o
	g++ main.cpp --std=c++11 -o obligatorio Asignatura.o AsisteDiferido.o AsisteEnVivo.o Clase.o Docente.o Estudiante.o Monitoreo.o Perfil.o Practico.o Rol.o Teorico.o DtAsignatura.o DtAsistir.o DtClase.o DtClaseAsistencia.o DtDictadoAsignatura.o DtInstanciaClase.o DtParticipacion.o DtPerfil.o Time.o Log.o
#FABRICA
#CONTROLADORES
#MANEJADORES
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
DtInstanciaClase.o: datatypes/DtInstanciaClase.cpp datatypes/DtInstanciaClase.h
	g++ -c datatypes/DtInstanciaClase.cpp -o DtInstanciaClase.o
DtParticipacion.o: datatypes/DtParticipacion.cpp datatypes/DtParticipacion.h
	g++ -c datatypes/DtParticipacion.cpp -o DtParticipacion.o
DtPerfil.o: datatypes/DtPerfil.cpp datatypes/DtPerfil.h
	g++ -c datatypes/DtPerfil.cpp -o DtPerfil.o
Time.o: datatypes/Time.cpp datatypes/Time.h
	g++ -c datatypes/Time.cpp -o Time.o
Log.o: datatypes/Log.cpp datatypes/Log.h
	g++ -c datatypes/Log.cpp -o Log.o
clean:
	rm *.o
	clear
