function startGateway()

	path_builder = get_absolute_file_path("builder_gateway_cpp.sce");

	third_party_dir = path_builder + filesep() + ".." + filesep() + ".." + filesep() + "thirdparty";

	// Library Name
	if isdef("TOOLBOX_NAME") then
		LIBRARY_NAME = TOOLBOX_NAME + "_cpp";
	else
		LIBRARY_NAME = "Optimization_Toolbox_cpp";
	end

	// Function Names
	FUNC_NAMES = [
					"solve_qcqpglob","sci_qcqpglob"
					"solve_mincostflow","sci_min_cost_flow";
					"solve_linsumassignment","sci_linear_sum_assignment";
					"MaxFlow","sci_max_flow";
					"BellmanFordShortestPath","sci_BellmanFord_shortestPath";
					"TSP","sci_tsp";
					"VRP","sci_vrp";
					"JSSP","sci_jssp"
				];

	// File Names
	FILES = [
				"sci_iofunc.cpp",
				"sci_qcqpglob.cpp",
				"sci_min_cost_flow.cpp",
				"sci_linear_sum_assignment.cpp",
				"sci_max_flow.cpp",
				"sci_BellmanFord_shortestPath.cpp",
				"sci_tsp.cpp",
				"sci_vrp.cpp",
				"sci_jssp.cpp"
			];

	// Get Platform Arch
	[a, opt] = getversion();
	Arch = opt(2);

	// Default Compiler Flags
	CXX_FLAGS = "-std=c++0x -D__USE_DEPRECATED_STACK_FUNCTIONS__ -w -fpermissive ";
	LD_FLAGS = [];

	// OS Specific Compiler Configuration
	if (getos() == "Windows") then
		INC_DIR = third_party_dir + filesep() + "Windows" + filesep() + "include";
		LIB_DIR = third_party_dir + filesep() + "Windows" + filesep() + "lib" + filesep() + Arch;

		MINOTAUR_INC_DIR = INC_DIR + filesep() + "minotaur";

		CXX_FLAGS = CXX_FLAGS + "-I""" + path_builder + """ ";
		CXX_FLAGS = CXX_FLAGS + "-I""" + INC_DIR + """ ";
		CXX_FLAGS = CXX_FLAGS + "-I""" + MINOTAUR_INC_DIR + """ ";

		LIB_COINUTILS = "libCoinUtils.lib";
		LIB_OSI = "libOsi.lib";
		LIB_CLP = "libClp.lib";
		LIB_OSICLP = "libOsiClp.lib";
		LIB_CLPSOLVER = "libClpSolver.lib";
		LIB_COINMUMPS = "libcoinmumps.lib";
		LIB_IPOPT = "libipopt.lib";
		LIB_MINOTAUR = "libminotaur.lib";
		LIB_MNTROSILP = "libmntrosilp.lib";
		LIB_MNTRIPOPT = "libmntripopt.lib";
		LIB_MNTRENGFAC = "libmntrengfac.lib";
	    LIB_CVRPTW = "libcvrptw_lib.lib";
	    LIB_DIMACS = "libdimacs.lib";
	    LIB_FAP = "libfap.lib";
	    LIB_JNIORTOOLS = "libjniortools.lib";
	    LIB_ORTOOLS = "libortools.lib";

	    LD_FLAGS = LD_FLAGS + "/LIBPATH:""" + LIB_DIR + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_COINUTILS + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_OSI + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_CLP + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_OSICLP + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_CLPSOLVER + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_COINMUMPS + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_IPOPT + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_MINOTAUR + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_MNTROSILP + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_MNTRIPOPT + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_MNTRENGFAC + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_CVRPTW + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_DIMACS + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_FAP + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_JNIORTOOLS + """ ";
		LD_FLAGS = LD_FLAGS + """" + LIB_ORTOOLS + """ ";
	else
		INC_DIR = third_party_dir + filesep() + "linux" + filesep() + "include";
		LIB_DIR = third_party_dir + filesep() + "linux" + filesep() + "lib" + filesep() + Arch;

		MINOTAUR_INC_DIR = INC_DIR + filesep() + "minotaur";

		CXX_FLAGS = CXX_FLAGS + "-I""" + path_builder + """ ";
		CXX_FLAGS = CXX_FLAGS + "-I""" + INC_DIR + """ ";
		CXX_FLAGS = CXX_FLAGS + "-I""" + MINOTAUR_INC_DIR + """ ";
		CXX_FLAGS = CXX_FLAGS + "-Wl,-rpath=""" + LIB_DIR + """ ";

		LIB_COINUTILS = "CoinUtils";
		LIB_OSI = "Osi";
		LIB_CLP = "Clp";
		LIB_OSICLP = "OsiClp";
		LIB_CLPSOLVER = "ClpSolver";
		LIB_COINMUMPS = "coinmumps";
		LIB_IPOPT = "ipopt";
		LIB_MINOTAUR = "minotaur";
		LIB_MNTROSILP = "mntrosilp";
		LIB_MNTRIPOPT = "mntripopt";
		LIB_MNTRENGFAC = "mntrengfac";
	    LIB_CVRPTW = "cvrptw_lib";
	    LIB_DIMACS = "dimacs";
	    LIB_FAP = "fap";
	    LIB_JNIORTOOLS = "jniortools";
	    LIB_ORTOOLS = "ortools";

	    LD_FLAGS = LD_FLAGS + "-L""" + LIB_DIR + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_COINUTILS + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_OSI + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_CLP + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_OSICLP + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_CLPSOLVER + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_COINMUMPS + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_IPOPT + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_MINOTAUR + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_MNTROSILP + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_MNTRIPOPT + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_MNTRENGFAC + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_CVRPTW + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_DIMACS + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_FAP + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_JNIORTOOLS + """ ";
		LD_FLAGS = LD_FLAGS + "-l""" + LIB_ORTOOLS + """ ";
	end

	tbx_build_gateway(LIBRARY_NAME, FUNC_NAMES, FILES, path_builder, [], LD_FLAGS, CXX_FLAGS);

endfunction

startGateway();

clear startGateway;
