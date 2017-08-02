#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofNoFill();

	this->noise_source_1 = ofRandom(10);
	this->noise_source_2 = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	float tmp_noise_source_1 = this->noise_source_1;
	float tmp_noise_source_2 = this->noise_source_2;
	float noise_step = 0.05;

	for (int i = 0; i < 256; i += 5) {
		ofSetColor(255, 255 - i);

		ofPushMatrix();
		ofRotateX(120 * ofNoise(tmp_noise_source_1));
		ofRotateY(120 * ofNoise(tmp_noise_source_2));
		ofEllipse(ofVec3f(0, 0, 0), i, i);

		tmp_noise_source_1 -= noise_step;
		tmp_noise_source_2 -= noise_step;
		ofPopMatrix();
	}

	this->noise_source_1 += noise_step;
	this->noise_source_2 += noise_step;

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
