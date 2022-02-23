#include <iostream>

using namespace std;
int main()
{
	int opcion, E[3];
	int salir = 1;
	char precun[30][3], canttrat[30][3], precunt[30][3], horat[30][3], nompc[30][3], nomtrat[30][3], desc[100][3];
	do {
		cout << "Menu del cosultorio" << endl;
		cout << "1.-Agendar cita" << endl;
		cout << "2.-Modificar cita" << endl;
		cout << "3.-Elminar cita" << endl;
		cout << "4.-Lista de citas vigentes" << endl;
		cout << "5.-Limpiar pantalla" << endl;
		cout << "6.-Salir" << endl;
		cout << "Ingrese su opcion: " << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			 for(int i = 1; i < 4; i++) {
				cout << "PACIENTE Numero " << i << endl;
				cout << "Nombre del Paciente: ";
				cin >> nompc[i];
				cout << "Edad: ";
				cin >> E[i];
				cout << "Hora del tratamiento : " << endl;
				cout << "(favor de ponerlo en formato de 24Horas) " << endl;
				cin >> horat[i];
				cout << "Nombre del tratamiento: ";
				cin >> nomtrat[i];
				cout << "Precio unitario del tratamiento: " << endl;
				cin >> precunt[i];
				cout << "Cantidad de tratamiento: " << endl;
				cin >> canttrat[i];
				cout << "precio unitario:" << endl;
				cin >> precun[i];
				cout << "** Cita generada exitosamente! **" << endl;
			}

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:
			system("cls");
			opcion = 0;
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "Ingrese una opcion valida";
		}
		if (opcion != 0) {
			cout << "Desea volver al menu? (Si=1 No=2)" << endl;
			cout << "Opcion:" << endl;
			cin >> salir;
		}
	} while (salir == 1);
}
