#include <iostream> 
#include <locale.h>
#include <string> 
#include <locale>
using namespace std;

struct cita {
	int cita,hora,precun,cantrat,prectrat,total;
	string texto,nombre,datos,datos,nomtra,descon;

};
int main() {

	cita Acita[3];
	int op, n;
	int j;
	int i;
	do {
		system("cls");
		cout << "Menu Consultorio del Dentista" << endl;
		cout << "Elige la opcion a realizar" << endl;
		cout << "1.-Agendar cita" << endl;
		cout << "2.-Modificar cita" << endl;
		cout << "3.-Eliminar cita" << endl;
		cout << "4.-Lista de citas vigentes" << endl;
		cout << "5.-Limpiar pantalla" << endl;
		cout << "6.-Salir" << endl;
		cin >> op;
		switch (op) {
		case 1:
			for (i = 0; i < 3; i++) {
					Acita[i].cita = i + 1;
				cout << "ID de paciente: " << Acita[i].cita << endl;
				cout << "Nombre del paciente: " << endl;
				cin >> Acita[i].nombre;
				cout << "Hora del tratamiento (en formato 24hrs): " << endl;
				cin >> Acita[i].hora;
				cout << "Nombre del tratamiento: " << endl;
				cin >> Acita[i].nomtra;
				cout << "Descripcion: " << endl;       //el control c hace magia no lo creé? //
				cin >> Acita[i].descon;
				cout << "Precio unitario tratamiento: " << endl;
				cin >> Acita[i].prectrat;
				cout << "Cantidad del tratamiento: " << endl;
				cin >> Acita[i].cantrat;
				cout << "Precio Unitario: " << endl;
				cin >> Acita[i].precun;
				cout << "Total: " << endl;
				cin >> Acita[i].total;
				cout << "\nNombre del paciente: " << 
					Acita[i].nomtra << "\nHora del tratamiento (en formato 24hrs): " << 
					Acita[i].hora << "\nNombre del tratamient: " << Acita[i].nomtra << 
					"\nDescripción: " << Acita[i].descon << 
					"\nPrecio unitario tratamiento: " << Acita[i].prectrat << 
					"\nCantidad del tratamiento: " << Acita[i].cantrat << 
					"\nPrecio Unitario: " << Acita[i].precun << 
					"\nTotal: " << Acita[i].total << endl << endl;
					system("pause>nul");
				}
			}
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			for (i = 0; i < 3; i++) {
			cout << "ID de cita: " << Acita[i].cita << endl;
			cout << "Nombre del paciente: " << Acita[i].nombre;
			cout << "Hora del tratamiento (en formato 24hrs): " << Acita[i].hora;
			cout << "Nombre del tratamiento: " << Acita[i].nomtra;
			cout << "Descripción: " << Acita[i].descon;
			cout << "Precio unitario tratamiento: " << Acita[i].prectrat;
			cout << "Cantidad del tratamiento: " << Acita[i].cantrat;
			cout << "Precio unitario : " << Acita[i].precun;
			cout << "Total: " << Acita[i].total << endl << endl;
				}
				system("pause>nul");
			}
			break;
	case 5:
		system("cls");
		op = 0;
		break;
	case 6:
		exit(EXIT_SUCCESS);
		break;
	default:
		cout << "Por favor, Ingrese una opcion valida";
		}
	system("pause>nul");
	system("cls");
	cout << "Desea volver al menu?";
	cout << "Si=1 No=2"<<endl;
	cin >> op;
	} while (op == 1);
}