import forefire

ff = forefire.Forefire()

ff.set_parameter('dumpMode','geojson')
ff.set_parameter('projection','EPSG:32632')
ff.set_parameter('fuelsTableFile','./fuels.ff')
ff.set_propagationModel('propagationModel','Rothermel')
ff.load_data('landscape.nc', '2009-07-24T11:37:39Z')
ff.start_fire(499073.45383159, 4619272.9498144)
ff.step_print(1800)

ff.run_simulation()