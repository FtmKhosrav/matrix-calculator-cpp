#include <iostream>

using namespace std;
double A[100][100]{};
int l = 0;
int c = 0;
double B[100][100]{};
int ll = 0;
int cc = 0;
double C[100][100]{};
double InversematrixB[100][100];
void first() {
	cout << "  select an option\n\n";
	cout << " 1) get matrix A \n";
	cout << " 2) get matrix B \n";
	cout << " 3) replace B with A \n";
	cout << " 4) replace A with B \n";
	cout << " 5) A+B \n";
	cout << " 6) A-B \n";
	cout << " 7) A*B \n";
	cout << " 8) A/B \n";
	cout << " 9) a*A \n";
	cout << " 10) determinant of matrix A \n";
	cout << " 11) determinant of matrix B \n";
	cout << " 12) show matrix A \n";
	cout << " 13) show matrix B \n";
	cout << " 14) exit \n";
}
void getmatrixA() {
	cout << "enter the number of lines of matrix A      *the number of the lines can not be more then 100 \n";
	cin >> l;
	cout << "enter the number of columns of matrix A      *the number of the columns can not be more then 100 \n";
	cin >> c;
	if (l < 101 && c < 101) {
		cout << "enter the matrix A \n";
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < c; j++)

				cin >> A[i][j];
		}
	}
	else
		cout << " numbers of lines and/or columns are/is more than acceptable amount :| ";
}

void getmatrixB() {
	cout << "enter the number of lines of matrix B      *the number of the lines can not be more then 100 \n";
	cin >> ll;
	cout << "enter the number of columns  of matrix B     *the number of the columns can not be more then 100 \n";
	cin >> cc;


	if (ll < 101 && cc < 101) {
		cout << "enter the matrix B \n";
		for (int i = 0; i < ll; i++)
		{
			for (int j = 0; j < cc; j++)

				cin >> B[i][j];
		}
	}
	else
		cout << " numbers of lines and/or columns are/is more than acceptable amount :| \n";
}
void repBA() {

	if ((l != 0 || c != 0) && (ll != 0 || cc != 0)) {
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					B[i][j] = A[i][j];
			}
		}
		else
		{
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = 0;
				}
			}
			ll = l;
			cc = c;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = A[i][j];
				}
			}
		}
	}
	else if (l == 0 && c == 0 && ll == 0 && cc == 0) {
		cout << "first enter matrix A and then enter matrix B \n";
		getmatrixA();
		getmatrixB();
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					B[i][j] = A[i][j];
			}
		}
		else
		{
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = 0;
				}
			}
			ll = l;
			cc = c;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = A[i][j];
				}
			}
		}

	}
	else if (l == 0 && c == 0 && ll != 0 && cc != 0) {
		cout << "first enter matrix A \n";
		getmatrixA();
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					B[i][j] = A[i][j];
			}
		}
		else
		{
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = 0;
				}
			}
			ll = l;
			cc = c;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = A[i][j];
				}
			}
		}
	}
	else if (ll == 0 && cc == 0 && l != 0 && c != 0) {
		cout << "first enter matrix B \n";
		getmatrixB();
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					B[i][j] = A[i][j];
			}
		}
		else
		{
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = 0;
				}
			}
			ll = l;
			cc = c;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					B[i][j] = A[i][j];
				}
			}
		}
	}

}
void repAB() {

	if ((l != 0 || c != 0) && (ll != 0 || cc != 0)) {
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					A[i][j] = B[i][j];
			}
		}
		else
		{
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++) {
					A[i][j] = 0;
				}
			}
			l = ll;
			c = cc;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					A[i][j] = B[i][j];
				}
			}
		}
	}
	else if (l == 0 && c == 0 && ll == 0 && cc == 0) {
		cout << "first enter matrix A and then enter matrix B \n";
		getmatrixA();
		getmatrixB();
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					A[i][j] = B[i][j];
			}
		}
		else
		{
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++) {
					A[i][j] = 0;
				}
			}
			l = ll;
			c = cc;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					A[i][j] = B[i][j];
				}
			}
		}

	}
	else if (l == 0 && c == 0 && ll != 0 && cc != 0) {
		cout << "first enter matrix A \n";
		getmatrixA();
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					A[i][j] = B[i][j];
			}
		}
		else
		{
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++) {
					B[i][j] = 0;
				}
			}
			l = ll;
			c = cc;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					A[i][j] = B[i][j];
				}
			}
		}
	}
	else if (ll == 0 && cc == 0 && l != 0 && c != 0) {
		cout << "first enter matrix B \n";
		getmatrixB();
		if (l == ll && c == cc) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					A[i][j] = B[i][j];
			}
		}
		else
		{
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++) {
					A[i][j] = 0;
				}
			}
			l = ll;
			c = cc;
			for (int i = 0; i < ll; i++) {
				for (int j = 0; j < cc; j++) {
					A[i][j] = B[i][j];
				}
			}
		}
	}

}
void sum() {
	if (l == ll && c == cc) {
		if ((l != 0 || c != 0) && (ll != 0 || cc != 0)) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = B[i][j] + A[i][j];
			}
			cout << "matrix A plus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}
		else if (l == 0 && c == 0 && ll == 0 && cc == 0) {
			cout << "first enter matrix A and then enter matrix B \n";
			getmatrixA();
			getmatrixB();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = B[i][j] + A[i][j];
			}
			cout << "matrix A plus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}
		else if (l == 0 && c == 0 && ll != 0 && cc != 0) {
			cout << "first enter matrix A \n";
			getmatrixA();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = B[i][j] + A[i][j];
			}
			cout << "matrix A plus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}
		else if (ll == 0 && cc == 0 && l != 0 && c != 0) {
			cout << "first enter matrix B \n";
			getmatrixB();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = B[i][j] + A[i][j];
			}
			cout << "matrix A plus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}

	}
	else
		cout << "impossible!\n";
}

void subtraction() {
	if (l == ll && c == cc) {
		if ((l != 0 || c != 0) && (ll != 0 || cc != 0)) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = A[i][j] - B[i][j];
			}
			cout << "matrix A minus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}
		else if (l == 0 && c == 0 && ll == 0 && cc == 0) {
			cout << "first enter matrix A and then enter matrix B \n";
			getmatrixA();
			getmatrixB();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = A[i][j] - B[i][j];
			}
			cout << "matrix A minus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}
		else if (l == 0 && c == 0 && ll != 0 && cc != 0) {
			cout << "first enter matrix A \n";
			getmatrixA();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = A[i][j] - B[i][j];
			}
			cout << "matrix A minus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}
		else if (ll == 0 && cc == 0 && l != 0 && c != 0) {
			cout << "first enter matrix B \n";
			getmatrixB();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++)
					C[i][j] = A[i][j] - B[i][j];
			}
			cout << "matrix A minus matrix B is equal to : ";
			for (int i = 0; i < ll; i++)
			{
				cout << endl;
				for (int j = 0; j < cc; j++) {

					cout << C[i][j] << " ";
				}
			}
		}

	}
	else
		cout << "impossible!\n";
}
void multiplication() {
	if ((l != 0 || c != 0) && (ll != 0 || cc != 0)) {
		if (c == ll) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < cc; j++) {
					C[i][j] = 0;
					for (int p = 0; p < c; p++) {
						C[i][j] = A[i][p] * B[p][j] + C[i][j];
					}

				}
			}

			for (int i = 0; i < l; i++) {
				cout << endl;
				for (int j = 0; j < cc; j++)
					cout << C[i][j] << " ";
			}
		}
		else
			cout << "impossible \n";
	}
	else if (l == 0 && c == 0 && ll == 0 && cc == 0) {
		if (c == ll) {
			cout << "first enter matrix A and then enter matrix B \n";
			getmatrixA();
			getmatrixB();
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < cc; j++) {
					C[i][j] = 0;
					for (int p = 0; p < c; p++) {
						C[i][j] = A[i][p] * B[p][j] + C[i][j];
					}

				}
			}

			for (int i = 0; i < l; i++) {
				cout << endl;
				for (int j = 0; j < cc; j++)
					cout << C[i][j] << " ";
			}
		}
		else
			cout << "impossible \n";
	}


	else if (l == 0 && c == 0 && ll != 0 && cc != 0) {
		cout << "first enter matrix A \n";
		getmatrixA();
		if (c == ll) {

			for (int i = 0; i < l; i++) {
				for (int j = 0; j < cc; j++) {
					C[i][j] = 0;
					for (int p = 0; p < c; p++) {
						C[i][j] = A[i][p] * B[p][j] + C[i][j];
					}

				}
			}

			for (int i = 0; i < l; i++) {
				cout << endl;
				for (int j = 0; j < cc; j++)
					cout << C[i][j] << " ";
			}
		}
		else
			cout << "impossible \n";
	}
	else if (ll == 0 && cc == 0 && l != 0 && c != 0) {
		cout << "first enter matrix B \n";
		getmatrixB();
		if (c == ll) {
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < cc; j++) {
					C[i][j] = 0;
					for (int p = 0; p < c; p++) {
						C[i][j] = A[i][p] * B[p][j] + C[i][j];
					}

				}
			}

			for (int i = 0; i < l; i++) {
				cout << endl;
				for (int j = 0; j < cc; j++)
					cout << C[i][j] << " ";
			}
		}
		else
			cout << "impossible \n";
	}
}

void mul() {
	if (l != 0 || c != 0) {
		double a;
		cout << "enter the multiple";
		cin >> a;
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < c; j++)
			{
				C[i][j] = a * A[i][j];
			}
		}
		cout << "the new matrix is : ";
		for (int i = 0; i < l; i++) {
			cout << endl;
			for (int j = 0; j < c; j++)
				cout << C[i][j] << " ";
		}
		cout << endl;
	}
	else
		cout << "first enter matrix A \n";
	getmatrixA();
	double a;
	cout << "enter the multiple \n";
	cin >> a;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			C[i][j] = a * A[i][j];
		}
	}
	cout << "the new matrix is : ";
	for (int i = 0; i < l; i++) {
		cout << endl;
		for (int j = 0; j < c; j++)
			cout << C[i][j] << " ";
	}
	cout << endl;
}
double det(double D[100][100], int  n) {
	double dete = 0; int p, h, k, i, j; double C[100][100];
	if (n == 1) {
		return D[0][0];
	}
	else if (n == 2) {
		dete = (D[0][0] * D[1][1] - D[0][1] * D[1][0]);
		return dete;
	}
	else {
		for (p = 0; p < n; p++) {
			h = 0;
			k = 0;
			for (i = 1; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (j == p) {
						continue;
					}
					C[h][k] = D[i][j];
					k++;
					if (k == n - 1) {
						h++;
						k = 0;
					}

				}
			}
			dete = dete + D[0][p] * pow(-1, p) * det(C, n - 1);
		}
		return dete;
	}

}
void inverse(int n) {
	int i, j, k; double D;

	if (det(B, ll) != 0.000) {

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < 2 * n; ++j)
			{
				if (j == (i + n))
				{
					B[i][j] = 1;
				}
			}
		}


		for (i = n; i > 1; --i)
		{
			if (B[i - 1][1] < B[i][1])
			{
				for (j = 0; j < 2 * n; ++j)
				{
					D = B[i][j];
					B[i][j] = B[i - 1][j];
					B[i - 1][j] = D;
				}
			}
		}
		cout << endl;

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < 2 * n; ++j)
			{
				if (j != i)
				{
					D = B[j][i] / B[i][i];
					for (k = 0; k < n * 2; ++k)
					{
						B[j][k] = B[j][k] - B[i][k] * D;
					}
				}
			}
		}
		cout << endl;
		for (i = 0; i < n; ++i)
		{
			D = B[i][i];
			for (j = 0; j < 2 * n; ++j)
			{
				B[i][j] = B[i][j] / D;
			}

		}
		int z = 0, y = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = n; j < 2 * n; ++j)
			{
				InversematrixB[z][y] = B[i][j];
				y++;
				if (y == n) {
					z++;
					y = 0;
				}

			}
		}
	}
	
}
void showmatrixA() {
	if (l != 0 || c != 0) {
		cout << "matrix A is: \n";
		for (int i = 0; i < l; i++) {
			cout << endl;
			for (int j = 0; j < c; j++)
				cout << A[i][j] << " ";
		}
		cout << endl;
	}

	else
		cout << "first enter matrix A \n";
	getmatrixA();
	cout << "matrix A is: \n";
	for (int i = 0; i < l; i++) {
		cout << endl;
		for (int j = 0; j < c; j++)
			cout << A[i][j] << " ";
	}
	cout << endl;
}

void showmatrixB() {
	if (ll != 0 || cc != 0) {
		cout << "matrix B is: \n";
		for (int i = 0; i < ll; i++)
		{
			cout << endl;
			for (int j = 0; j < cc; j++) {

				cout << B[i][j] << " ";
			}
		}
		cout << endl;
	}

	else
		cout << "first enter matrix B \n";
	getmatrixB();
	cout << "matrix B is: \n";
	for (int i = 0; i < ll; i++)
	{
		cout << endl;
		for (int j = 0; j < cc; j++) {

			cout << B[i][j] << " ";
		}
	}
	cout << endl;
}
int main() {

	int option;
	do {
		first();
		cin >> option;
		switch (option) {
		case 1: getmatrixA();
			break;
		case 2: getmatrixB();
			break;
		case 3:
			repBA();
			showmatrixB();
			break;
		case 4:
			repAB();
			showmatrixA();
			break;
		case 5: sum();
			break;
		case 6: subtraction();
			break;
		case 7: multiplication();
			break;
		case 8:
			inverse(ll);
			if ((l != 0 || c != 0) && (ll != 0 || cc != 0)) {
				inverse(ll);
				for (int i = 0; i < ll; i++) {
					for (int j = 0; j < cc; j++) {
						B[i][j] = InversematrixB[i][j];
					}
				}
				if (ll == cc) {
					multiplication();
				}
			}
			else if (l == 0 && c == 0 && ll == 0 && cc == 0) {
				cout << "first enter matrix A and then enter matrix B \n";
				getmatrixA();
				getmatrixB();
				inverse(ll);
				for (int i = 0; i < ll; i++) {
					for (int j = 0; j < cc; j++) {
						B[i][j] = InversematrixB[i][j];
					}
				}
				if (ll == cc) {
					multiplication();
				}
			}
			else if (l == 0 && c == 0 && ll != 0 && cc != 0) {
				cout << "first enter matrix A \n";
				getmatrixA();
				inverse(ll);
				for (int i = 0; i < ll; i++) {
					for (int j = 0; j < cc; j++) {
						B[i][j] = InversematrixB[i][j];
					}
				}
				if (ll == cc) {
					multiplication();
				}
			}
			else if (ll == 0 && cc == 0 && l != 0 && c != 0) {
				cout << "first enter matrix B \n";
				getmatrixB();
				inverse(ll);
				for (int i = 0; i < ll; i++) {
					for (int j = 0; j < cc; j++) {
						B[i][j] = InversematrixB[i][j];
					}
				}
				if (ll == cc) {
					multiplication();
				}
			}
			cout << endl;


			break;

		case 9:
			mul();
			break;
		case 10:

			if (l != 0 || c != 0) {
				if (c == l) {
					cout << det(A, l);
					cout << endl;
				}
				else {
					cout << "impossiblen \n";
				}
			}
			else
			{
				cout << "first enter matrix A \n";
				getmatrixA();
				if (c == l) {
					cout << "the determinant of matrix A is: " << det(A, l);
					cout << endl;
				}
				else {
					cout << "impossiblen \n";
				}
			}

			break;
		case 11:

			if (ll != 0 || cc != 0) {
				if (cc == ll) {
					cout << det(B, l);
					cout << endl;
				}
				else {
					cout << "impossible! \n";
				}
			}
			else
			{
				cout << "first enter matrix B \n";
				getmatrixB();
				if (cc == ll) {
					cout << "the determinant of matrix B is: " << det(B, l);
					cout << endl;
				}
				else {
					cout << "impossible!\n";
				}
			}

			break;

		case 12:
			showmatrixA();
			break;
		case 13:
			showmatrixB();
		case 14:
			break;
		}
	} while (option != 14);
	return 0;
}


