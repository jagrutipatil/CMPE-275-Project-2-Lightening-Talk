

//
//namespace randomRead {
//void randomReadFromFile() {
//	std::ifstream is;
//	string filePath =
//			"/home/jagruti/workspace/CMPE-275-Project-2-Lightening-Talk/Code/data.txt";
//	string firstname, lastname, visaType, isValidVisa, isStampingDone;
//	std::ifstream infile(filePath.c_str());
//	std::string line;
//	int n;
//	cout << "Enter the value of n";
//	cin >> n;
//	int i = 0;
//	int arr[n];
//
//	arr[i] = int(infile.tellg());
//	while (std::getline(infile, line)) {
//		if (i < n) {
//			i++;
//			arr[i] = int(infile.tellg());
//		}
//		std::istringstream iss(line);
//	}
//
//	i = 0;
////			omp_set_num_threads(NUM_THREADS);
//	string s;
//
//	for (i = 0; i < n; i++) {
//		infile.clear();
//		infile.seekg(arr[i]);
//		getline(infile, s);
//		std::istringstream iss(s);
//	}
//}
//}
