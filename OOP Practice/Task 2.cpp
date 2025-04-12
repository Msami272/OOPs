#include <iostream>
#include <string>
using namespace std;

// 1. Base Device Class
class Device {
public:
    string name;
    string location;
    bool isOn = false;

    void turnOn() { isOn = true; }
    void turnOff() { isOn = false; }
    void showStatus() {
        cout << name << " (" << location << ") - " << (isOn ? "ON" : "OFF") << endl;
    }
};

// 2. Smart Light
class SmartLight : public Device {
public:
    int brightness = 50;
    string color = "White";

    void setBrightness(int b) { brightness = b; }
    void setColor(string c) { color = c; }
    void showStatus() {
        Device::showStatus();
        if (isOn) cout << "Brightness: " << brightness << "%, Color: " << color << endl;
    }
};

// 3. Smart Thermostat
class SmartThermostat : public Device {
public:
    float temp = 22.0;
    string mode = "Auto";

    void setTemp(float t) { 
        temp = t; 
        if (mode == "Auto" && temp < 18) mode = "Heat";
    }
    void setMode(string m) { mode = m; }
    void showStatus() {
        Device::showStatus();
        if (isOn) cout << "Temp: " << temp << "°C, Mode: " << mode << endl;
    }
};

// 4. Security Camera
class SecurityCamera : public Device {
public:
    bool isRecording = false;

    void startRecording() { if (isOn) isRecording = true; }
    void stopRecording() { isRecording = false; }
    void viewFeed() { if (isOn) cout << "Viewing live feed" << endl; }
    void showStatus() {
        Device::showStatus();
        if (isOn) cout << "Recording: " << (isRecording ? "YES" : "NO") << endl;
    }
};

int main() {
    SmartLight light;
    light.name = "Bedroom Light";
    light.location = "Bedroom";
    light.turnOn();
    light.setBrightness(70);
    light.setColor("Blue");
    light.showStatus();

    SmartThermostat thermo;
    thermo.name = "Living Room Thermostat";
    thermo.location = "Living Room";
    thermo.turnOn();
    thermo.setTemp(17.5); // Auto switches to Heat
    thermo.setMode("Cool");
    thermo.showStatus();

    SecurityCamera cam;
    cam.name = "Front Camera";
    cam.location = "Entrance";
    cam.turnOn();
    cam.startRecording();
    cam.viewFeed();
    cam.showStatus();

    return 0;
}
