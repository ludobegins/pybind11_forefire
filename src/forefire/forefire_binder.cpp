#include <pybind11/pybind11.h>

#include <../../lib/forefire/firefront/swig/PLibForeFire.h>

namespace py = pybind11;

PYBIND11_MODULE(forefire, m) {

    m.doc() = "Forefire simulation";

    py::class_<PLibForeFire>(m, "PLibForeFire")
        .def("getInst", &PLibForeFire::getInt);

}