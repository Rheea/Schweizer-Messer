// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_06_02_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 6, 2 > >::register_converter();
}
