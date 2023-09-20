#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "student.h" // 包含学生类的头文件
#include "car.h"     // 包含汽车类的头文件

using namespace std;

void saveCarsToFile(const vector<Car>& cars, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "无法打开文件" << filename << endl;
        return;
    }

    for (const Car& car : cars) {
        car.saveCarInfo(file);
    }

    file.close();
}

void saveStudentsToFile(const vector<Student>& students, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "无法打开文件" << filename << endl;
        return;
    }

    for (const Student& student : students) {
        student.saveStudentInfo(file);
    }

    file.close();
}

vector<Car> loadCarsFromFile() {
    vector<Car> cars;
    ifstream file("cars.txt");
    if (!file.is_open()) {
        cout << "无法打开文件" << endl;
        return cars;
    }
    string id;
    string studentId;
    string chassisId, chassisType, chassisWheelbase, chassisTrackWidth, chassisMinGroundClearance;
    int chassisMinTurnRadius;
    string chassisMaxStroke, chassisTires, chassisModel, chassisSize;
    string agxKitModel;
    int agxKitAI, agxKitCudaCores, agxKitTensorCores;
    string agxKitVideoMemory, agxKitStorage;
    string cameraModel, cameraCamera;
    int cameraRgbFrameWidth, cameraRgbFrameHeight, cameraRgbFrameRate;
    double cameraFov;
    int cameraDepthFrameRate;
    string liDARModel;
    int liDARNumChannels;
    double liDARTestRange;
    double liDARPowerConsumption;
    string gyroscopeModel, gyroscopeManufacturer;
    double lcDDisplaySize;
    string lcDDisplayModel;
    string batteryModuleS1, batteryModuleS2, batteryModuleS3;
    while (getline(file, id)) {
        getline(file, studentId);
        getline(file, chassisId);
        getline(file, chassisType);
        getline(file, chassisWheelbase);
        getline(file, chassisTrackWidth);
        getline(file, chassisMinGroundClearance);
        file >> chassisMinTurnRadius;
        file.ignore();
        getline(file, chassisMaxStroke);
        getline(file, chassisTires);
        getline(file, chassisModel);
        getline(file, chassisSize);
        getline(file, agxKitModel);
        file >> agxKitAI;
        file >> agxKitCudaCores;
        file >> agxKitTensorCores;
        file.ignore();
        getline(file, agxKitVideoMemory);
        getline(file, agxKitStorage);
        getline(file, cameraModel);
        getline(file, cameraCamera);
        file >> cameraRgbFrameWidth;
        file >> cameraRgbFrameHeight;
        file >> cameraRgbFrameRate;
        file >> cameraFov;
        file >> cameraDepthFrameRate;
        file.ignore();
        getline(file, liDARModel);
        file >> liDARNumChannels;
        file >> liDARTestRange;
        file >> liDARPowerConsumption;
        file.ignore();
        getline(file, gyroscopeModel);
        getline(file, gyroscopeManufacturer);
        file >> lcDDisplaySize;
        file.ignore();
        getline(file, lcDDisplayModel);
        getline(file, batteryModuleS1);
        getline(file, batteryModuleS2);
        getline(file, batteryModuleS3);

        Car car(id);
        car.setCarDetails(studentId, chassisId, chassisType, chassisWheelbase, chassisTrackWidth,
                          chassisMinGroundClearance, chassisMinTurnRadius, chassisMaxStroke, chassisTires,
                          chassisModel, chassisSize, agxKitModel, agxKitAI, agxKitCudaCores,
                          agxKitTensorCores, agxKitVideoMemory, agxKitStorage, cameraModel, cameraCamera,
                          cameraRgbFrameWidth, cameraRgbFrameHeight, cameraRgbFrameRate, cameraFov,
                          cameraDepthFrameRate, liDARModel, liDARNumChannels, liDARTestRange,
                          liDARPowerConsumption, gyroscopeModel, gyroscopeManufacturer, lcDDisplaySize,
                          lcDDisplayModel, batteryModuleS1, batteryModuleS2, batteryModuleS3);
        cars.push_back(car);
    }
    file.close();
    return cars;
}

vector<Student> loadStudentsFromFile() {
    vector<Student> students;
    ifstream file("students.txt");
    if (!file.is_open()) {
        cout << "无法打开文件" << endl;
        return students;
    }
    string id, name;
    while (getline(file, id)) {
        getline(file, name);
        Student student(id, name);
        students.push_back(student);
    }
    file.close();
    return students;
}

int main() {
    vector<Car> cars;
    vector<Student> students;
	for(int i=0;i<10;i++){
    // Load existing data from files
//    cars = loadCarsFromFile();
//    students = loadStudentsFromFile();

    // Input new car and student information
    string studentId, studentName;
    cout << "请输入学生信息：" << endl;
    cout << "学号：";
    getline(cin, studentId);
    cout << "姓名：";
    getline(cin, studentName);

    Student student(studentId, studentName);
    students.push_back(student);

    string carId;
    cout << "请输入智能小车信息：" << endl;
    cout << "编号：";
    getline(cin, carId);

    Car car(carId);
    car.setCarDetails(studentId, "C123", "Type X", "450mm", "480mm", "110mm", 0, "9km", "4 off", "McNaim wheel", "175mm",
                      "AGX Xavier", 32, 512, 64, "32G", "32G", "RealSense D435i", "D430", 1920, 1080, 30, 8758, 90,
                      "RS-Helios-16p", 16, 100.0, 8.0, "CH110", "NXP", 11.6, "super", "24V/15Ah", "24V", "2H");

    cars.push_back(car);

    // Save the updated data to files
    saveCarsToFile(cars, "cars.txt");
    saveStudentsToFile(students, "students.txt");
	}
    // Display car information
    for (size_t i = 0; i < cars.size(); i++) {
        
        cout << "-------------------" << endl;
        cout<<cars.size()<<endl;
        if (i >= 0) {
            cout << "按 'p' 键显示上一台小车信息，按 'n' 键显示下一台小车信息，按 'q' 键退出：" << endl;
            char input;
            cin >> input;
            cin.ignore();
            if (input == 'p' && i >= 0) {
            	cout << "显示第" << (i + 1) << "台小车信息：" << endl;
        		cars[i].printCarInfo();
                i-=2;
            } else if (input == 'n' && i < cars.size() - 1) {
            	cout << "显示第" << (i + 1) << "台小车信息：" << endl;
        		cars[i].printCarInfo();
                // Continue to the next car
            } else if (input == 'q') {
                break;
            }
        }
    }

    return 0;
}
