// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_16_05_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 16, 5 > >::register_converter();
}
