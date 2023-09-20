#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chassis {
public:
    string id;
    string type = "SCOUT MINI";
    string wheelbase = "451mm";
    string trackWidth = "490mm";
    string min_groundClearance = "115mm";
    int min_turnRadius = 0;
    string max_stroke = "10km";
    string tires = "4 off";
    string model = "Highway wheel, McNaim wheel";
    string size = "175mm";

    void setChassisDetails(const string& id, const string& type, const string& wheelbase, const string& trackWidth,
                           const string& min_groundClearance, int min_turnRadius, const string& max_stroke,
                           const string& tires, const string& model, const string& size) {
        this->id = id;
        this->type = type;
        this->wheelbase = wheelbase;
        this->trackWidth = trackWidth;
        this->min_groundClearance = min_groundClearance;
        this->min_turnRadius = min_turnRadius;
        this->max_stroke = max_stroke;
        this->tires = tires;
        this->model = model;
        this->size = size;
    }

    void printChassisInfo() const {
        cout << "a) 编号：" << id << endl;
        cout << "b) 型号：" << type << endl;
        cout << "c) 轴距：" << wheelbase << endl;
        cout << "d) 轮距：" << trackWidth << endl;
        cout << "e) 最小离地间隙：" << min_groundClearance << endl;
        cout << "f) 最小转弯半径：" << min_turnRadius << endl;
        cout << "h) 最大行程：" << max_stroke << endl;
        cout << "i) 轮胎（4个）：" << tires << endl;
        cout << "i. 型号：" << model << endl;
        cout << "ii. 尺寸：" << size << endl;
    }

    void saveChassisInfo(ofstream& file) const {
        file << "a) 编号：" << id << endl;
        file << "b) 型号：" << type << endl;
        file << "c) 轴距：" << wheelbase << endl;
        file << "d) 轮距：" << trackWidth << endl;
        file << "e) 最小离地间隙：" << min_groundClearance << endl;
        file << "f) 最小转弯半径：" << min_turnRadius << endl;
        file << "h) 最大行程：" << max_stroke << endl;
        file << "i) 轮胎（4个）：" << tires << endl;
        file << "i. 型号：" << model << endl;
        file << "ii. 尺寸：" << size << endl;
    }
};

class AGXKit {
public:
    string model = "AGX Xavier";
    int AI = 32;
    int cudaCores = 512;
    int tensorCores = 64;
    string videoMemory = "32G";
    string storage = "32G";

    void setAGXKitDetails(const string& model, int AI, int cudaCores, int tensorCores, const string& videoMemory,
                         const string& storage) {
        this->model = model;
        this->AI = AI;
        this->cudaCores = cudaCores;
        this->tensorCores = tensorCores;
        this->videoMemory = videoMemory;
        this->storage = storage;
    }

    void printAGXKitInfo() const {
        cout << "a) 型号：" << model << endl;
        cout << "b) AI：" << AI << endl;
        cout << "c) CUDA核心：" << cudaCores << endl;
        cout << "d) Tensor CORE：" << tensorCores << endl;
        cout << "e) 显存：" << videoMemory << endl;
        cout << "f) 存储：" << storage << endl;
    }

    void saveAGXKitInfo(ofstream& file) const {
        file << "a) 型号：" << model << endl;
        file << "b) AI：" << AI << endl;
        file << "c) CUDA核心：" << cudaCores << endl;
        file << "d) Tensor CORE：" << tensorCores << endl;
        file << "e) 显存：" << videoMemory << endl;
        file << "f) 存储：" << storage << endl;
    }
};

class CameraSpecs {
public:
    string model = "RealSense D435i";
    string camera = "D430";
    int rgbFrameWidth = 1920;
    int rgbFrameHeight = 1080;
    int rgbFrameRate = 30;
    double fov = 8758;
    int depthFrameRate = 90;

    void setCameraSpecsDetails(const string& model, const string& camera, int rgbFrameWidth, int rgbFrameHeight,
                               int rgbFrameRate, double fov, int depthFrameRate) {
        this->model = model;
        this->camera = camera;
        this->rgbFrameWidth = rgbFrameWidth;
        this->rgbFrameHeight = rgbFrameHeight;
        this->rgbFrameRate = rgbFrameRate;
        this->fov = fov;
        this->depthFrameRate = depthFrameRate;
    }

    void printCameraSpecsInfo() const {
        cout << "a) 型号：" << model << endl;
        cout << "b) 摄像头：" << camera << endl;
        cout << "c) RGB帧分辨率：" << rgbFrameWidth << endl;
        cout << "d) RGB分辨率：" << rgbFrameHeight << endl;
        cout << "d) RGB帧率：" << rgbFrameRate << endl;
        cout << "e) FOV：" << fov << endl;
        cout << "f) 深度帧率：" << depthFrameRate << endl;
    }

    void saveCameraSpecsInfo(ofstream& file) const {
        file << "a) 型号：" << model << endl;
        file << "b) 摄像头：" << camera << endl;
        file << "c) RGB帧分辨率：" << rgbFrameWidth << endl;
        file << "d) RGB分辨率：" << rgbFrameHeight << endl;
        file << "d) RGB帧率：" << rgbFrameRate << endl;
        file << "e) FOV：" << fov << endl;
        file << "f) 深度帧率：" << depthFrameRate << endl;
    }
};

class LiDAR {
public:
    string model = "RS-Helios-16p";
    int numChannels = 16;
    double testRange = 100.0;
    double powerConsumption = 8.0;

    void setLiDARDetails(const string& model, int numChannels, double testRange, double powerConsumption) {
        this->model = model;
        this->numChannels = numChannels;
        this->testRange = testRange;
        this->powerConsumption = powerConsumption;
    }

    void printLiDARInfo() const {
        cout << "a) 型号：" << model << endl;
        cout << "b) 通道数：" << numChannels << endl;
        cout << "c) 测试范围：" << testRange << endl;
        cout << "d) 功耗：" << powerConsumption << endl;
    }

    void saveLiDARInfo(ofstream& file) const {
        file << "a) 型号：" << model << endl;
        file << "b) 通道数：" << numChannels << endl;
        file << "c) 测试范围：" << testRange << endl;
        file << "d) 功耗：" << powerConsumption << endl;
    }
};

class Gyroscope {
public:
    string model = "CH110";
    string manufacturer = "NXP";

    void setGyroscopeDetails(const string& model, const string& manufacturer) {
        this->model = model;
        this->manufacturer = manufacturer;
    }

    void printGyroscopeInfo() const {
        cout << "a) 型号：" << model << endl;
        cout << "b) 厂家：" << manufacturer << endl;
    }

    void saveGyroscopeInfo(ofstream& file) const {
        file << "a) 型号：" << model << endl;
        file << "b) 厂家：" << manufacturer << endl;
    }
};

class LCDDisplay {
public:
    double size = 11.6;
    string model = "super";

    void setLCDDisplayDetails(double size, const string& model) {
        this->size = size;
        this->model = model;
    }

    void printLCDDisplayInfo() const {
        cout << "a) 尺寸：" << size << endl;
        cout << "b) 型号：" << model << endl;
    }

    void saveLCDDisplayInfo(ofstream& file) const {
        file << "a) 尺寸：" << size << endl;
        file << "b) 型号：" << model << endl;
    }
};

class BatteryModule {
public:
    string s1 = "24V/15Ah";
    string s2 = "24V";
    string s3 = "2H";

    void setBatteryModuleDetails(const string& s1, const string& s2, const string& s3) {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

    void printBatteryModuleInfo() const {
        cout << "(a) 参数：" << s1 << endl;
        cout << "(b) 对外供电：" << s2 << endl;
        cout << "(c) 充电时长：" << s3 << endl;
    }

    void saveBatteryModuleInfo(ofstream& file) const {
        file << "(a) 参数：" << s1 << endl;
        file << "(b) 对外供电：" << s2 << endl;
        file << "(c) 充电时长：" << s3 << endl;
    }
};

class Car {
public:
    string id;
    Chassis chassis;
    AGXKit agxKit;
    CameraSpecs cameraSpecs;
    LiDAR liDAR;
    Gyroscope gyroscope;
    LCDDisplay lcDDisplay;
    BatteryModule batteryModule;
    string studentId;  // Student assigned to this car

    Car(const string& id) : id(id) {}

    void setCarDetails(const string& studentId, const string& chassisId, const string& chassisType,
                       const string& chassisWheelbase, const string& chassisTrackWidth,
                       const string& chassisMinGroundClearance, int chassisMinTurnRadius,
                       const string& chassisMaxStroke, const string& chassisTires,
                       const string& chassisModel, const string& chassisSize,
                       const string& agxKitModel, int agxKitAI, int agxKitCudaCores,
                       int agxKitTensorCores, const string& agxKitVideoMemory,
                       const string& agxKitStorage, const string& cameraModel,
                       const string& cameraCamera, int cameraRgbFrameWidth,
                       int cameraRgbFrameHeight, int cameraRgbFrameRate,
                       double cameraFov, int cameraDepthFrameRate,
                       const string& liDARModel, int liDARNumChannels,
                       double liDARTestRange, double liDARPowerConsumption,
                       const string& gyroscopeModel, const string& gyroscopeManufacturer,
                       double lcDDisplaySize, const string& lcDDisplayModel,
                       const string& batteryModuleS1, const string& batteryModuleS2,
                       const string& batteryModuleS3) {
        this->studentId = studentId;
        chassis.setChassisDetails(chassisId, chassisType, chassisWheelbase, chassisTrackWidth,
                                  chassisMinGroundClearance, chassisMinTurnRadius, chassisMaxStroke,
                                  chassisTires, chassisModel, chassisSize);
        agxKit.setAGXKitDetails(agxKitModel, agxKitAI, agxKitCudaCores, agxKitTensorCores,
                                agxKitVideoMemory, agxKitStorage);
        cameraSpecs.setCameraSpecsDetails(cameraModel, cameraCamera, cameraRgbFrameWidth,
                                          cameraRgbFrameHeight, cameraRgbFrameRate, cameraFov,
                                          cameraDepthFrameRate);
        liDAR.setLiDARDetails(liDARModel, liDARNumChannels, liDARTestRange, liDARPowerConsumption);
        gyroscope.setGyroscopeDetails(gyroscopeModel, gyroscopeManufacturer);
        lcDDisplay.setLCDDisplayDetails(lcDDisplaySize, lcDDisplayModel);
        batteryModule.setBatteryModuleDetails(batteryModuleS1, batteryModuleS2, batteryModuleS3);
    }

    void printCarInfo() const {
        cout << "智能小车信息包括：" << endl;
        cout << "（1） 编号：" << id << endl;
        cout << "（2） 底盘：" << endl;
        chassis.printChassisInfo();
        cout << "（3） AGX套件（1个）：" << endl;
        agxKit.printAGXKitInfo();
        cout << "（4） 双目摄像头（1个）：" << endl;
        cameraSpecs.printCameraSpecsInfo();
        cout << "（5） 多线激光雷达（1个）：" << endl;
        liDAR.printLiDARInfo();
        cout << "（6） 9轴陀螺仪（1个）：" << endl;
        gyroscope.printGyroscopeInfo();
        cout << "（7） 液晶显示屏（1个）：" << endl;
        lcDDisplay.printLCDDisplayInfo();
        cout << "（8） 电池模块（1个）：" << endl;
        batteryModule.printBatteryModuleInfo();
        cout << "（9） 分配给学生的学号：" << studentId << endl;
    }

    void saveCarInfo(ofstream& file) const {
        file << "智能小车信息包括：" << endl;
        file << "（1） 编号：" << id << endl;
        file << "（2） 底盘：" << endl;
        chassis.saveChassisInfo(file);
        file << "（3） AGX套件（1个）：" << endl;
        agxKit.saveAGXKitInfo(file);
        file << "（4） 双目摄像头（1个）：" << endl;
        cameraSpecs.saveCameraSpecsInfo(file);
        file << "（5） 多线激光雷达（1个）：" << endl;
        liDAR.saveLiDARInfo(file);
        file << "（6） 9轴陀螺仪（1个）：" << endl;
        gyroscope.saveGyroscopeInfo(file);
        file << "（7） 液晶显示屏（1个）：" << endl;
        lcDDisplay.saveLCDDisplayInfo(file);
        file << "（8） 电池模块（1个）：" << endl;
        batteryModule.saveBatteryModuleInfo(file);
        file << "（9） 分配给学生的学号：" << studentId << endl;
    }
};

#endif // CAR_H
