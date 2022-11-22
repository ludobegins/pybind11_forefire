#include <pybind11/pybind11.h>

#include <../../forefire/include/forefire/PLibForeFire.h>

namespace py = pybind11;

PYBIND11_MODULE(forefire, m) {

    m.doc() = "Forefire simulation";

    py::class_<PLibForeFire>(m, "PLibForeFire")
        .def(py::init<>())
        .def("getInt", &PLibForeFire::getInt);

}