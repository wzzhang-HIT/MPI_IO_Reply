#include "preprocess.h"
#include "datatype.h"
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	if (argc  != 2)
	{
		cout << "input dirname" << endl;
		return 1;
	}

	string filename(argv[1] + string("log.0"));
	string filename2(argv[1] + string("log.1"));
	Preprocess ppi(filename, 4, 0, true);
	ppi.run();

	ofstream fout("reorder_out.0");
	data_print(ppi.get_data(), fout);

	Preprocess ppi2(filename2, 4, 1, true);
	ppi2.run();

	ofstream fout2("reorder_out.1");
	data_print(ppi.get_data(), fout2);


	return 0;

}
